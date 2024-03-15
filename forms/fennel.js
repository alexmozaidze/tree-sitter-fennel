const { pair, open, close, item, form, colon_string, kv_pair } = require('../utils.js');

const forms = {};
const subforms = {};

subforms['_binding_pair'] = $ => pair($, { lhs: $._binding }, { rhs: $._sexp });

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

subforms['let_form_vars'] = $ => seq(
	open('['),
	repeat($._binding_pair),
	close(']'),
);
forms['let'] = $ => form($,
	'let',
	field('vars', $.let_form_vars),
	repeat(item($._sexp)),
);

// subforms['_function_identifier'] = $ => choice(
// 	$.symbol,
// 	$.multi_symbol,
// );
// subforms['sequence_arguments'] = $ => seq(
// 	open('['),
// 	repeat(item($._binding)),
// 	optional(choice(
// 		item($.rest_binding),
// 		item(alias('...', $.symbol)),
// 	)),
// 	close(']'),
// );
// subforms['_table_metadata_pair'] = $ => choice(
// 	kv_pair($, { key: colon_string($, 'fnl/docstring') }, { value: alias($.string, $.docstring) }),
// 	kv_pair($, { key: colon_string($, 'fnl/arglist') }, { value: $.sequence_arguments }),
// 	kv_pair($, { key: $.string }),
// );
// subforms['table_metadata'] = $ => prec(1, seq(
// 	open('{'),
// 	repeat($._table_metadata_pair),
// 	close('}'),
// ));
// [
// 	'fn',
// 	'lambda',
// ].forEach(name => forms[name] = $ => form($,
// 	name == 'lambda' ? choice(name, 'λ') : name,
// 	optional(field('name', $._function_identifier)),
// 	field('args', $.sequence_arguments),
// 	choice(
// 		seq(
// 			// optional(field('docstring', prec(1, alias($.string, $.docstring)))),
// 			optional(field('metadata', prec(1, $.table))),
// 			repeat1(item($._sexp)),
// 		),
// 		repeat(item($._sexp)),
// 	),
// ));

const forms_ = {};
for (const [name, rule] of Object.entries(forms)) {
	if (!name.startsWith('_')) {
		forms_[name + '_form'] = rule;
	} else {
		forms_[name] = rule;
	}
}

module.exports = {
	subforms,
	forms: forms_,
};
