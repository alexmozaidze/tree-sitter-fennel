const { pair, open, close, item, form, string, kv_pair } = require('../utils.js');

const rules = {};
const forms = {};

rules['_binding'] = $ => choice(
	$._symbol_binding,
	$.list_binding,
	$.sequence_binding,
	$.table_binding,
);
rules['_symbol_binding'] = $ => alias($.symbol, $.symbol_binding);
rules['list_binding'] = $ => seq(
	open('('),
	repeat1(item($._binding)),
	close(')'),
);
rules['rest_binding'] = $ => pair($,
	{ lhs: alias('&', $.symbol_option) },
	{ rhs: $._binding },
);
rules['sequence_binding'] = $ => seq(
	open('['),
	repeat1(item($._binding)),
	optional(item($.rest_binding)),
	close(']'),
);
rules['_table_binding_key'] = $ => choice(
	alias(':', $.symbol_binding),
	$._string_binding,
	$.symbol_option,
);
rules['_table_binding_pair'] = $ => kv_pair($, { key: $._table_binding_key }, { value: $._symbol_binding });
rules['table_binding'] = $ => seq(
	open('{'),
	repeat1($._table_binding_pair),
	close('}'),
);
rules['_literal_binding'] = $ => choice(
	$._string_binding,
	$._number_binding,
	$._boolean_binding,
	$._nil_binding,
);
rules['_string_binding'] = $ => alias($.string, $.string_binding);
rules['_number_binding'] = $ => alias($.number, $.number_binding);
rules['_boolean_binding'] = $ => alias($.boolean, $.boolean_binding);
rules['_nil_binding'] = $ => alias($.number, $.number_binding);
rules['_binding_pair'] = $ => pair($, { lhs: $._binding }, { rhs: $._sexp });

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

rules['let_form_vars'] = $ => seq(
	open('['),
	repeat($._binding_pair),
	close(']'),
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
rules['sequence_arguments'] = $ => seq(
	open('['),
	repeat(item($._binding)),
	optional(choice(
		item($.rest_binding),
		item(alias('...', $.symbol_binding)),
	)),
	close(']'),
);
rules['_table_metadata_key_docstring'] = $ => string($, 'fnl/docstring');
rules['_table_metadata_key_arglist'] = $ => string($, 'fnl/arglist');
rules['_table_metadata_pair'] = $ => choice(
	kv_pair($, { key: alias($._table_metadata_key_docstring, $.string) }, { value: alias($.string, $.docstring) }),
	kv_pair($, { key: alias($._table_metadata_key_arglist, $.string) }, { value: $.sequence_arguments }),
	kv_pair($, { key: $.string }),
);
rules['table_metadata'] = $ => prec(1, seq(
	open('{'),
	repeat($._table_metadata_pair),
	close('}'),
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

// TODO: case, match, case-try, match-try.
// I should parse the (= pin) expression as well,
// since it's quite hard to capture with queries reliably.

// rules['_case_pair'] = $ => pair($, {
// 	lhs: choice(
// 		$.case_form_pin,
// 		$._binding,
// 	),
// });
// [
// 	'case',
// 	'match',
// ].forEach(name => forms[name] = $ => form($,
// 	name,
// 	item($._sexp),
// 	repeat(),
// ));

const processed_forms = {};
for (const [name, rule] of Object.entries(forms)) {
	if (!name.startsWith('_')) {
		processed_forms[name + '_form'] = rule;
	} else {
		processed_forms[name] = rule;
	}
}

module.exports = {
	rules,
	forms: processed_forms,
};
