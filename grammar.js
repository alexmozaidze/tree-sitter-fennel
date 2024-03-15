const { pair, kv_pair, open, close, item, call, SPECIAL_OVERRIDE_SYMBOLS, colon_string, double_quote_string, string } = require('./utils.js');

const forms = {
	...require('./forms/fennel.js'),
};

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

	inline: $ => [],

	word: $ => $.symbol,

	rules: {
		program: $ => seq(
			optional($.shebang),
			repeat($._sexp),
		),

		// TODO: Separate comment semicolon and body.
		// NOTE: Should I separate comment semicolon from body?
		comment: $ => /;.*\n?/,

		_sexp: $ => choice(
			$._reader_macro,
			$._special_override_symbol,
			$.symbol_option,
			$.symbol,
			$.multi_symbol,
			$.multi_symbol_method,
			$._form,
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
			call($._sexp),
			repeat(item($._sexp)),
		),

		list: $ => seq(
			open('('),
			optional($._list_content),
			close(')'),
		),

		...forms.subrules,
		...forms.rules,

		_form: $ => choice(...[...Object.keys(forms.rules)].map(form => $[form])),

		sequence: $ => seq(
			open('['),
			repeat(item($._sexp)),
			close(']'),
		),

		_table_pair: $ => kv_pair($),

		table: $ => seq(
			open('{'),
			repeat($._table_pair),
			close('}'),
		),

		_literal: $ => prec(-1, choice(
			$.string,
			$.number,
			$.boolean,
			$.nil,
		)),

		nil: $ => 'nil',
		boolean: $ => choice('true', 'false'),

		_colon_string: $ => colon_string($, choice(
			...[
				// HACK(alexmozaidze): Fixes expressions such as:
				// `:?.`
				// `:true`
				// `:nil`
				// `:$...`
				//
				// and so on, being parsed as 2 separate tokens.
				// Dynamic precedence could eliminate this HACK, but
				// I would prefer to stray away from it.
				'nil',
				'true',
				'false',
				...SPECIAL_OVERRIDE_SYMBOLS,
				/[^(){}\[\]"'~;,@`\s]+/,
			].map(tk => token.immediate(tk))
		)),

		_double_quote_string: $ => double_quote_string($,
			repeat(choice(
				/[^"\\]+/,
				$.escape_sequence,
			))
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

		// TODO: Separate floats from integers
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

		multi_symbol: $ => seq(
			field('base', alias($.symbol, $.symbol_fragment)),
			repeat1(seq(
				token.immediate('.'),
				field('member', $._multi_symbol_fragment),
			)),
		),

		multi_symbol_method: $ => seq(
			field('base', choice(
				alias($.symbol, $.symbol_fragment),
				$.multi_symbol,
			)),
			token.immediate(':'),
			field('method', $._multi_symbol_fragment),
		),

		_binding: $ => choice(
			$._symbol_binding,
			$.list_binding,
			$.sequence_binding,
			$.table_binding,
		),
		_symbol_binding: $ => alias($.symbol, $.symbol_binding),
		list_binding: $ => seq(
			open('('),
			repeat1(item($._binding)),
			close(')'),
		),
		rest_binding: $ => pair($,
			{ lhs: alias('&', $.symbol_option) },
			{ rhs: $._binding },
		),
		sequence_binding: $ => seq(
			open('['),
			repeat1(item($._binding)),
			optional(item($.rest_binding)),
			close(']'),
		),
		_table_binding_key: $ => choice(
			alias(':', $.symbol_binding),
			alias($.string, $.string_binding),
			$.symbol_option,
		),
		_table_binding_pair: $ => kv_pair($, { key: $._table_binding_key }, { value: $._symbol_binding }),
		table_binding: $ => seq(
			open('{'),
			repeat1($._table_binding_pair),
			close('}'),
		),

		symbol_option: $ => /&[^(){}\[\]"'~;,@`.:\s]*/,
		symbol: $ => /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/,

		// NOTE: multi-symbol fragments starting from second position onwards have fewer restrictions on what
		// symbols they may contain, which is why its regex is just a stripped down version of $.symbol.
		_multi_symbol_fragment: $ => alias(token.immediate(/[^(){}\[\]"'~;,@`.:\s]+/), $.symbol_fragment),

		_special_override_symbol: $ => alias(choice(...SPECIAL_OVERRIDE_SYMBOLS), $.symbol),
	},
});
