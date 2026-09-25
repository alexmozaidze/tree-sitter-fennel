module.exports = {
	READER_MACROS: [
		['hashfn', '#'],
		['quote', '\''],
		['quasi_quote', '`'],
		['unquote', ','],
	],

	SPECIAL_STANDALONE_SYMBOLS: [
		'#',
		'?.',
		'~=',
		':',
		'$...',
		'...',
		'..',
		'.',
	],

	TABLE_METADATA_KEYS: {
		DOCSTRING: 'fnl/docstring',
		ARGLIST: 'fnl/arglist',
	},
}
