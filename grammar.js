const _ = require('lodash');
const {
	kv_pair,
	item,
	call,
	colon_string,
	double_quote_string,
	list,
	sequence,
	table,
} = require('./grammar-lib/dsl.js');
const {
	require_dir,
	flatten_extensions,
} = require('./grammar-lib/fs.js');
const {
	PREC_LAST_RESORT,
	PREC_IMPORTANT,
} = require('./grammar-lib/prec.js');
const {
	READER_MACROS,
	SPECIAL_STANDALONE_SYMBOLS,
} = require('./grammar-lib/constants.js');
const {
	reader_macro_nodes,
	reader_macro_group,
} = require('./grammar-lib/node-utils.js').nodify_reader_macros();

const extensions = flatten_extensions(require_dir('extensions'));

module.exports = grammar({
	name: 'fennel',

	extras: $ => [
		/\s/,
		$.comment,
	],

	externals: $ => [
		...[...READER_MACROS].map(([name, _char]) => $[`_${name}_reader_macro_char`]),
		$.__reader_macro_count,

		$.__colon_string_start_mark,
		$.__colon_string_end_mark,

		$.shebang,

		$.__token_count,
	],

	inline: $ => [
		..._.flatMap(extensions.inline, inline => inline($)),
	],

	conflicts: $ => [
		..._.flatMap(extensions.conflicts, conflicts => conflicts($)),
	],

	word: $ => $.symbol,

	rules: {
		program: $ => seq(
			optional($.shebang),
			repeat($._sexp),
		),

		comment: $ => prec(PREC_LAST_RESORT, seq(
			field('colon', alias(/;+/, ';')),
			field('body', alias(/.*/, $.comment_body)),
		)),

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

		...reader_macro_nodes,
		_reader_macro: reader_macro_group,

		_list_content: $ => seq(
			call($._sexp),
			repeat(item($._sexp)),
		),

		list: $ => list(optional($._list_content)),

		...extensions.rules,
		...extensions.forms,

		_form: $ => choice(...[...Object.keys(extensions.forms)].map(form => $[form])),

		sequence: $ => sequence(repeat(item($._sexp))),

		table_pair: $ => kv_pair($),

		table: $ => prec(PREC_LAST_RESORT, table(repeat(item($.table_pair)))),

		// NOTE: Last resort precedence here is nice to have for when forms define
		// literal-specific syntax (mostly strings), like with metadata `:fnl/docstring`
		// in a function form.
		_literal: $ => prec.right(PREC_LAST_RESORT, choice(
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
				//
				// Dynamic precedence could probably eliminate this HACK, but
				// I would prefer to stray away from it.
				...SPECIAL_STANDALONE_SYMBOLS,
				'nil',
				'true',
				'false',
				/[^(){}\[\]"'~;,@`\s]+/,
			].map(tk => token.immediate(tk))
		)),

		_double_quote_string_content: $ => prec.right(PREC_IMPORTANT, token.immediate(/[^"\\]+/)),
		_double_quote_string: $ => double_quote_string($,
			repeat(choice(
				$._double_quote_string_content,
				$.escape_sequence,
			)),
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
				/u\{[\da-fA-F]+\}/,
			),
		)),

		// TODO: Separate floats from integers.
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

			const special = choice('inf', 'nan');
			const special_literal = seq(
				optional(sign),
				'.',
				special,
			);

			// HACK: Mark number rule precedence as important,
			// because special_literal is misparsed as multi_symbol
			return prec(PREC_IMPORTANT, token(choice(
				decimal_literal,
				hexadecimal_literal,
				special_literal,
			)));
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

		symbol_option: $ => /&[^(){}\[\]"'~;,@`.:\s]*/,
		symbol: $ => /[^#(){}\[\]"'~;,@`.:\s][^(){}\[\]"'~;,@`.:\s]*/,

		// NOTE: multi-symbol fragments starting from second position onwards have fewer restrictions on what
		// symbols they may contain, which is why its regex is just a stripped down version of $.symbol.
		_multi_symbol_fragment: $ => alias(token.immediate(/[^(){}\[\]"'~;,@`.:\s]+/), $.symbol_fragment),

		_special_override_symbol: $ => alias(
			prec(PREC_LAST_RESORT, choice(...SPECIAL_STANDALONE_SYMBOLS)),
			$.symbol
		),
	},
});
