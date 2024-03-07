#include "tree_sitter/parser.h"
#include <stdint.h>
#include <wctype.h>

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

bool is_reader_macro(enum TokenType tk) {
	switch (tk) {
		case TK_HASHFN: return '#';
		case TK_QUOTE: return '\'';
		case TK_QUASI_QUOTE: return '`';
		case TK_UNQUOTE: return ',';
		default: return NULL;
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
	uint32_t token_char;
	for (int i = 0; i < TOKEN_CHARS_LENGTH; i++) {
		token_char = TOKEN_CHARS[i];
		if (valid_symbols[token_char]) {
			break;
		}
	}

	if (is_reader_macro(token_char) && lexer->lookahead == token_char) {
		lexer->advance(lexer, false);

		if (iswspace(lexer->lookahead) && !lexer->eof(lexer)) {
			lexer->result_symbol = token_char;
			return true;
		}
	}

	return false;
}
