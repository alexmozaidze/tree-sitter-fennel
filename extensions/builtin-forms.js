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
	PREC_PRIORITY,
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
rules['table_metadata'] = $ => prec(PREC_PRIORITY, table(
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

// TODO: Special binding for case/match to support `(where)` and `(= pin)`
rules['_case_pair'] = $ => pair($, { lhs: $._binding });
[
	'case',
	'match',
].forEach(name => forms[name] = $ => form($,
	name,
	item($._sexp),
	repeat($._case_pair),
));

rules['case_catch'] = $ => form($,
	'catch',
	repeat($._case_pair),
);
[
	'case-try',
	'match-try',
].forEach(name => forms[_.snakeCase(name)] = $ => form($,
	name,
	item($._sexp),
	repeat($._case_pair),
	optional(field('catch', $.case_catch)),
));

rules['iter_option'] = $ => prec(1, pair($, { lhs: $.symbol_option, field: 'option' }, { field: 'value' }));
rules['_iter_body'] = $ => prec.right(seq(
	repeat1(field('binding', $._binding)),
	field('iterator', $._sexp),
	repeat($.iter_option),
));
rules['_each_iter_body'] = $ => alias(sequence($._iter_body), $.iter_body);
forms['each'] = $ => form($,
	'each',
	$._each_iter_body,
	repeat(item($._sexp)),
);

rules['_collect_iter_body'] = $ => alias(sequence($._iter_body), $.iter_body);
forms['collect'] = $ => form($,
	'collect',
	$._collect_iter_body,
	item($._sexp),
	item($._sexp),
);
forms['icollect'] = $ => form($,
	'icollect',
	$._collect_iter_body,
	item($._sexp),
);

rules['_accumulator_pair'] = $ => pair($, { lhs: $._binding, field: 'accumulator_binding' }, { field: 'accumulator_value' });
rules['_accumulate_iter_body'] = $ => sequence(
	$._accumulator_pair,
	$._iter_body,
);
forms['accumulate'] = $ => form($,
	'accumulate',
	$._accumulate_iter_body,
	item($._sexp),
);

rules['_fiter_body'] = $ => prec.right(seq(
	field('index', $._symbol_binding),
	field('from', $._sexp),
	field('to', $._sexp),
	optional(field('step', $._sexp)),
	repeat($.iter_option),
));
rules['_for_iter_body'] = $ => sequence($._fiter_body);
forms['for'] = $ => form($,
	'for',
	alias($._fiter_body, $.for_iter_body),
	repeat(item($._sexp)),
);

rules['_fcollect_iter_body'] = $ => sequence($._fiter_body);
forms['fcollect'] = $ => form($,
	'fcollect',
	alias($._fcollect_iter_body, $.for_iter_body),
	item($._sexp),
);

rules['_faccumulate_iter_body'] = $ => sequence(
	$._accumulator_pair,
	$._fiter_body,
);
forms['faccumulate'] = $ => form($,
	'faccumulate',
	alias($._faccumulate_iter_body, $.for_iter_body),
	item($._sexp),
);

const processed_forms = _.mapKeys(forms, (_, name) => `${name}_form`);

module.exports = {
	rules,
	forms: processed_forms,
};
