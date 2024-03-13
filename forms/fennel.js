const { pair, open, close, item, form, form_prec } = require('../utils.js');

const forms = {};
const subforms = {};

[
	'local',
	'var',
	'set',
	'global',
].forEach(name => forms[name] = $ => form($,
		name,
		pair($),
	)
);

subforms['_let_form_vars_pair'] = $ => form_prec(pair($, { lhs: $._binding }, { rhs: $._sexp })),
subforms['let_form_vars'] = $ => form_prec(seq(
	open('['),
	repeat($._let_form_vars_pair),
	close(']'),
));
forms['let'] = $ => form($,
	'let',
	field('vars', $.let_form_vars),
	repeat(item($._sexp)),
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
