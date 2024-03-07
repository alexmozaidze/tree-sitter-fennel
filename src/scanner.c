#include "tree_sitter/parser.h"
#include <stdint.h>
#include <wctype.h>
#include <stdio.h>

enum TokenType {
	// Reader Macros
	TK_HASHFN,
	// TK_QUOTE,
	// TK_QUASI_QUOTE,
	// TK_UNQUOTE,
};

// static const uint32_t TOKEN_CHARS[] = {
// 	[TK_HASHFN] = '#',
// 	[TK_QUOTE] = '\'',
// 	[TK_QUASI_QUOTE] = '`',
// 	[TK_UNQUOTE] = ',',
// };
// static const int TOKEN_CHARS_LENGTH = sizeof(TOKEN_CHARS) / sizeof(uint32_t);
//
// bool is_character_a_reader_macro(uint32_t ch) {
// 	switch (ch) {
// 		case '#':
// 		case '\'':
// 		case '`':
// 		case ',': return true;
// 		default: return false;
// 	}
// }

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
	if (valid_symbols[TK_HASHFN] && lexer->lookahead == '#') {
		printf("\nHash operator detected");
		lexer->advance(lexer, false);

		if (!iswspace(lexer->lookahead) && !lexer->eof(lexer)) {
			printf("\nIt is not followed by whitespace");
			lexer->result_symbol = '#';
			return true;
		}
	}

	printf("\nLookahead: %c, eof: %d\n", lexer->lookahead, lexer->eof(lexer));
	return false;
}
