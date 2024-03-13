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

inline static bool is_open_bracket(const uchar ch) {
	switch (ch) {
		case '(':
		case '{':
		case '[':
			return true;
	}
	return false;
}

inline static bool is_close_bracket(const uchar ch) {
	switch (ch) {
		case ')':
		case '}':
		case ']':
			return true;
	}
	return false;
}

inline static bool is_bracket(const uchar ch) {
	return is_open_bracket(ch) || is_close_bracket(ch);
}

inline static bool is_valid_colon_string_char(const uchar ch) {
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

	const bool skipped_whitespace = iswspace(lexer->lookahead);
	while (iswspace(lexer->lookahead)) {
		lexer->advance(lexer, true);
	}

	bool skipped_hashfn = false;
	if (valid_symbols[TK_SHEBANG]) {
		lexer->mark_end(lexer);

		if (lexer->lookahead != '#') {
			goto no_shebang;
		}
		skipped_hashfn = true;
		lexer->advance(lexer, false);

		if (lexer->lookahead != '!') {
			goto no_shebang;
		}
		skipped_hashfn = false;
		lexer->advance(lexer, false);

		while (lexer->lookahead != '\n' && !lexer->eof(lexer)) {
			lexer->advance(lexer, false);
		}
		lexer->mark_end(lexer);
		lexer->result_symbol = TK_SHEBANG;
		return true;
	}
no_shebang:;

	const bool in_colon_string_context = valid_symbols[TK_COLON_STRING_START_MARK] && valid_symbols[TK_COLON_STRING_END_MARK];

	// NOTE: If one reader macro is expected, then all of them are
	if (valid_symbols[TK_HASHFN] && (skipped_whitespace || !valid_symbols[TK_COLON_STRING_START_MARK])) {
		bool reader_macro_matched = false;
		TokenType reader_macro;

		if (skipped_hashfn) {
			reader_macro_matched = true;
			reader_macro = TK_HASHFN;
			goto matched_reader_macro;
		}
		for (int tk = 0; tk < TK_READER_MACRO_COUNT; tk++) {
			if (lexer->lookahead == READER_MACRO_CHARS[tk]) {
				reader_macro_matched = true;
				reader_macro = tk;
				break;
			}
		}

	matched_reader_macro:;

		if (reader_macro_matched) {
			if (!skipped_hashfn) {
				lexer->advance(lexer, false);
			}

			const bool is_valid_reader_macro_position = !iswspace(lexer->lookahead)
				&& !is_close_bracket(lexer->lookahead)
				&& !lexer->eof(lexer);

			if (is_valid_reader_macro_position) {
				lexer->mark_end(lexer);
				lexer->result_symbol = reader_macro;
				return true;
			}
		}
	}

	return false;
}
