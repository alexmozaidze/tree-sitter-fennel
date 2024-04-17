// TODO: Sort forms into sub-modules for better readability

const _ = require('lodash');
const {
	item,
	form,
	string,
	pair,
	kv_pair,
	sequence,
	table,
	PREC_PRIORITY,
    PREC_LAST_RESORT,
} = require('../utils.js');

const rules = {};
const forms = {};

forms['quote'] = $ => form($,
	'quote',
	item($._sexp),
);
forms['unquote'] = $ => form($,
	'unquote',
	item($._sexp),
);

[
	'local',
	'var',
	'set',
	'global',
].forEach(name => forms[name] = $ => form($,
		name,
		$.binding_pair,
	)
);

rules['let_vars'] = $ => sequence(
	repeat($.binding_pair),
);
forms['let'] = $ => form($,
	'let',
	field('vars', $.let_vars),
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
].forEach(name => forms[name] = $ => form($,
	name == 'lambda' ? choice(name, 'λ') : name,
	$._function_body,
));

forms['hashfn'] = $ => form($,
	'hashfn',
	item($._sexp),
);

rules['case_guard_or_special'] = $ => form($,
	'or',
	repeat(item($._binding)),
);
rules['case_guard'] = $ => form($,
	'where',
	item(choice(
		$.case_guard_or_special,
		$._binding,
	)),
	repeat(field('guard', $._sexp))
);
rules['_case_lhs'] = $ => choice(
	$.case_guard,
	$._binding,
);
rules['case_pair'] = $ => pair($, { lhs: $._case_lhs });
[
	'case',
	'match',
].forEach(name => forms[name] = $ => form($,
	name,
	item($._sexp),
	repeat($.case_pair),
));

rules['case_catch'] = $ => form($,
	'catch',
	repeat($.case_pair),
);
[
	'case-try',
	'match-try',
].forEach(name => forms[_.snakeCase(name)] = $ => form($,
	name,
	item($._sexp),
	repeat($.case_pair),
	optional(field('catch', $.case_catch)),
));

rules['_iter_option_legacy'] = $ => choice(
	alias(':until', $.symbol_option),
	alias(':into', $.symbol_option),
);
rules['_iter_option_lhs'] = $ => prec(PREC_PRIORITY, choice($.symbol_option, $._iter_option_legacy));
rules['iter_option'] = $ => prec(PREC_PRIORITY, pair($,
	{ lhs: $._iter_option_lhs, field: 'option' },
	{ field: 'value' }
));
rules['_iter_body'] = $ => seq(
	repeat1(field('binding', $._binding)),
	field('iterator', $._sexp),
	repeat(field('option', $.iter_option)),
);
rules['_each_iter_body'] = $ => sequence($._iter_body);
forms['each'] = $ => form($,
	'each',
	field('iter_body', alias($._each_iter_body, $.iter_body)),
	repeat(item($._sexp)),
);

rules['_collect_iter_body'] = $ => sequence($._iter_body);
forms['collect'] = $ => form($,
	'collect',
	field('iter_body', alias($._collect_iter_body, $.iter_body) ),
	repeat(item($._sexp)),
);
forms['icollect'] = $ => form($,
	'icollect',
	$._collect_iter_body,
	repeat(item($._sexp)),
);

rules['accumulator_pair'] = $ => pair($, { lhs: $._binding, field: 'accumulator_binding' }, { field: 'accumulator_value' });
rules['_accumulate_iter_body'] = $ => sequence(
	$.accumulator_pair,
	$._iter_body,
);
forms['accumulate'] = $ => form($,
	'accumulate',
	$._accumulate_iter_body,
	repeat(item($._sexp)),
);

rules['_fiter_body'] = $ => prec.right(seq(
	field('index', $._symbol_binding),
	field('from', $._sexp),
	field('to', $._sexp),
	optional(field('step', $._sexp)),
	repeat(field('option', $.iter_option)),
));
rules['_for_iter_body'] = $ => sequence($._fiter_body);
forms['for'] = $ => form($,
	'for',
	field('iter_body', alias($._fiter_body, $.for_iter_body) ),
	repeat(item($._sexp)),
);

rules['_fcollect_iter_body'] = $ => sequence($._fiter_body);
forms['fcollect'] = $ => form($,
	'fcollect',
	field('iter_body', alias($._fcollect_iter_body, $.for_iter_body) ),
	repeat(item($._sexp)),
);

rules['_faccumulate_iter_body'] = $ => sequence(
	$.accumulator_pair,
	$._fiter_body,
);
forms['faccumulate'] = $ => form($,
	'faccumulate',
	field('iter_body', alias($._faccumulate_iter_body, $.for_iter_body)),
	repeat(item($._sexp)),
);

const processed_forms = _.mapKeys(forms, (_, name) => `${name}_form`);

module.exports = {
	rules,
	forms: processed_forms,
};
