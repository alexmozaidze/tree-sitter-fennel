const {
	item,
	pair,
	form,
	sequence,
} = require('../../grammar-lib/dsl.js');

const rules = {};
const forms = {};

[
	'local',
	'var',
	'global',
].forEach(name => forms[name] = $ => form($,
		name,
		$.binding_pair,
	)
);

rules['_set_binding_pair_key'] = $ => $._sexp;
rules['_set_binding_pair'] = $ => pair($, { lhs: $._set_binding_pair_key }, { rhs: $._sexp });
forms['set'] = $ => form($,
	'set',
	alias($._set_binding_pair, $.binding_pair),
);

rules['let_vars'] = $ => sequence(repeat($.binding_pair));
forms['let'] = $ => form($,
	'let',
	field('vars', $.let_vars),
	repeat(item($._sexp)),
);

forms['import_macros'] = $ => form($,
	'import-macros',
	field('imports', $._binding),
	field('module', $._sexp),
);

module.exports = {
	rules,
	forms,
};
