const _ = require('lodash');

// NOTE: They are only used in $._sexp, which means that they will not
// match if you just use $.symbol, you must explicitly specify
// $._special_override_symbol. This also means that they cannot be a
// part of multi-symbols.
const SPECIAL_OVERRIDE_SYMBOLS = [
	'#',
	'?.',
	'~=',
	':',
	'$...',
	'...',
	'..',
	'.',
];

function is_literal(node) {
	return typeof node === 'string' || node instanceof RegExp;
}

/**
 * Get literal out of a syntax node
 *
 * Example: get_literal(prec(1, '#')) == '#'
 *
 * @param {Object} node
 * @returns {string} Literal extracted from node
 */
function get_literal(node) {
	if (is_literal(node)) return node;
	else if (node.type === 'PATTERN' || node.type === 'STRING') return node.value;
	else return get_literal(node.content);
}

/**
 * Applies `func` to every literal inside node `node`.
 * Usually one would use this to generate immediate version of a node:
 * `apply_literal_recur(_.cloneDeep($._sexp), token.immediate)`
 */
function apply_literal_recur($, node, func) {
	switch (node.type) {
		// TODO: Figure out a case for this
		case 'SYMBOL':
			// throw new Error(`No case for ${node.type} yet!`);
			break;
		case 'ALIAS':
		case 'FIELD':
		case 'PREC':
		case 'PREC_LEFT':
		case 'PREC_RIGHT':
		case 'PREC_DYNAMIC':
		case 'REPEAT':
		case 'REPEAT1':
		case 'TOKEN':
		case 'IMMEDIATE_TOKEN':
			if (is_literal(node.content)) {
				const node_backup = _.cloneDeep(node);
				// If it doesn't return a new node, we put back the old one
				node = func(node) ?? node_backup;
			} else {
				apply_literal_recur($, node, func);
			}
			break;
		case 'CHOICE':
		case 'SEQ':
			node.members.forEach(node => apply_literal_recur($, node, func));
			break;
	}
}

/**
 * Insert `element` between every element of `array`.
 * @param {Array} array
 * @param {any} array
 */
function insert_between(array, element) {
	return array.flatMap((value, index) => index < array.length -  1 ? [value, element] : value)
}

/**
 * Like `seq`, but includes gaps around and in-between the elements.
 */
function gseq($, ...nodes) {
	nodes = insert_between(nodes, repeat($._gap));

	return seq(...nodes);
}

/**
 * Helper function that constructs a pair value.
 * Useful for associative structures.
 */
function pair($, lhs, rhs, precedence) {
	lhs = lhs ?? {};
	lhs_field = lhs.field ?? 'lhs';
	lhs = lhs.lhs ?? $._sexp;

	rhs = rhs ?? {};
	rhs_field = rhs.field ?? 'rhs';
	rhs_optional = rhs.optional ?? true;
	rhs = rhs.rhs ?? $._sexp;

	const prec_right = precedence == null ?  node => prec.right(node) : node => prec.right(precedence, node);

	return prec_right(seq(
		field(lhs_field, lhs),
		// NOTE: The `optional` here kind of "normalizes" the tree if the pair is not complete,
		// as if it's in the process of typing.
		rhs_optional ? optional(field(rhs_field, rhs)) : field(rhs_field, rhs),
	));
}
function kv_pair($, lhs, rhs, ...rest) {
	lhs = lhs ?? {};
	rhs = rhs ?? {};

	return pair($, { lhs: lhs.key, field: 'key' }, { rhs: rhs.value, field: 'value' }, ...rest);
}

const open = $ => field('open', $);
const close = $ => field('close', $);
const item = $ => field('item', $);
const call = $ => field('call', $);
const form = ($, name, ...rest) => seq(
	open('('),
	call(alias(name, $.symbol)),
	...rest,
	close(')'),
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

const prec_default = node => prec(-50, node);

module.exports = {
	insert_between,
	gseq,
	kv_pair,
	pair,
	get_literal,
	apply_literal_recur,
	open,
	close,
	item,
	call,
	form,
	SPECIAL_OVERRIDE_SYMBOLS,
	colon_string,
	prec_default,
	double_quote_string,
	string,
};
