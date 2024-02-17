/**
 * Get literal out of a syntax node
 *
 * Example: get_literal(prec(1, '#')) == '#'
 *
 * @param {Object} node
 * @returns {string} Literal extracted from node
 */
function get_literal(node) {
	if (typeof node === 'string' || node instanceof RegExp) return node;
	else if (node.type === 'PATTERN' || node.type === 'STRING') return node.value;
	else return get_literal(node.content);
}

// Symbols that should take priority over the default symbol definition
const SPECIAL_OVERRIDE_SYMBOLS = [
	'#',
	'?.',
	':',
	'$...',
	'...',
	'..',
	prec.dynamic(-1, '.'),
];

const READER_MACRO_CHARS = [
	prec(1, '#'),
	'\'',
	'`',
	',',
];

module.exports = grammar({
	name: 'fennel',

	extras: $ => [],

	conflicts: $ => [
		[$.multi_symbol, $._sexp],
	],

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
			optional($._gap),
			choice(
				$.multi_symbol_method,
				$._sexp,
			),
			repeat(choice(
				$._sexp,
				$._gap,
			)),
		),

		list: $ => seq(
			field('open', '('),
			optional($._list_content),
			field('close', ')'),
		),

		sequence: $ => seq(
			field('open', '['),
			repeat(choice(
				$._sexp,
				$._gap,
			)),
			field('close', ']'),
		),

		table_pair: $ => seq(
			field('key', $._sexp),
			$._gap,
			field('value', $._sexp),
		),

		table: $ => seq(
			field('open', '{'),
			repeat(choice(
				$.table_pair,
				$._gap,
			)),
			field('close', '}'),
		),

		_literal: $ => choice(
			$.string,
			$.number,
			$.boolean,
			$.nil,
		),

		nil: $ => 'nil',
		boolean: $ => token(choice('true', 'false')),

		_colon_string: $ => prec(2, seq(
			field('open', ':'),
			alias(choice(
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
			), $.string_content),
		)),

		_double_quote_string: $ => seq(
			field('open', '"'),
			alias(repeat(choice(
				prec(1, /[^"\\]+/),
				$.escape_sequence,
			)), $.string_content),
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
		multi_symbol: $ => prec.dynamic(2, prec.right(seq(
			field('base', alias($.symbol, $.symbol_fragment)),
			repeat1(seq(
				'.',
				field('member', alias($.symbol, $.symbol_fragment) ),
			)),
		))),

		multi_symbol_method: $ => prec(3, seq(
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
