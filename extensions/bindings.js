const {
	open,
	close,
	item,
	kv_pair,
	pair,
} = require('../utils.js');

module.exports = {
	rules: {
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
			$._string_binding,
			$.symbol_option,
		),
		_table_binding_pair: $ => kv_pair($, { key: $._table_binding_key }, { value: $._symbol_binding }),
		table_binding: $ => seq(
			open('{'),
			repeat1($._table_binding_pair),
			close('}'),
		),
		_literal_binding: $ => choice(
			$._string_binding,
			$._number_binding,
			$._boolean_binding,
			$._nil_binding,
		),
		_string_binding: $ => alias($.string, $.string_binding),
		_number_binding: $ => alias($.number, $.number_binding),
		_boolean_binding: $ => alias($.boolean, $.boolean_binding),
		_nil_binding: $ => alias($.number, $.number_binding),
		_binding_pair: $ => pair($, { lhs: $._binding }, { rhs: $._sexp }),
	}
};
