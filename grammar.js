const { pair } = require('./utils.js');

const forms = {
	// ...require('./forms/fennel.js').rules,
};

const PREC = {
	COMPOUND: -2,
	OVERRIDE_SYMBOL: -1,
	STRING: 2,
	MULTI_SYMBOL: 3,
	READER_MACRO: 10,
};

// Symbols that should take priority over the default symbol definition.
//
// NOTE: They cannot be part of multi-symbols.
const SPECIAL_OVERRIDE_SYMBOLS = [
	'#',
	'?.',
	'~=',
	':',
	'$...',
	'...',
	'..',
	'.',
];

module.exports = grammar({
	name: 'fennel',

	extras: $ => [
		/\s/,
		$.comment,
	],

	externals: $ => [
		// Reader Macros
		$._hashfn_reader_macro_char,
		$._quote_reader_macro_char,
		$._quasi_quote_reader_macro_char,
		$._unquote_reader_macro_char,
		$.__reader_macro_count,

		$.__colon_string_start_mark,
		$.__colon_string_end_mark,

		$.shebang,
	],

	conflicts: $ => [
		// [$.let_form_vars, $.sequence]
	],

	word: $ => $.symbol,

	rules: {
		program: $ => seq(
			optional($.shebang),
			repeat($._sexp),
		),

		comment: $ => /;.*\n?/,

		_sexp: $ => choice(
			$._reader_macro,
			$._special_override_symbol,
			$.symbol,
			$.multi_symbol,
			$.multi_symbol_method,
			// $._form,
			$.list,
			$.sequence,
			$.table,
			$._literal,
		),

		hashfn_reader_macro: $ => seq(
			field('macro', alias($._hashfn_reader_macro_char, '#')),
			field('expression', $._sexp),
		),
		quote_reader_macro: $ => seq(
			field('macro', alias($._quote_reader_macro_char, '\'')),
			field('expression', $._sexp),
		),
		quasi_quote_reader_macro: $ => seq(
			field('macro', alias($._quasi_quote_reader_macro_char, '`')),
			field('expression', $._sexp),
		),
		unquote_reader_macro: $ => seq(
			field('macro', alias($._unquote_reader_macro_char, ',')),
			field('expression', $._sexp),
		),

		_reader_macro: $ => choice(
			$.hashfn_reader_macro,
			$.quote_reader_macro,
			$.quasi_quote_reader_macro,
			$.unquote_reader_macro,
		),

		_list_content: $ => seq(
			field('call', $._sexp),
			repeat(field('item', $._sexp)),
		),

		list: $ => prec.right(PREC.COMPOUND, seq(
			field('open', '('),
			optional($._list_content),
			field('close', ')'),
		)),

		// ...forms,

		// _form: $ => choice(
		// 	...[...Object.keys(forms)].map(form => $[form])
		// ),

		// _form: $ => seq(
		// 	field('open', '('),
		// 	$._form_content,
		// 	field('close', ')'),
		// ),

		sequence: $ => prec.dynamic(PREC.COMPOUND, seq(
			field('open', '['),
			repeat(field('item', $._sexp)),
			field('close', ']'),
		)),

		_table_pair: $ => pair($, { field: 'key' }, { field: 'value' }),

		table: $ => prec(PREC.COMPOUND, seq(
			field('open', '{'),
			repeat($._table_pair),
			field('close', '}'),
		)),

		_literal: $ => choice(
			$.string,
			$.number,
			$.boolean,
			$.nil,
		),

		nil: $ => 'nil',
		boolean: $ => choice('true', 'false'),

		_colon_string: $ => prec.right(PREC.STRING, seq(
			field('open', ':'),
			optional($.__colon_string_start_mark),
			field('content', alias(choice(...[
				'nil',
				'true',
				'false',
				...SPECIAL_OVERRIDE_SYMBOLS,
				/[^(){}\[\]"'~;,@`\s]+/,
			].map(tk => token.immediate(tk))), $.string_content)),
			optional($.__colon_string_end_mark),
		)),

		_double_quote_string: $ => seq(
			field('open', '"'),
			field('content', alias(repeat(choice(
				prec(PREC.STRING, /[^"\\]+/),
				$.escape_sequence,
			)), $.string_content)),
			field('close', '"'),
		),

		string: $ => choice(
			$._colon_string,
			$._double_quote_string,
		),

		escape_sequence: $ => token(seq(
			'\\',
			choice(
				/[^xu\d]/,
				/\d{1,3}/,
				/x[\da-fA-F]{2}/,
				/u{[\da-fA-F]+}/,
			),
		)),

		number: $ => {
			const sign = choice('-', '+');
			const digits = /\d[_\d]*/;
			const exponent = seq(choice('e', 'E'), optional(sign), digits);
			const decimal_literal = seq(
				optional(sign),
				choice(
					digits,
					seq('.', digits),
					seq(digits, '.', optional(digits)),
				),
				optional(exponent),
			);

			const hex_digits = /[a-fA-F\d][_a-fA-F\d]*/;
			const hex_exponent = seq(choice('p', 'P'), optional(sign), hex_digits);
			const hexadecimal_literal = seq(
				optional(sign),
				choice('0x', '0X'),
				choice(
					hex_digits,
					seq('.', hex_digits),
					seq(hex_digits, '.', optional(hex_digits)),
				),
				optional(hex_exponent),
			);

			return token(choice(
				decimal_literal,
				hexadecimal_literal,
			));
		},

		multi_symbol: $ => prec.dynamic(PREC.MULTI_SYMBOL, seq(
			field('base', alias($.symbol, $.symbol_fragment)),
			repeat1(seq(
				token.immediate('.'),
				field('member', $._multi_symbol_fragment),
			)),
		)),

		multi_symbol_method: $ => prec.right(seq(
			field('base', choice(
				alias($.symbol, $.symbol_fragment),
				$.multi_symbol,
			)),
			token.immediate(':'),
			field('method', $._multi_symbol_fragment),
		)),

		symbol_binding: $ => $.symbol,
		_binding: $ => $.symbol,

		symbol: $ => /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/,

		// NOTE: multi-symbol fragments starting from second position onwards have fewer restrictions on what
		// symbols they may contain, which is why its regex is just a stripped down version of $.symbol's.
		_multi_symbol_fragment: $ => alias(token.immediate(/[^(){}\[\]"'~;,@`.:\s]*/), $.symbol_fragment),

		_special_override_symbol: $ => alias(choice(...SPECIAL_OVERRIDE_SYMBOLS), $.symbol),
	},
});
