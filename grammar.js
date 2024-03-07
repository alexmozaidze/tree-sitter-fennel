const { cloneDeep } = require('lodash');
const { pair, get_literal, apply_literal_recur } = require('./utils.js');

// const forms = {
// 	...require('./forms/fennel.js').rules,
// };

const PREC = {
	OVERRIDE_SYMBOL: 2,
	READER_MACRO: 10,
	STRING: 1,
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
].map(symbol => typeof symbol === 'string' ? prec.dynamic(PREC.OVERRIDE_SYMBOL, symbol) : symbol);

module.exports = grammar({
	name: 'fennel',

	extras: $ => [
		$._whitespace,
		$.comment,
	],

	externals: $ => [
		'#',
		'\'',
		'`',
		',',
	],

	conflicts: $ => [
		[$.multi_symbol, $._sexp],
		// Form conflicts
		// [$._let_vars_body, $.sequence],
		// [$.let_form],
		// [$._let_vars_body_pair, $._list_content],
		// [$._let_vars_body_pair, $.sequence],
	],

	word: $ => $.symbol,

	rules: {
		program: $ => seq(
			optional($.shebang),
			repeat($._sexp),
		),

		shebang: $ => /#!.*/,

		_whitespace: $ => /\s+/,
		comment: $ => /;.*\n?/,

		_sexp: $ => choice(
			$._special_override_symbols,
			$.reader_macro,
			$.symbol,
			$.multi_symbol,
			// $._form,
			$.list,
			$.sequence,
			$.table,
			$._literal,
		),

		_special_override_symbols: $ => alias(choice(...SPECIAL_OVERRIDE_SYMBOLS), $.symbol),

		_reader_macro_char: $ => prec(PREC.READER_MACRO, choice(
			'#',
			'\'',
			'`',
			',',
		)),

		reader_macro: $ => prec(PREC.READER_MACRO, seq(
			field('macro', $._reader_macro_char),
			field('expression', $._sexp),
		)),

		_list_content: $ => seq(
			field('call', choice(
				$.multi_symbol_method,
				$._sexp,
			)),
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

		nil: $ => 'nil',
		boolean: $ => token(choice('true', 'false')),

		_colon_string: $ => prec.dynamic(PREC.STRING, seq(
			field('open', ':'),
			field('content', alias(/[^(){}\[\]"'~;,@`\s]+/, $.string_content)),
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
