const {
	item,
	form,
} = require('../../grammar-lib/dsl.js');

const rules = {};
const forms = {};

forms['quote'] = $ => form($,
	'quote',
	item($._sexp),
);
forms['unquote'] = $ => form($,
	'unquote',
	item($._sexp),
);

module.exports = {
	rules,
	forms,
};
