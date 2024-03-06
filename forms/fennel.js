const { gseq, pair } = require('../utils.js');

const conflicts = {};
const forms = {};

// [
// 	'local',
// 	'var',
// 	'set',
// 	'global',
// ].forEach(name => forms[name] = $ => gseq($,
// 		field('call', name),
// 		field('lhs', $._sexp),
// 		field('rhs', $._sexp),
// 	)
// );
//
// [
// 	'let',
// ].forEach(name => {
// 		forms[`_${name}_vars_body_pair`] = $ => pair($),
// 		forms[`_${name}_vars_body`] = $ => seq(
// 			field('open', '['),
// 			repeat(choice(
// 				$[`_${name}_vars_body_pair`],
// 				$._gap,
// 			)),
// 			field('close', ']'),
// 		);
//
// 		forms[name] = $ => gseq($,
// 			field('call', alias(name, $.symbol)),
// 			field('vars', alias($[`_${name}_vars_body`], $.sequenceASd)),
// 			repeat1(choice($._gap, field('item', $._sexp))),
// 		);
// 	}
// );

// TODO: Rename all keys to `%s_form`
const rules = {};
for (const [name, rule] of Object.entries(forms)) {
	if (name.startsWith('_')) {
		rules[name] = rule;
	} else {
		rules[name + '_form'] = rule;
	}
}

module.exports = {
	conflicts,
	rules,
};
