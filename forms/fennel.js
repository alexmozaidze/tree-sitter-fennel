const { pair, open, close, item, form, string, kv_pair } = require('../utils.js');

const subrules = {};
const operators = {};
const forms = {};

subrules['_binding_pair'] = $ => pair($, { lhs: $._binding }, { rhs: $._sexp });

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

subrules['let_form_vars'] = $ => seq(
	open('['),
	repeat($._binding_pair),
	close(']'),
);
forms['let'] = $ => form($,
	'let',
	field('vars', $.let_form_vars),
	repeat(item($._sexp)),
);

subrules['_function_identifier'] = $ => choice(
	$.symbol,
	$.multi_symbol,
);
subrules['sequence_arguments'] = $ => seq(
	open('['),
	repeat(item($._binding)),
	optional(choice(
		item($.rest_binding),
		item(alias('...', $.symbol_binding)),
	)),
	close(']'),
);
subrules['_table_metadata_key_docstring'] = $ => string($, 'fnl/docstring');
subrules['_table_metadata_key_arglist'] = $ => string($, 'fnl/arglist');
subrules['_table_metadata_pair'] = $ => choice(
	kv_pair($, { key: alias($._table_metadata_key_docstring, $.string) }, { value: alias($.string, $.docstring) }),
	kv_pair($, { key: alias($._table_metadata_key_arglist, $.string) }, { value: $.sequence_arguments }),
	kv_pair($, { key: $.string }),
);
subrules['table_metadata'] = $ => prec(1, seq(
	open('{'),
	repeat($._table_metadata_pair),
	close('}'),
));
[
	'fn',
	'lambda',
].forEach(name => forms[name] = $ => prec(1, form($,
	name == 'lambda' ? choice(name, 'λ') : name,
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
)));

const rules = {};
for (const [name, rule] of Object.entries(forms)) {
	if (!name.startsWith('_')) {
		rules[name + '_form'] = rule;
	} else {
		rules[name] = rule;
	}
}
for (const [name, rule] of Object.entries(operators)) {
	if (!name.startsWith('_')) {
		rules[name + '_operator'] = rule;
	} else {
		rules[name] = rule;
	}
}

module.exports = {
	subrules,
	rules,
};
