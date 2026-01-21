const _ = require('lodash');
const {
	READER_MACROS
} = require('./constants');

/**
 * @param {string=} namespace Postfix that should be added to the base name.
 * @returns {Object}
 */
function nodify_reader_macros(namespace) {
	// TODO: Implement proper error-handling
	if (typeof namespace === 'string' && namespace !== '') {
		namespace = `_${namespace}`;
	}
	// null and undefined are not '' when expanded in a string. We're forcing it to nothing.
	if (namespace == null) {
		namespace = '';
	}
	if (typeof namespace !== 'string') {
		throw new Error(`Namespace must be of type string. Instead got: ${typeof namespace}`);
	}

	const nodify = ([name, char]) => [
		`${name}_reader_macro${namespace}`,
		$ => prec(-1, seq(
			field('macro', alias($[`_${name}_reader_macro_char`], char)),
			field('expression', $._sexp),
		)),
	];

	return {
		reader_macro_nodes: Object.fromEntries([...READER_MACROS].map(nodify)),
		reader_macro_group: $ => choice(
			...[...READER_MACROS].map(([name, _char]) => $[`${name}_reader_macro${namespace}`]),
		),
	}
}

/**
 * Returns whether a node is a string or a regex (aka, not a node).
 *
 * @param {any} node
 * @returns {boolean}
 */
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
		case 'SYMBOL':
			throw new Error(`Impossible to deref a symbol for now`);
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

module.exports = {
	nodify_reader_macros,
	is_literal,
	get_literal,
	apply_literal_recur,
	insert_between,
};
