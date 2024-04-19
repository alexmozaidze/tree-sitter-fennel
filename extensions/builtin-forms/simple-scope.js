const {
	item,
	form,
	sequence,
} = require('../../grammar-lib/dsl.js');

const rules = {};
const forms = {};

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
