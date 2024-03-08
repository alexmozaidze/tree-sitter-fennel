#include "tree_sitter/parser.h"
#include <stdint.h>
#include <stdlib.h>
#include <wctype.h>
#include <stdio.h>

enum TokenType {
	// Reader Macros
	TK_HASHFN,
	TK_QUOTE,
	TK_QUASI_QUOTE,
	TK_UNQUOTE,
	TK_READER_MACRO_COUNT,

	TK_INVALID,
	TK_COUNT,
};

// SAFETY: Make sure that these values are synced with all
// possible reader macro tokens.
static const uint32_t READER_MACRO_CHARS[TK_READER_MACRO_COUNT] = {
	// Reader Macros
	[TK_HASHFN] = '#',
	[TK_QUOTE] = '\'',
	[TK_QUASI_QUOTE] = '`',
	[TK_UNQUOTE] = ',',
};

inline static bool in_error_recovery(const bool *valid_symbols) {
	for (int i = 0; i <= TK_COUNT; i++) {
		if (!valid_symbols[i]) {
			return false;
		}
	}

	return true;
}

static enum TokenType reader_macro_to_char(uint32_t ch) {
	for (int tk = 0; tk < TK_READER_MACRO_COUNT; tk++) {
		if (READER_MACRO_CHARS[tk] == ch) {
			return tk;
		}
	}

	return TK_INVALID;
}

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
	if (in_error_recovery(valid_symbols)) {
		return false;
	}
	while (iswspace(lexer->lookahead)) {
		lexer->advance(lexer, true);
	}

	// NOTE: If one reader macro is expected, then all of them are
	if (valid_symbols[TK_HASHFN]) {
		enum TokenType reader_macro = reader_macro_to_char(lexer->lookahead);
		if (reader_macro != TK_INVALID) {
			return false;
		}
		lexer->advance(lexer, false);

		if (!iswspace(lexer->lookahead) && !lexer->eof(lexer)) {
			lexer->result_symbol = reader_macro;
			return true;
		}
	}

	return false;
}
