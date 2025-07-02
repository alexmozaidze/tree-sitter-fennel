const {
	item,
	kv_pair,
	pair,
	list,
	sequence,
	table,
} = require('../grammar-lib/dsl.js');
const {
    PREC_SCENARIO_SPECIFIC,
} = require('../grammar-lib/prec.js');

module.exports = {
	inline: $ => [
		$._symbol_binding,
		$._string_binding,
		$._number_binding,
		$._boolean_binding,
		$._nil_binding,
	],

	rules: {
		_binding: $ => prec(PREC_SCENARIO_SPECIFIC, choice(
			$._symbol_binding,
			$.unquote_macro_binding,
			$.list_binding,
			$.sequence_binding,
			$.table_binding,
			$._literal_binding,
		)),

		_symbol_binding: $ => alias($.symbol, $.symbol_binding),

		// TODO: find a way to use unquote_reader_macro rather than implementing it from scratch
		unquote_macro_binding: $ => prec(-1, seq(
			field('macro', ','),
			field('expression', $._sexp),
		)),

		list_binding: $ => list(
			repeat1(item($._binding))
		),

		rest_binding: $ => pair($,
			{ lhs: alias('&', $.symbol_option) },
			{ rhs: $._binding },
		),

		sequence_binding: $ => sequence(
			repeat1(item($._binding)),
			optional(item($.rest_binding)),
		),

		_table_binding_key: $ => prec(PREC_SCENARIO_SPECIFIC, choice(
			alias(':', $.symbol_binding),
			$._string_binding,
			$.symbol_option,
		)),

		table_binding_pair: $ => kv_pair($, { key: $._table_binding_key }, { value: $._binding }),
		
		table_binding: $ => table(repeat1(item($.table_binding_pair))),

		binding_pair: $ => pair($, { lhs: $._binding }, { rhs: $._sexp }),

		_literal_binding: $ => choice(
			$._string_binding,
			$._number_binding,
			$._boolean_binding,
			$._nil_binding,
		),
		_string_binding: $ => alias($.string, $.string_binding),
		_number_binding: $ => alias($.number, $.number_binding),
		_boolean_binding: $ => alias($.boolean, $.boolean_binding),
		_nil_binding: $ => alias($.nil, $.nil_binding),
	}
};
