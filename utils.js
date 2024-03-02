/**
 * Get literal out of a syntax node
 *
 * Example: get_literal(prec(1, '#')) == '#'
 *
 * @param {Object} node
 * @returns {string} Literal extracted from node
 */
function get_literal(node) {
	if (typeof node === 'string' || node instanceof RegExp) return node;
	else if (node.type === 'PATTERN' || node.type === 'STRING') return node.value;
	else return get_literal(node.content);
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
 * Returns a pair.
 */
function pair($, lhs, rhs) {
	lhs = lhs ?? {};
	lhs_field = lhs.field ?? 'lhs';
	lhs = lhs.lhs ?? $._sexp;

	rhs = rhs ?? {};
	rhs_field = rhs.field ?? 'rhs';
	rhs = rhs.rhs ?? $._sexp;

	return prec.right(seq(
		field(lhs_field, lhs),
		// NOTE: The `optional` here kind of "normalizes" the tree if the pair is not complete,
		// as if it's in the process of typing.
		optional(seq(
			$._gap,
			field(rhs_field, rhs),
		))
	));
}

// class Forms {
// 	constructor() {
// 		this.conflicts = [];
// 		this.rules = {};
// 	}
//
// 	/**
// 	 * @param {Object} rule
// 	 */
// 	add(rules) {
// 		for (const [name, rule] of Object.entries(rules)) {
// 			this[name] = rule;
// 		}
// 	}
//
// 	#add_seq($, rules) {
// 		this.conflicts = []
// 	}
// }

module.exports = { insert_between, gseq, pair, get_literal };
