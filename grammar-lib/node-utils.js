const _ = require('lodash');

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
	is_literal,
	get_literal,
	apply_literal_recur,
	insert_between,
};
