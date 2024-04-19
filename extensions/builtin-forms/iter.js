const _ = require('lodash');
const {
	item,
	form,
	pair,
	sequence,
} = require('../../grammar-lib/dsl.js');
const {
	PREC_PRIORITY,
} = require('../../grammar-lib/prec.js');

const rules = {};
const forms = {};

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

module.exports = {
	rules,
	forms,
};
