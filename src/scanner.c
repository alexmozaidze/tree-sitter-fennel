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
};

static const uint32_t TOKEN_CHARS[] = {
	[TK_HASHFN] = '#',
	[TK_QUOTE] = '\'',
	[TK_QUASI_QUOTE] = '`',
	[TK_UNQUOTE] = ',',
};
static const int TOKEN_CHARS_LENGTH = sizeof(TOKEN_CHARS) / sizeof(uint32_t);

bool is_character_a_reader_macro(uint32_t ch) {
	switch (ch) {
		case '#':
		case '\'':
		case '`':
		case ',': return true;
		default: return false;
	}
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
	bool is_valid_token_found = false;
	uint32_t token_char;
	for (int i = 0; i < TOKEN_CHARS_LENGTH; i++) {
		token_char = TOKEN_CHARS[i];
		if (valid_symbols[i]) {
			is_valid_token_found = true;
			break;
		}
	}
	if (!is_valid_token_found) return false;

	printf("%c", token_char);
	if (is_character_a_reader_macro(token_char) && lexer->lookahead == token_char) {
		printf("1");
		lexer->advance(lexer, false);

		if (!iswspace(lexer->lookahead) && !lexer->eof(lexer)) {
			printf("2");
			lexer->result_symbol = token_char;
			return true;
		}
	}

	return false;
}
