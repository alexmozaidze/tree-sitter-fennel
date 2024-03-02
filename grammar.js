const { pair, get_literal } = require('./utils.js');

const forms = {
	...require('./forms/fennel.js').rules,
};

const PREC = {
	OVERRIDE_SYMBOL: 1,
	READER_MACRO: 10,
	STRING: 2,
	MULTI_SYMBOL: 3,
	MULTI_SYMBOL_METHOD: 4,
	DOT_OVERRIDE_SYMBOL: -1,
	COMPOUND: -1,
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
	prec.dynamic(PREC.DOT_OVERRIDE_SYMBOL, '.'),
].map(symbol => typeof symbol === 'string' ? prec(PREC.OVERRIDE_SYMBOL, symbol) : symbol);

const READER_MACRO_CHARS = [
	'#',
	'\'',
	'`',
	',',
].map(ch => typeof ch === 'string' ? prec(PREC.READER_MACRO, ch) : ch);

module.exports = grammar({
	name: 'fennel',

	extras: $ => [],

	conflicts: $ => [
		[$.multi_symbol, $._sexp],
		// Form conflicts
		[$._let_vars_body, $.sequence],
		[$.let_form],
		[$._let_vars_body_pair, $._list_content],
		[$._let_vars_body_pair, $.sequence],
	],

	word: $ => $.symbol,

	rules: {
		program: $ => seq(
			optional($.shebang),
			repeat(choice(
				$._sexp,
				$._gap,
			))
		),

		shebang: $ => /#!.*/,

		_whitespace: $ => /\s+/,
		comment: $ => /;.*\n?/,
		_gap: $ => choice(
			$._whitespace,
			$.comment,
		),

		_sexp: $ => choice(
			$._special_override_symbols,
			$.reader_macro,
			$.symbol,
			$.multi_symbol,
			$._form,
			$.list,
			$.sequence,
			$.table,
			$._literal,
		),

		_special_override_symbols: $ => alias(choice(...SPECIAL_OVERRIDE_SYMBOLS), $.symbol),

		_reader_macro_char: $ => choice(...READER_MACRO_CHARS),

		reader_macro: $ => seq(
			field('macro', $._reader_macro_char),
			field('expression', $._sexp),
		),

		_list_content: $ => seq(
			repeat($._gap),
			field('call', choice(
				$.multi_symbol_method,
				$._sexp,
			)),
			repeat(choice(
				field('item', $._sexp),
				$._gap,
			)),
		),

		list: $ => prec.right(PREC.COMPOUND, seq(
			field('open', '('),
			optional($._list_content),
			field('close', ')'),
		)),

		...forms,

		_form_content: $ => choice(
			...[...Object.keys(forms)].map(form => $[form])
		),

		_form: $ => prec.dynamic(10, seq(
			field('open', '('),
			repeat($._gap),
			$._form_content,
			repeat($._gap),
			field('close', ')'),
		)),

		sequence: $ => prec.dynamic(PREC.COMPOUND, seq(
			field('open', '['),
			repeat(choice(
				field('item', $._sexp),
				$._gap,
			)),
			field('close', ']'),
		)),

		// TODO: Make it public
		_table_pair: $ => pair($, { field: 'key' }, { field: 'value' }),

		table: $ => prec(PREC.COMPOUND, seq(
			field('open', '{'),
			repeat(choice(
				$._table_pair,
				$._gap,
			)),
			field('close', '}'),
		)),

		_literal: $ => choice(
			$.string,
			$.number,
			$.boolean,
			$.nil,
		),

		nil: $ => 'nil',
		boolean: $ => token(choice('true', 'false')),

		_colon_string: $ => prec(PREC.STRING, seq(
			field('open', ':'),
			field('content', alias(choice(
				// HACK(alexmozaidze): Fixes expressions such as:
				// `:?.`
				// `:true`
				// `:nil`
				// `:$...`
				//
				// and so on, being parsed as 2 separate tokens.
				// Dynamic precedence could eliminate this HACK, but
				// I would prefer to stray away from it.
				...[...SPECIAL_OVERRIDE_SYMBOLS].map(get_literal),
				$.boolean,
				$.nil,
				/[^(){}\[\]"'~;,@`\s]+/,
			), $.string_content)),
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

		// NOTE: Due to special override symbol `.` we need dynamic precedence here
		multi_symbol: $ => prec.dynamic(PREC.MULTI_SYMBOL, prec.right(seq(
			field('base', alias($.symbol, $.symbol_fragment)),
			repeat1(seq(
				'.',
				field('member', alias($.symbol, $.symbol_fragment) ),
			)),
		))),

		multi_symbol_method: $ => prec(PREC.MULTI_SYMBOL_METHOD, seq(
			field('base', choice(
				alias($.symbol, $.symbol_fragment),
				$.multi_symbol,
			)),
			':',
			field('method', alias($.symbol, $.symbol_fragment)),
		)),

		symbol: $ => /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/,
	},
});
