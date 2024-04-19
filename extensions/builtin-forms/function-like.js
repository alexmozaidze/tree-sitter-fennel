const {
	item,
	kv_pair,
	form,
	sequence,
	table,
	string,
} = require('../../grammar-lib/dsl.js');
const {
	PREC_LAST_RESORT,
} = require('../../grammar-lib/prec.js');

const rules = {};
const forms = {};

rules['_function_identifier'] = $ => choice(
	$.symbol,
	$.multi_symbol,
);

rules['sequence_arguments'] = $ => sequence(
	repeat(item($._binding)),
	optional(choice(
		item($.rest_binding),
		item(alias('...', $.symbol_binding)),
	)),
);

rules['_table_metadata_key_docstring'] = $ => string($, 'fnl/docstring');
rules['_table_metadata_docstring'] = $ => kv_pair($, { key: alias($._table_metadata_key_docstring, $.string) }, { value: alias($.string, $.docstring) });
rules['_table_metadata_key_arglist'] = $ => string($, 'fnl/arglist');
rules['_table_metadata_arglist'] = $ => kv_pair($, { key: alias($._table_metadata_key_arglist, $.string) }, { value: $.sequence_arguments });
rules['_table_metadata_generic'] = $ => prec.right(PREC_LAST_RESORT + 1, kv_pair($, { key: $.string }));
rules['table_metadata_pair'] = $ => choice(
	$._table_metadata_docstring,
	$._table_metadata_arglist,
	$._table_metadata_generic,
);

rules['table_metadata'] = $ => table(repeat(item($.table_metadata_pair)));
rules['_function_inner_body_all'] = $ => seq(
	field('docstring', alias($.string, $.docstring)),
	field('metadata', $.table_metadata),
	repeat1(item($._sexp)),
);
rules['_function_inner_body_docstring'] = $ => seq(
	field('docstring', alias($.string, $.docstring)),
	repeat1(item($._sexp)),
);
rules['_function_inner_body_metadata'] = $ => seq(
	field('metadata', $.table_metadata),
	repeat1(item($._sexp)),
);
rules['_function_inner_body_generic'] = $ => prec(1, repeat1(item($._sexp)));

rules['_function_inner_body'] = $ => choice(
	$._function_inner_body_all,
	$._function_inner_body_docstring,
	$._function_inner_body_metadata,
	$._function_inner_body_generic,
);

rules['_function_body'] = $ => seq(
	optional(field('name', $._function_identifier)),
	field('args', $.sequence_arguments),
	optional($._function_inner_body),
);

[
	'fn',
	'lambda',
	'macro'
].forEach(name => forms[name] = $ => form($,
	name == 'lambda' ? choice(name, 'λ') : name,
	$._function_body,
));

forms['hashfn'] = $ => form($,
	'hashfn',
	item($._sexp),
);

module.exports = {
	rules,
	forms,
};
