const {
	item,
	kv_pair,
	form,
	open,
	close,
	sequence,
	string,
	sexp_members,
	non_string_literal_members,
} = require('../../grammar-lib/dsl.js');
const {
	PREC_LAST_RESORT,
} = require('../../grammar-lib/prec.js');
const {
	TABLE_METADATA_KEYS,
} = require('../../grammar-lib/constants.js');

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

// HACK(alexmozaidze): Necessary so a string key is matched by name in `$.table_pair`, instead
// of through `$._literal` at `PREC_LAST_RESORT`, which inside a function body closes the pair
// on the key alone -- `(fn [] {:a 1})` loses its `1` into an `ERROR` node.
rules['_non_string_sexp'] = $ => choice(
	...sexp_members($),
	prec.right(PREC_LAST_RESORT, choice(...non_string_literal_members($))),
);

rules['_table_metadata_key_docstring'] = $ => string($, TABLE_METADATA_KEYS.DOCSTRING);
rules['_table_metadata_docstring'] = $ => prec.dynamic(2, kv_pair($, { key: alias($._table_metadata_key_docstring, $.string) }, { value: alias($.string, $.docstring) }));
rules['_table_metadata_key_arglist'] = $ => string($, TABLE_METADATA_KEYS.ARGLIST);
rules['_table_metadata_arglist'] = $ => prec.dynamic(2, kv_pair($, { key: alias($._table_metadata_key_arglist, $.string) }, { value: $.sequence_arguments }));
rules['_table_metadata_generic'] = $ => prec.dynamic(1, kv_pair($, { key: $.string }));
rules['table_metadata_pair'] = $ => choice(
	$._table_metadata_docstring,
	$._table_metadata_arglist,
	$._table_metadata_generic,
);

rules['table_metadata'] = $ => seq(
	open('{'),
	repeat(item($.table_metadata_pair)),
	close(alias($.__form_follows, '}')),
);

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

// TODO: Move to simple-scope.js
forms['hashfn'] = $ => form($,
	'hashfn',
	item($._sexp),
);

module.exports = {
	rules,
	forms,

	conflicts: $ => [
		[$._table_metadata_generic, $.table_pair],
		[$._table_metadata_key_docstring, $._colon_string],
		[$._table_metadata_key_arglist, $._colon_string],
		[$._table_metadata_key_docstring, $._double_quote_string_content],
		[$._table_metadata_key_arglist, $._double_quote_string_content],
	],
};
