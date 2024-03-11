#include "tree_sitter/parser.h"
#include <stdint.h>
#include <stdlib.h>
#include <wctype.h>
#include <stdio.h>

typedef uint32_t uchar;

typedef enum TokenType {
	// Reader Macros
	TK_HASHFN,
	TK_QUOTE,
	TK_QUASI_QUOTE,
	TK_UNQUOTE,
	TK_READER_MACRO_COUNT,

	TK_COLON_STRING_START_MARK,
	TK_COLON_STRING_END_MARK,

	TK_SHEBANG,

	TK_COUNT,
} TokenType;

// SAFETY: Make sure that these values are synced with all
// possible reader macro tokens.
static const uchar READER_MACRO_CHARS[TK_READER_MACRO_COUNT] = {
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

inline bool is_open_bracket(uint32_t ch) {
	switch (ch) {
		case '(':
		case '{':
		case '[':
			return true;
	}
	return false;
}

inline bool is_close_bracket(uint32_t ch) {
	switch (ch) {
		case ')':
		case '}':
		case ']':
			return true;
	}
	return false;
}

inline static bool is_bracket(uchar ch) {
	return is_open_bracket(ch) || is_close_bracket(ch);
}

inline static bool is_valid_colon_string_char(uchar ch) {
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

typedef struct BracketCount {
	uchar bracket;
	uint16_t count;
} BracketCount;

typedef BracketCount* vec_BracketCount;

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

	if (valid_symbols[TK_COLON_STRING_START_MARK]) {
		if (!is_valid_colon_string_char(lexer->lookahead)) {
			return false;
		}
	}

	// NOTE: If one reader macro is expected, then all of them are
	if (valid_symbols[TK_HASHFN] && !valid_symbols[TK_COLON_STRING_END_MARK]) {
	reader_macro_case:;
		bool reader_macro_matched = false;
		TokenType reader_macro;

		for (int tk = 0; tk < TK_READER_MACRO_COUNT; tk++) {
			if (lexer->lookahead == READER_MACRO_CHARS[tk]) {
				reader_macro_matched = true;
				reader_macro = tk;
				break;
			}
		}

		if (reader_macro_matched) {
			lexer->advance(lexer, false);

			const bool is_valid_reader_macro_position = !iswspace(lexer->lookahead)
				&& !is_close_bracket(lexer->lookahead)
				&& !lexer->eof(lexer);

			if (is_valid_reader_macro_position) {
				lexer->result_symbol = reader_macro;
				return true;
			}
		}
	}

	return false;
}
