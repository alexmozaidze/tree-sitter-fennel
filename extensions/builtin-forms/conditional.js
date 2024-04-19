const _ = require('lodash');
const {
	item,
	form,
	pair,
} = require('../../grammar-lib/dsl.js');
const {
	PREC_PRIORITY,
} = require('../../grammar-lib/prec.js');

const rules = {};
const forms = {};

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

rules['if_pair'] = $ => pair($, { field: 'condition' }, { field: 'expression', optional: false });
forms['if'] = $ => form($,
	'if',
	repeat1($.if_pair),
	optional(field('else', $._sexp)),
);

module.exports = {
	rules,
	forms,
};
