const { cloneDeep } = require('lodash');
const { pair, get_literal, apply_literal_recur } = require('./utils.js');

// const forms = {
// 	...require('./forms/fennel.js').rules,
// };

const PREC = {
	COMPOUND: -1,
	OVERRIDE_SYMBOL: 1,
	STRING: 2,
	MULTI_SYMBOL: 3,
	READER_MACRO: 10,
};

// Symbols that should take priority over the default symbol definition
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

const SYMBOL = /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/;

const NIL = 'nil';
const BOOLEAN = choice('true', 'false');

module.exports = grammar({
	name: 'fennel',

	extras: $ => [
		/\s+/,
		$.comment,
	],

	externals: $ => [
		// Reader Macros
		$._hashfn_reader_macro_char,
		$._quote_reader_macro_char,
		$._quasi_quote_reader_macro_char,
		$._unquote_reader_macro_char,
		$.__reader_macro_count,

		// TODO: Add shebang
		// $.shebang,
	],

	conflicts: $ => [
		// Form conflicts
		// [$._let_vars_body, $.sequence],
		// [$.let_form],
		// [$._let_vars_body_pair, $._list_content],
		// [$._let_vars_body_pair, $.sequence],
	],

	word: $ => $.symbol,

	rules: {
		program: $ => seq(
			// optional($.shebang),
			repeat($._sexp),
		),

		comment: $ => /;.*\n?/,

		_sexp: $ => choice(
			$._special_override_symbols,
			$._reader_macro,
			$.symbol,
			$.multi_symbol,
			$.multi_symbol_method,
			// $._form,
			$.list,
			$.sequence,
			$.table,
			$._literal,
		),

		_special_override_symbols: $ => alias(prec.dynamic(PREC.OVERRIDE_SYMBOL, choice(...SPECIAL_OVERRIDE_SYMBOLS)), $.symbol),

		hashfn_reader_macro: $ => prec(PREC.READER_MACRO, seq(
			field('macro', alias($._hashfn_reader_macro_char, '#')),
			field('expression', $._sexp),
		)),
		quote_reader_macro: $ => prec(PREC.READER_MACRO, seq(
			field('macro', alias($._quote_reader_macro_char, '\'')),
			field('expression', $._sexp),
		)),
		quasi_quote_reader_macro: $ => prec(PREC.READER_MACRO, seq(
			field('macro', alias($._quasi_quote_reader_macro_char, '`')),
			field('expression', $._sexp),
		)),
		unquote_reader_macro: $ => prec(PREC.READER_MACRO, seq(
			field('macro', alias($._unquote_reader_macro_char, ',')),
			field('expression', $._sexp),
		)),

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
		//
		// _form_content: $ => choice(
		// 	...[...Object.keys(forms)].map(form => $[form])
		// ),
		//
		// _form: $ => prec.dynamic(10, seq(
		// 	field('open', '('),
		// 	$._form_content,
		// 	field('close', ')'),
		// )),

		sequence: $ => prec.dynamic(PREC.COMPOUND, seq(
			field('open', '['),
			repeat(field('item', $._sexp)),
			field('close', ']'),
		)),

		// TODO: Make it public
		_table_pair: $ => prec.right(seq(
			field('key', $._sexp),
			// NOTE: The `optional` here kind of "normalizes" the tree if the pair is not complete,
			// as if it's in the process of typing.
			optional(field('value', $._sexp))
		)),

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

		nil: $ => NIL,
		boolean: $ => BOOLEAN,

		// HACK: Dynamic precedence doesn't seem to override terminal strings,
		// so we must do this rather ugly hack.
		//
		// This fix makes tokens such as:
		// - :.
		// - :true
		// - :nil
		// being parsed as a string instead of being 2 separate symbols.
		_colon_string_content: $ => choice(
			...[
				NIL,
				BOOLEAN,
				...[...SPECIAL_OVERRIDE_SYMBOLS],
				/[^(){}\[\]"'~;,@`\s]+/,
			].map(tk => token.immediate(tk))
		),

		_colon_string: $ => prec(PREC.STRING, seq(
			field('open', ':'),
			field('content', alias($._colon_string_content, $.string_content)),
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
				field('member', alias($.symbol_immediate, $.symbol_fragment)),
			)),
		)),

		multi_symbol_method: $ => prec.right(seq(
			field('base', choice(
				alias($.symbol, $.symbol_fragment),
				$.multi_symbol,
			)),
			token.immediate(':'),
			field('method', alias($.symbol_immediate, $.symbol_fragment)),
		)),

		symbol: $ => token(SYMBOL),
		symbol_immediate: $ => token.immediate(SYMBOL),
	},
});
