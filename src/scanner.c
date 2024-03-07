#include "tree_sitter/parser.h"
#include <stdint.h>
#include <wctype.h>
#include <stdio.h>

enum TokenType {
	// Reader Macros
	TK_HASHFN,
	TK_QUOTE,
	TK_QUASI_QUOTE,
	TK_UNQUOTE,
	TK_COUNT,
};

static const uint32_t TOKEN_CHARS[] = {
	[TK_HASHFN] = '#',
	[TK_QUOTE] = '\'',
	[TK_QUASI_QUOTE] = '`',
	[TK_UNQUOTE] = ',',
};

bool is_character_a_reader_macro(uint32_t ch) {
	for (int i = 0; i < TK_COUNT; i++) {
		if (TOKEN_CHARS[i] == ch) {
			return true;
		}
	}

	return false;
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
	// const bool in_error_recovery = valid_symbols[TK_COUNT];
	// if (in_error_recovery) {
	// 	printf("L");
	// 	return false;
	// }

	// SAFETY: If one reader macro matches, then all of them match
	const bool is_reader_macro = valid_symbols[TK_HASHFN];

	if (is_reader_macro) {
		bool reader_macro_matched = false;
		enum TokenType reader_macro;
		for (int tk = 0; tk < TK_COUNT; tk++) {
			if (lexer->lookahead == TOKEN_CHARS[tk]) {
				reader_macro = tk;
				reader_macro_matched = true;
				break;
			}
		}

		if (!reader_macro_matched) {
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
