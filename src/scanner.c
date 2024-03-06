#include "tree_sitter/parser.h"
#include <wctype.h>

enum TokenType {
	// Reader Macros
	TK_HASHFN,
	TK_QUOTE,
	TK_QUASI_QUOTE,
	TK_UNQUOTE,
};

static const uint32_t READER_MACRO_CHARS[] = {
	[TK_HASHFN] = '#',
	[TK_QUOTE] = '\'',
	[TK_QUASI_QUOTE] = '`',
	[TK_UNQUOTE] = ',',
};
static const int READER_MACRO_CHARS_LENGTH = sizeof(READER_MACRO_CHARS) / sizeof(uint32_t);

void* tree_sitter_fennel_external_scanner_create(
	void
)
{
	return NULL;
}

void tree_sitter_fennel_external_scanner_destroy(
	void* payload
)
{
}

void tree_sitter_fennel_external_scanner_reset(
	void* payload
)
{
}

unsigned tree_sitter_fennel_external_scanner_serialize(
	void* payload,
	char* buffer
)
{
	return 0;
}

void tree_sitter_fennel_external_scanner_deserialize(
	void *payload,
	const char *buffer,
	unsigned length
)
{
}

bool tree_sitter_fennel_external_scanner_scan(
	void *payload,
	TSLexer *lexer,
	const bool *valid_symbols
)
{
	while (iswspace(lexer->lookahead)) {
		lexer->advance(lexer, true);
	}

	bool is_reader_macro_expected = false;
	char reader_macro_char;
	for (int i = 0; i < READER_MACRO_CHARS_LENGTH; i++) {
		reader_macro_char = READER_MACRO_CHARS[i];
		if (valid_symbols[reader_macro_char]) {
			is_reader_macro_expected = true;
			break;
		}
	}

	if (is_reader_macro_expected && lexer->lookahead == reader_macro_char) {
		lexer->result_symbol = reader_macro_char;

		if (!iswspace(lexer->lookahead)) {
			return true;
		}
	}

	return false;
}
