const fs = require('fs');
const _ = require('lodash');
const path = require('path');

/**
 * @param {string} module_path
 * @returns {boolean}
 */
function is_normal_file(module_path) {
	const module_filename = path.basename(module_path);

	const is_private = module_filename.startsWith('_');
	const is_hidden = module_filename.startsWith('.');
	const is_directory = fs.lstatSync(module_path).isDirectory();

	return !is_private && !is_hidden && !is_directory;
}

/**
 * @param {string} module_path
 * @returns {boolean}
 */
function is_js_module(module_path) {
	const module_filename = path.basename(module_path);
	return module_filename.endsWith('.js') && is_normal_file(module_path);
}

/**
 * @callback ModuleFilter
 * @param {string} filename
 * @returns {boolean}
 */

/**
 * @typedef {{rules, forms, inline, conflicts}} TSExtension
 */

/**
 * @param {string} dir_path
 * @param {ModuleFilter} module_filter
 * @returns {TSExtension[]}
 */
function require_dir(dir_path, module_filter) {
	module_filter = module_filter ?? is_js_module;

	const module_paths = _.map(
		fs.readdirSync(dir_path),
		filename => path.normalize(path.join(process.cwd(), dir_path, filename)),
	);
	const modules = _.map(
		_.filter(module_paths, module_filter),
		filename => require(filename),
	);

	return modules;
}

/**
 * @param {TSExtension[]} extensions
 * @returns {TSExtension}
 */
function flatten_extensions(extensions) {
	const flattened_extensions = _.reduce(
		extensions,
		(acc, extension) => _.mergeWith(
			acc,
			extension,
			(base, extension) => Array.isArray(base) ? [...base, extension] : undefined,
		),
		{ rules: {}, forms: {}, inline: [], conflicts: [] },
	);

	flattened_extensions.inline = _.filter(flattened_extensions.inline, x => !Array.isArray(x));
	flattened_extensions.conflicts = _.filter(flattened_extensions.conflicts, x => !Array.isArray(x));

	return flattened_extensions;
}

module.exports = {
	is_normal_file,
	is_js_module,
	require_dir,
	flatten_extensions,
};
