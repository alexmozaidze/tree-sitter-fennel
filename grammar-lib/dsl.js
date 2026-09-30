const { is_literal } = require('./node-utils.js');

/**
 * Helper function that constructs a pair value.
 * Useful for associative structures.
 */
function pair($, lhs, rhs, precedence) {
	lhs = lhs ?? {};
	const lhs_field = lhs.field ?? 'lhs';
	lhs = lhs.lhs ?? $._sexp;

	rhs = rhs ?? {};
	const rhs_field = rhs.field ?? 'rhs';
	const rhs_optional = rhs.optional ?? true;
	rhs = rhs.rhs ?? $._sexp;

	const prec_right = precedence == null ?  node => prec.right(node) : node => prec.right(precedence, node);

	return prec_right(seq(
		field(lhs_field, lhs),
		// NOTE: The `optional` here kind of "normalizes" the tree if the pair is not complete,
		// as if it's in the process of typing.
		rhs_optional ? optional(field(rhs_field, rhs)) : field(rhs_field, rhs),
	));
}

/**
 * A flavoured version of `pairs`.
 */
function kv_pair($, lhs, rhs, ...rest) {
	lhs = lhs ?? {};
	rhs = rhs ?? {};

	return pair($,
		{ lhs: lhs.key, field: lhs.field ?? 'key' },
		{ rhs: rhs.value, field: rhs.field ?? 'value' },
		...rest
	);
}

const open = $ => field('open', $);
const close = $ => field('close', $);
const item = $ => field('item', $);
const call = $ => field('call', $);
const list = (...nodes) => seq(
	open('('),
	...nodes,
	close(')'),
);
const sequence = (...nodes) => seq(
	open('['),
	...nodes,
	close(']'),
);
const table = (...nodes) => seq(
	open('{'),
	...nodes,
	close('}'),
);
const form = ($, name, ...rest) => list(
	call(alias(name, $.symbol)),
	...rest,
);

function colon_string($, content) {
	if (content == null) {
		throw new Error('Colon string must contain *something*');
	}

	if (is_literal(content)) {
		content = token.immediate(content);
	}

	return seq(
		open(':'),
		optional($.__colon_string_start_mark),
		field('content', alias(content, $.string_content)),
		optional($.__colon_string_end_mark),
	);
};

function double_quote_string($, content) {
	if (content == null) {
		throw new Error('String must contain *something*');
	}

	if (is_literal(content)) {
		content = token.immediate(content);
	}

	return seq(
		open('"'),
		field('content', alias(content, $.string_content)),
		close('"'),
	);
}

function string($, content) {
	return choice(
		colon_string($, content),
		double_quote_string($, content),
	)
}

const sexp_members = $ => [
	$._reader_macro,
	$._special_override_symbol,
	$.symbol_option,
	$.symbol,
	$.multi_symbol,
	$.multi_symbol_method,
	$._form,
	$.list,
	$.sequence,
	$.table,
];

const literal_members = $ => ({ string: $.string, number: $.number, boolean: $.boolean, nil: $.nil });

const non_string_literal_members = $ => {
	const { string: _, ...rest } = literal_members($);
	return Object.values(rest);
};

module.exports = {
	kv_pair,
	pair,
	open,
	close,
	item,
	call,
	form,
	colon_string,
	double_quote_string,
	string,
	list,
	sequence,
	table,
	sexp_members,
	literal_members,
	non_string_literal_members,
};
