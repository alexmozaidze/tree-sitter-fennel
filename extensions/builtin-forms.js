const _ = require('lodash');
const {
	item,
	form,
	string,
	pair,
	kv_pair,
	list,
	sequence,
	table,
} = require('../utils.js');

const rules = {};
const forms = {};

[
	'local',
	'var',
	'set',
	'global',
].forEach(name => forms[name] = $ => form($,
		name,
		$._binding_pair,
	)
);

rules['let_form_vars'] = $ => sequence(
	repeat($._binding_pair),
);
forms['let'] = $ => form($,
	'let',
	field('vars', $.let_form_vars),
	repeat(item($._sexp)),
);

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
rules['_table_metadata_key_arglist'] = $ => string($, 'fnl/arglist');
rules['_table_metadata_pair'] = $ => choice(
	kv_pair($, { key: alias($._table_metadata_key_docstring, $.string) }, { value: alias($.string, $.docstring) }),
	kv_pair($, { key: alias($._table_metadata_key_arglist, $.string) }, { value: $.sequence_arguments }),
	kv_pair($, { key: $.string }),
);
rules['table_metadata'] = $ => prec(1, table(
	repeat($._table_metadata_pair),
));
rules['_function_body'] = $ => seq(
	optional(field('name', $._function_identifier)),
	field('args', $.sequence_arguments),
	choice(
		seq(
			optional(field('docstring', prec(1, alias($.string, $.docstring)))),
			optional(field('metadata', $.table_metadata)),
			repeat1(item($._sexp)),
		),
		repeat(item($._sexp)),
	),
);
[
	'fn',
	'lambda',
].forEach(name => forms[name] = $ => prec(1, form($,
	name == 'lambda' ? choice(name, 'λ') : name,
	$._function_body,
)));

forms['hashfn'] = $ => form($,
	'hashfn',
	item($._sexp),
);

rules['_case_pair'] = $ => pair($, { lhs: $._binding });
[
	'case',
	'match',
].forEach(name => forms[name] = $ => form($,
	name,
	item($._sexp),
	repeat($._case_pair),
));

const processed_forms = _.mapKeys(forms, (_, name) => `${name}_form`);

module.exports = {
	rules,
	forms: processed_forms,
};
