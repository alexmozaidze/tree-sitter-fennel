// TODO: Sort forms into sub-modules for better readability

const _ = require('lodash');
const {
	require_dir,
	flatten_extensions,
} = require('../grammar-lib/fs.js');

const builtin_forms = flatten_extensions(require_dir('extensions/builtin-forms'));
builtin_forms.forms = _.mapKeys(builtin_forms.forms, (_, name) => `${name}_form`);

module.exports = builtin_forms;
