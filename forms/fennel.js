const { pair, open, close, item, form, PREC } = require('../utils.js');

const forms = {};
const subforms = {};

subforms['_binding_pair'] = $ => prec(PREC.FORM, pair($, { lhs: $._binding }, { rhs: $._sexp }));

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

subforms['let_form_vars'] = $ => prec(PREC.FORM, seq(
	open('['),
	repeat($._binding_pair),
	close(']'),
));
forms['let'] = $ => form($,
	'let',
	field('vars', $.let_form_vars),
	repeat(item($._sexp)),
);

subforms['_function_identifier'] = $ => prec(PREC.FORM, choice(
	$.symbol,
	$.multi_symbol,
));
[
	'fn',
	'lambda',
].forEach(name => forms[name] = $ => form($,
	name == 'lambda' ? choice(name, 'λ') : name,
	optional(field('name', $._function_identifier)),
	field('args', $.sequence),
	optional(prec(PREC.FORM, field('docstring', $.string))),
	optional(prec(PREC.FORM, field('metadata', $.table))),
	repeat(item($._sexp)),
));

const rules = {...subforms};
for (const [name, rule] of Object.entries(forms)) {
	if (!name.startsWith('_')) {
		rules[name + '_form'] = rule;
	} else {
		rules[name] = rule;
	}
}

module.exports = {
	rules,
};
