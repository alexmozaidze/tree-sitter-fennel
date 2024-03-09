const { pair } = require('../utils.js');

const forms = {};
const subforms = {};

[
	'local',
	'var',
	'set',
	'global',
].forEach(name => forms[name] = $ => seq(
		'(',
		field('call', name),
		pair($),
		')',
	)
);

subforms['_let_form_vars_pair'] = $ => pair($, { lhs: $.binding }, { rhs: $._sexp }),
subforms['let_form_vars'] = $ => seq(
	field('open', '['),
	repeat($._let_form_vars_pair),
	field('close', ']'),
);
forms['let'] = $ => seq(
	'(',
	field('call', 'let'),
	field('vars', $.let_form_vars),
	repeat(field('item', $._sexp)),
	')',
);


const rules = {...subforms};
for (const [name, rule] of Object.entries(forms)) {
	if (name.startsWith('_')) {
		rules[name] = rule;
	} else {
		rules[name + '_form'] = rule;
	}
}

module.exports = {
	rules,
};
