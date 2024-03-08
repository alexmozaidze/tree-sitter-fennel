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

bool in_error_recovery(const bool *valid_symbols) {
	for (int i = 0; i <= TK_COUNT; i++) {
		if (!valid_symbols[i]) {
			return false;
		}
	}

	return true;
}

bool is_valid_colon_string_char(uint32_t ch) {
	if (iswspace(ch)) {
		return false;
	}

	switch (ch) {
		case '(':
		case ')':
		case '{':
		case '}':
		case '[':
		case ']':
		case '"':
		case '\'':
		case '~':
		case ';':
		case ',':
		case '@':
		case '`':
			return false;
	}

	return true;
}

bool is_valid_symbol_char(uint32_t ch) {
	if (iswspace(ch)) {
		return false;
	}

	switch (ch) {
		case '(':
		case ')':
		case '{':
		case '}':
		case '[':
		case ']':
		case '"':
		case '\'':
		case '~':
		case ';':
		case ',':
		case '@':
		case '`':
		case '.':
		case ':':
			return false;
	}

	return true;
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

	bool reader_macro_matched = false;
	enum TokenType reader_macro;

	// NOTE: If one reader macro is expected, then all of them are
	if (valid_symbols[TK_HASHFN]) {
		for (int tk = 0; tk < TK_READER_MACRO_COUNT; tk++) {
			if (lexer->lookahead == READER_MACRO_CHARS[tk]) {
				reader_macro_matched = true;
				reader_macro = tk;
				break;
			}
		}
	}
	if (reader_macro_matched) {
		lexer->advance(lexer, false);

		if (!iswspace(lexer->lookahead) && !lexer->eof(lexer)) {
			lexer->result_symbol = reader_macro;
			return true;
		} else {
			return false;
		}
	}

	return false;
}
