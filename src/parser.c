#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 19

enum {
  sym_shebang = 1,
  sym__whitespace = 2,
  sym_comment = 3,
  anon_sym_POUND = 4,
  anon_sym_QMARK_DOT = 5,
  anon_sym_TILDE_EQ = 6,
  anon_sym_COLON = 7,
  anon_sym_DOLLAR_DOT_DOT_DOT = 8,
  anon_sym_DOT_DOT_DOT = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_DOT = 11,
  anon_sym_SQUOTE = 12,
  anon_sym_BQUOTE = 13,
  anon_sym_COMMA = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  sym_nil = 21,
  sym_boolean = 22,
  aux_sym__colon_string_token1 = 23,
  anon_sym_DQUOTE = 24,
  aux_sym__double_quote_string_token1 = 25,
  sym_escape_sequence = 26,
  sym_number = 27,
  sym_symbol = 28,
  sym_program = 29,
  sym__gap = 30,
  sym__sexp = 31,
  sym__special_override_symbols = 32,
  sym__reader_macro_char = 33,
  sym_reader_macro = 34,
  sym__list_content = 35,
  sym_list = 36,
  sym_sequence = 37,
  sym_table_pair = 38,
  sym_table = 39,
  sym__literal = 40,
  sym__colon_string = 41,
  sym__double_quote_string = 42,
  sym_string = 43,
  sym_multi_symbol = 44,
  sym_multi_symbol_method = 45,
  aux_sym_program_repeat1 = 46,
  aux_sym__list_content_repeat1 = 47,
  aux_sym_sequence_repeat1 = 48,
  aux_sym_table_repeat1 = 49,
  aux_sym__double_quote_string_repeat1 = 50,
  aux_sym_multi_symbol_repeat1 = 51,
  alias_sym_symbol_fragment = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [anon_sym_QMARK_DOT] = "symbol",
  [anon_sym_TILDE_EQ] = "symbol",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT] = "symbol",
  [anon_sym_DOT] = ".",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_nil] = "nil",
  [sym_boolean] = "boolean",
  [aux_sym__colon_string_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_program] = "program",
  [sym__gap] = "_gap",
  [sym__sexp] = "_sexp",
  [sym__special_override_symbols] = "_special_override_symbols",
  [sym__reader_macro_char] = "_reader_macro_char",
  [sym_reader_macro] = "reader_macro",
  [sym__list_content] = "_list_content",
  [sym_list] = "list",
  [sym_sequence] = "sequence",
  [sym_table_pair] = "table_pair",
  [sym_table] = "table",
  [sym__literal] = "_literal",
  [sym__colon_string] = "_colon_string",
  [sym__double_quote_string] = "_double_quote_string",
  [sym_string] = "string",
  [sym_multi_symbol] = "multi_symbol",
  [sym_multi_symbol_method] = "multi_symbol_method",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__list_content_repeat1] = "_list_content_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym__double_quote_string_repeat1] = "_double_quote_string_repeat1",
  [aux_sym_multi_symbol_repeat1] = "multi_symbol_repeat1",
  [alias_sym_symbol_fragment] = "symbol_fragment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_shebang] = sym_shebang,
  [sym__whitespace] = sym__whitespace,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_QMARK_DOT] = sym_symbol,
  [anon_sym_TILDE_EQ] = sym_symbol,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT] = sym_symbol,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_nil] = sym_nil,
  [sym_boolean] = sym_boolean,
  [aux_sym__colon_string_token1] = aux_sym__colon_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_program] = sym_program,
  [sym__gap] = sym__gap,
  [sym__sexp] = sym__sexp,
  [sym__special_override_symbols] = sym__special_override_symbols,
  [sym__reader_macro_char] = sym__reader_macro_char,
  [sym_reader_macro] = sym_reader_macro,
  [sym__list_content] = sym__list_content,
  [sym_list] = sym_list,
  [sym_sequence] = sym_sequence,
  [sym_table_pair] = sym_table_pair,
  [sym_table] = sym_table,
  [sym__literal] = sym__literal,
  [sym__colon_string] = sym__colon_string,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym_string] = sym_string,
  [sym_multi_symbol] = sym_multi_symbol,
  [sym_multi_symbol_method] = sym_multi_symbol_method,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__list_content_repeat1] = aux_sym__list_content_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym__double_quote_string_repeat1] = aux_sym__double_quote_string_repeat1,
  [aux_sym_multi_symbol_repeat1] = aux_sym_multi_symbol_repeat1,
  [alias_sym_symbol_fragment] = alias_sym_symbol_fragment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOT_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__colon_string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym__special_override_symbols] = {
    .visible = false,
    .named = true,
  },
  [sym__reader_macro_char] = {
    .visible = false,
    .named = true,
  },
  [sym_reader_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__list_content] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_table_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__colon_string] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_symbol_method] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_symbol_fragment] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_base = 1,
  field_close = 2,
  field_content = 3,
  field_expression = 4,
  field_item = 5,
  field_key = 6,
  field_macro = 7,
  field_member = 8,
  field_method = 9,
  field_open = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_close] = "close",
  [field_content] = "content",
  [field_expression] = "expression",
  [field_item] = "item",
  [field_key] = "key",
  [field_macro] = "macro",
  [field_member] = "member",
  [field_method] = "method",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 3},
  [14] = {.index = 26, .length = 1},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [2] =
    {field_close, 0, .inherited = true},
    {field_content, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [5] =
    {field_content, 1},
    {field_open, 0},
  [7] =
    {field_close, 1},
    {field_open, 0},
  [9] =
    {field_item, 0},
  [10] =
    {field_key, 0},
  [11] =
    {field_base, 0},
    {field_member, 1, .inherited = true},
  [13] =
    {field_expression, 1},
    {field_macro, 0},
  [15] =
    {field_close, 2},
    {field_item, 1},
    {field_open, 0},
  [18] =
    {field_close, 2},
    {field_item, 1, .inherited = true},
    {field_open, 0},
  [21] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [23] =
    {field_close, 2},
    {field_content, 1},
    {field_open, 0},
  [26] =
    {field_member, 1},
  [27] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [29] =
    {field_base, 0},
    {field_method, 2},
  [31] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_symbol,
  },
  [4] = {
    [1] = aux_sym__colon_string_token1,
  },
  [8] = {
    [0] = alias_sym_symbol_fragment,
  },
  [13] = {
    [1] = aux_sym__colon_string_token1,
  },
  [14] = {
    [1] = alias_sym_symbol_fragment,
  },
  [16] = {
    [0] = alias_sym_symbol_fragment,
    [2] = alias_sym_symbol_fragment,
  },
  [17] = {
    [2] = alias_sym_symbol_fragment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__double_quote_string_repeat1, 2,
    aux_sym__double_quote_string_repeat1,
    aux_sym__colon_string_token1,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 10,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 30,
  [49] = 29,
  [50] = 28,
  [51] = 51,
  [52] = 52,
  [53] = 27,
  [54] = 54,
  [55] = 33,
  [56] = 56,
  [57] = 57,
  [58] = 38,
  [59] = 59,
  [60] = 43,
  [61] = 40,
  [62] = 31,
  [63] = 36,
  [64] = 46,
  [65] = 37,
  [66] = 32,
  [67] = 42,
  [68] = 44,
  [69] = 45,
  [70] = 41,
  [71] = 71,
  [72] = 39,
  [73] = 73,
  [74] = 34,
  [75] = 35,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 78,
  [80] = 77,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 83,
  [87] = 87,
  [88] = 88,
  [89] = 85,
};

static inline bool sym_shebang_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < '"'
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym__colon_string_token1_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym__colon_string_token1_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? (c >= '"' && c <= '#')
        : (c <= ')' || c == ','))))
    : (c <= '.' || (c < ']'
      ? (c < '@'
        ? (c >= ':' && c <= ';')
        : (c <= '@' || c == '['))
      : (c <= ']' || (c < '{'
        ? c == '`'
        : (c <= '{' || (c >= '}' && c <= '~')))))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= '.' || (c < ']'
      ? (c < '@'
        ? (c >= ':' && c <= ';')
        : (c <= '@' || c == '['))
      : (c <= ']' || (c < '{'
        ? c == '`'
        : (c <= '{' || (c >= '}' && c <= '~')))))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || (c >= ',' && c <= '.')))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 17:
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(126);
      END_STATE();
    case 18:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(126);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(111);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(126);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(94);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(82);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_shebang);
      if (sym_shebang_character_set_1(lookahead)) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(22);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(23);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(39);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_nil);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_boolean);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(37);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(63);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(93);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(106);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(3);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(31);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(117);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(56);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(118);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(120);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(54);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(121);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(115);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(115);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(126);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 19},
  [24] = {.lex_state = 19},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 19},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 19},
  [61] = {.lex_state = 19},
  [62] = {.lex_state = 19},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 19},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 19},
  [70] = {.lex_state = 19},
  [71] = {.lex_state = 19},
  [72] = {.lex_state = 19},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 17},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 17},
  [88] = {.lex_state = 17},
  [89] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [aux_sym__colon_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(84),
    [sym__gap] = STATE(18),
    [sym__sexp] = STATE(18),
    [sym__special_override_symbols] = STATE(18),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(18),
    [sym_list] = STATE(18),
    [sym_sequence] = STATE(18),
    [sym_table] = STATE(18),
    [sym__literal] = STATE(18),
    [sym__colon_string] = STATE(55),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(18),
    [sym_multi_symbol] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(27),
    [sym_boolean] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(27),
    [sym_symbol] = ACTIONS(31),
  },
  [2] = {
    [sym__gap] = STATE(23),
    [sym__sexp] = STATE(9),
    [sym__special_override_symbols] = STATE(9),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(9),
    [sym__list_content] = STATE(83),
    [sym_list] = STATE(9),
    [sym_sequence] = STATE(9),
    [sym_table] = STATE(9),
    [sym__literal] = STATE(9),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(9),
    [sym_multi_symbol] = STATE(73),
    [sym_multi_symbol_method] = STATE(9),
    [aux_sym__list_content_repeat1] = STATE(23),
    [sym__whitespace] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(55),
    [sym_boolean] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
    [sym_symbol] = ACTIONS(59),
  },
  [3] = {
    [sym__gap] = STATE(23),
    [sym__sexp] = STATE(9),
    [sym__special_override_symbols] = STATE(9),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(9),
    [sym__list_content] = STATE(86),
    [sym_list] = STATE(9),
    [sym_sequence] = STATE(9),
    [sym_table] = STATE(9),
    [sym__literal] = STATE(9),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(9),
    [sym_multi_symbol] = STATE(73),
    [sym_multi_symbol_method] = STATE(9),
    [aux_sym__list_content_repeat1] = STATE(23),
    [sym__whitespace] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(55),
    [sym_boolean] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
    [sym_symbol] = ACTIONS(59),
  },
  [4] = {
    [sym__gap] = STATE(5),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(5),
    [sym__whitespace] = ACTIONS(63),
    [sym_comment] = ACTIONS(63),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym_nil] = ACTIONS(67),
    [sym_boolean] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
  },
  [5] = {
    [sym__gap] = STATE(7),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(71),
    [sym_comment] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_nil] = ACTIONS(67),
    [sym_boolean] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
  },
  [6] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(75),
    [sym_comment] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym_nil] = ACTIONS(67),
    [sym_boolean] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
  },
  [7] = {
    [sym__gap] = STATE(7),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(79),
    [sym_comment] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(82),
    [anon_sym_QMARK_DOT] = ACTIONS(85),
    [anon_sym_TILDE_EQ] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_nil] = ACTIONS(111),
    [sym_boolean] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [sym_number] = ACTIONS(111),
    [sym_symbol] = ACTIONS(117),
  },
  [8] = {
    [sym__gap] = STATE(7),
    [sym__sexp] = STATE(52),
    [sym__special_override_symbols] = STATE(52),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(52),
    [sym_list] = STATE(52),
    [sym_sequence] = STATE(52),
    [sym_table_pair] = STATE(54),
    [sym_table] = STATE(52),
    [sym__literal] = STATE(52),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(52),
    [sym_multi_symbol] = STATE(52),
    [aux_sym_table_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(71),
    [sym_comment] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(120),
    [sym_nil] = ACTIONS(67),
    [sym_boolean] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
  },
  [9] = {
    [sym__gap] = STATE(22),
    [sym__sexp] = STATE(22),
    [sym__special_override_symbols] = STATE(22),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(22),
    [sym_list] = STATE(22),
    [sym_sequence] = STATE(22),
    [sym_table] = STATE(22),
    [sym__literal] = STATE(22),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(22),
    [sym_multi_symbol] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [sym__whitespace] = ACTIONS(122),
    [sym_comment] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(126),
    [sym_boolean] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(126),
    [sym_symbol] = ACTIONS(69),
  },
  [10] = {
    [sym__gap] = STATE(10),
    [sym__sexp] = STATE(10),
    [sym__special_override_symbols] = STATE(10),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(10),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [sym__whitespace] = ACTIONS(128),
    [sym_comment] = ACTIONS(128),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_QMARK_DOT] = ACTIONS(134),
    [anon_sym_TILDE_EQ] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(134),
    [anon_sym_DOT_DOT] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(157),
    [sym_nil] = ACTIONS(160),
    [sym_boolean] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_number] = ACTIONS(160),
    [sym_symbol] = ACTIONS(166),
  },
  [11] = {
    [sym__gap] = STATE(14),
    [sym__sexp] = STATE(71),
    [sym__special_override_symbols] = STATE(71),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(71),
    [sym_list] = STATE(71),
    [sym_sequence] = STATE(71),
    [sym_table] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(71),
    [sym_multi_symbol] = STATE(71),
    [aux_sym_sequence_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(169),
    [sym_comment] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(173),
    [sym_symbol] = ACTIONS(69),
  },
  [12] = {
    [sym__gap] = STATE(17),
    [sym__sexp] = STATE(71),
    [sym__special_override_symbols] = STATE(71),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(71),
    [sym_list] = STATE(71),
    [sym_sequence] = STATE(71),
    [sym_table] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(71),
    [sym_multi_symbol] = STATE(71),
    [aux_sym_sequence_repeat1] = STATE(17),
    [sym__whitespace] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(173),
    [sym_symbol] = ACTIONS(69),
  },
  [13] = {
    [sym__gap] = STATE(13),
    [sym__sexp] = STATE(71),
    [sym__special_override_symbols] = STATE(71),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(71),
    [sym_list] = STATE(71),
    [sym_sequence] = STATE(71),
    [sym_table] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(71),
    [sym_multi_symbol] = STATE(71),
    [aux_sym_sequence_repeat1] = STATE(13),
    [sym__whitespace] = ACTIONS(179),
    [sym_comment] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(182),
    [anon_sym_QMARK_DOT] = ACTIONS(185),
    [anon_sym_TILDE_EQ] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(185),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(185),
    [anon_sym_DOT_DOT] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(208),
    [sym_nil] = ACTIONS(211),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym_number] = ACTIONS(211),
    [sym_symbol] = ACTIONS(217),
  },
  [14] = {
    [sym__gap] = STATE(13),
    [sym__sexp] = STATE(71),
    [sym__special_override_symbols] = STATE(71),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(71),
    [sym_list] = STATE(71),
    [sym_sequence] = STATE(71),
    [sym_table] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(71),
    [sym_multi_symbol] = STATE(71),
    [aux_sym_sequence_repeat1] = STATE(13),
    [sym__whitespace] = ACTIONS(220),
    [sym_comment] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(173),
    [sym_symbol] = ACTIONS(69),
  },
  [15] = {
    [sym__gap] = STATE(21),
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(21),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym__colon_string] = STATE(55),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym__whitespace] = ACTIONS(226),
    [sym_comment] = ACTIONS(226),
    [anon_sym_POUND] = ACTIONS(228),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(230),
    [sym_boolean] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(230),
    [sym_symbol] = ACTIONS(31),
  },
  [16] = {
    [sym__gap] = STATE(19),
    [sym__sexp] = STATE(19),
    [sym__special_override_symbols] = STATE(19),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(19),
    [sym_list] = STATE(19),
    [sym_sequence] = STATE(19),
    [sym_table] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(19),
    [sym_multi_symbol] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [sym__whitespace] = ACTIONS(232),
    [sym_comment] = ACTIONS(232),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(236),
    [sym_boolean] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(236),
    [sym_symbol] = ACTIONS(69),
  },
  [17] = {
    [sym__gap] = STATE(13),
    [sym__sexp] = STATE(71),
    [sym__special_override_symbols] = STATE(71),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(71),
    [sym_list] = STATE(71),
    [sym_sequence] = STATE(71),
    [sym_table] = STATE(71),
    [sym__literal] = STATE(71),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(71),
    [sym_multi_symbol] = STATE(71),
    [aux_sym_sequence_repeat1] = STATE(13),
    [sym__whitespace] = ACTIONS(220),
    [sym_comment] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(173),
    [sym_symbol] = ACTIONS(69),
  },
  [18] = {
    [sym__gap] = STATE(20),
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(55),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym__whitespace] = ACTIONS(240),
    [sym_comment] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(228),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(242),
    [sym_boolean] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(242),
    [sym_symbol] = ACTIONS(31),
  },
  [19] = {
    [sym__gap] = STATE(10),
    [sym__sexp] = STATE(10),
    [sym__special_override_symbols] = STATE(10),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(10),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [sym__whitespace] = ACTIONS(244),
    [sym_comment] = ACTIONS(244),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(248),
    [sym_boolean] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(248),
    [sym_symbol] = ACTIONS(69),
  },
  [20] = {
    [sym__gap] = STATE(20),
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(55),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym__whitespace] = ACTIONS(250),
    [sym_comment] = ACTIONS(250),
    [anon_sym_POUND] = ACTIONS(253),
    [anon_sym_QMARK_DOT] = ACTIONS(256),
    [anon_sym_TILDE_EQ] = ACTIONS(256),
    [anon_sym_COLON] = ACTIONS(259),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(256),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(256),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [anon_sym_BQUOTE] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(277),
    [sym_nil] = ACTIONS(280),
    [sym_boolean] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [sym_number] = ACTIONS(280),
    [sym_symbol] = ACTIONS(286),
  },
  [21] = {
    [sym__gap] = STATE(20),
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(55),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym__whitespace] = ACTIONS(240),
    [sym_comment] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(228),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(242),
    [sym_boolean] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(242),
    [sym_symbol] = ACTIONS(31),
  },
  [22] = {
    [sym__gap] = STATE(10),
    [sym__sexp] = STATE(10),
    [sym__special_override_symbols] = STATE(10),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(10),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [sym__whitespace] = ACTIONS(244),
    [sym_comment] = ACTIONS(244),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(248),
    [sym_boolean] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(248),
    [sym_symbol] = ACTIONS(69),
  },
  [23] = {
    [sym__gap] = STATE(47),
    [sym__sexp] = STATE(16),
    [sym__special_override_symbols] = STATE(16),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(16),
    [sym_list] = STATE(16),
    [sym_sequence] = STATE(16),
    [sym_table] = STATE(16),
    [sym__literal] = STATE(16),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(16),
    [sym_multi_symbol] = STATE(73),
    [sym_multi_symbol_method] = STATE(16),
    [aux_sym__list_content_repeat1] = STATE(47),
    [sym__whitespace] = ACTIONS(291),
    [sym_comment] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(293),
    [sym_boolean] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(293),
    [sym_symbol] = ACTIONS(59),
  },
  [24] = {
    [sym__sexp] = STATE(59),
    [sym__special_override_symbols] = STATE(59),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(59),
    [sym_list] = STATE(59),
    [sym_sequence] = STATE(59),
    [sym_table] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(59),
    [sym_multi_symbol] = STATE(59),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(295),
    [sym_boolean] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(295),
    [sym_symbol] = ACTIONS(69),
  },
  [25] = {
    [sym__sexp] = STATE(62),
    [sym__special_override_symbols] = STATE(62),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(62),
    [sym_list] = STATE(62),
    [sym_sequence] = STATE(62),
    [sym_table] = STATE(62),
    [sym__literal] = STATE(62),
    [sym__colon_string] = STATE(55),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(62),
    [sym_multi_symbol] = STATE(62),
    [anon_sym_POUND] = ACTIONS(228),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_TILDE_EQ] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(297),
    [sym_boolean] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(297),
    [sym_symbol] = ACTIONS(31),
  },
  [26] = {
    [sym__sexp] = STATE(31),
    [sym__special_override_symbols] = STATE(31),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(31),
    [sym_list] = STATE(31),
    [sym_sequence] = STATE(31),
    [sym_table] = STATE(31),
    [sym__literal] = STATE(31),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(31),
    [sym_multi_symbol] = STATE(31),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(299),
    [sym_boolean] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(299),
    [sym_symbol] = ACTIONS(69),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(305), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(303), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(301), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [34] = 4,
    ACTIONS(311), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(309), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(307), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [68] = 4,
    ACTIONS(318), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(320), 2,
      sym_number,
      sym_symbol,
    ACTIONS(316), 10,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      aux_sym__colon_string_token1,
    ACTIONS(314), 12,
      sym__whitespace,
      sym_comment,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [102] = 4,
    ACTIONS(326), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(324), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(322), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [136] = 2,
    ACTIONS(331), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(329), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [165] = 2,
    ACTIONS(335), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(333), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [194] = 2,
    ACTIONS(339), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(337), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [223] = 2,
    ACTIONS(343), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(341), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [252] = 2,
    ACTIONS(347), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(345), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [281] = 2,
    ACTIONS(351), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(349), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [310] = 2,
    ACTIONS(355), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(353), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [339] = 2,
    ACTIONS(320), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(314), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [368] = 2,
    ACTIONS(359), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(357), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [397] = 3,
    ACTIONS(314), 5,
      sym__whitespace,
      sym_comment,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(363), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(361), 13,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [428] = 2,
    ACTIONS(367), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(365), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [457] = 2,
    ACTIONS(371), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(369), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [486] = 2,
    ACTIONS(375), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(373), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [515] = 2,
    ACTIONS(379), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(377), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [544] = 2,
    ACTIONS(383), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(381), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [573] = 2,
    ACTIONS(387), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(385), 18,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [602] = 4,
    ACTIONS(389), 2,
      sym__whitespace,
      sym_comment,
    STATE(47), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
    ACTIONS(394), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(392), 13,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [634] = 4,
    ACTIONS(396), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(324), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(322), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [666] = 4,
    ACTIONS(401), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(320), 2,
      sym_number,
      sym_symbol,
    ACTIONS(314), 10,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(399), 10,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      aux_sym__colon_string_token1,
  [698] = 4,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(309), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(307), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [730] = 5,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(406), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(309), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(307), 15,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [764] = 4,
    STATE(24), 1,
      sym__gap,
    ACTIONS(408), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(412), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(410), 14,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [796] = 4,
    ACTIONS(414), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(303), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(301), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [828] = 2,
    ACTIONS(418), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(416), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [855] = 2,
    ACTIONS(339), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(337), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [882] = 2,
    ACTIONS(422), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(420), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [909] = 2,
    ACTIONS(426), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(424), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [936] = 2,
    ACTIONS(320), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(314), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [963] = 2,
    ACTIONS(430), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(428), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [990] = 2,
    ACTIONS(375), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(373), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1017] = 3,
    ACTIONS(314), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
    ACTIONS(363), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(361), 13,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1046] = 2,
    ACTIONS(331), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(329), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1073] = 2,
    ACTIONS(351), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(349), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1100] = 2,
    ACTIONS(387), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(385), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1127] = 2,
    ACTIONS(355), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(353), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1154] = 2,
    ACTIONS(335), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(333), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1181] = 2,
    ACTIONS(371), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(369), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1208] = 2,
    ACTIONS(379), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(377), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1235] = 2,
    ACTIONS(383), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(381), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1262] = 2,
    ACTIONS(367), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(365), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1289] = 2,
    ACTIONS(434), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(432), 16,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1316] = 2,
    ACTIONS(359), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(357), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1343] = 3,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(309), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(307), 15,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1372] = 2,
    ACTIONS(343), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(341), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1399] = 2,
    ACTIONS(347), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(345), 16,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1426] = 4,
    ACTIONS(438), 1,
      anon_sym_DQUOTE,
    ACTIONS(440), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(443), 1,
      sym_escape_sequence,
    STATE(76), 1,
      aux_sym__double_quote_string_repeat1,
  [1439] = 4,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    ACTIONS(448), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(450), 1,
      sym_escape_sequence,
    STATE(76), 1,
      aux_sym__double_quote_string_repeat1,
  [1452] = 4,
    ACTIONS(448), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(450), 1,
      sym_escape_sequence,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym__double_quote_string_repeat1,
  [1465] = 4,
    ACTIONS(448), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(450), 1,
      sym_escape_sequence,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym__double_quote_string_repeat1,
  [1478] = 4,
    ACTIONS(448), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(450), 1,
      sym_escape_sequence,
    ACTIONS(456), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym__double_quote_string_repeat1,
  [1491] = 1,
    ACTIONS(458), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1497] = 1,
    ACTIONS(458), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1503] = 1,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
  [1507] = 1,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
  [1511] = 1,
    ACTIONS(464), 1,
      sym_symbol,
  [1515] = 1,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
  [1519] = 1,
    ACTIONS(468), 1,
      sym_symbol,
  [1523] = 1,
    ACTIONS(470), 1,
      sym_symbol,
  [1527] = 1,
    ACTIONS(472), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 34,
  [SMALL_STATE(29)] = 68,
  [SMALL_STATE(30)] = 102,
  [SMALL_STATE(31)] = 136,
  [SMALL_STATE(32)] = 165,
  [SMALL_STATE(33)] = 194,
  [SMALL_STATE(34)] = 223,
  [SMALL_STATE(35)] = 252,
  [SMALL_STATE(36)] = 281,
  [SMALL_STATE(37)] = 310,
  [SMALL_STATE(38)] = 339,
  [SMALL_STATE(39)] = 368,
  [SMALL_STATE(40)] = 397,
  [SMALL_STATE(41)] = 428,
  [SMALL_STATE(42)] = 457,
  [SMALL_STATE(43)] = 486,
  [SMALL_STATE(44)] = 515,
  [SMALL_STATE(45)] = 544,
  [SMALL_STATE(46)] = 573,
  [SMALL_STATE(47)] = 602,
  [SMALL_STATE(48)] = 634,
  [SMALL_STATE(49)] = 666,
  [SMALL_STATE(50)] = 698,
  [SMALL_STATE(51)] = 730,
  [SMALL_STATE(52)] = 764,
  [SMALL_STATE(53)] = 796,
  [SMALL_STATE(54)] = 828,
  [SMALL_STATE(55)] = 855,
  [SMALL_STATE(56)] = 882,
  [SMALL_STATE(57)] = 909,
  [SMALL_STATE(58)] = 936,
  [SMALL_STATE(59)] = 963,
  [SMALL_STATE(60)] = 990,
  [SMALL_STATE(61)] = 1017,
  [SMALL_STATE(62)] = 1046,
  [SMALL_STATE(63)] = 1073,
  [SMALL_STATE(64)] = 1100,
  [SMALL_STATE(65)] = 1127,
  [SMALL_STATE(66)] = 1154,
  [SMALL_STATE(67)] = 1181,
  [SMALL_STATE(68)] = 1208,
  [SMALL_STATE(69)] = 1235,
  [SMALL_STATE(70)] = 1262,
  [SMALL_STATE(71)] = 1289,
  [SMALL_STATE(72)] = 1316,
  [SMALL_STATE(73)] = 1343,
  [SMALL_STATE(74)] = 1372,
  [SMALL_STATE(75)] = 1399,
  [SMALL_STATE(76)] = 1426,
  [SMALL_STATE(77)] = 1439,
  [SMALL_STATE(78)] = 1452,
  [SMALL_STATE(79)] = 1465,
  [SMALL_STATE(80)] = 1478,
  [SMALL_STATE(81)] = 1491,
  [SMALL_STATE(82)] = 1497,
  [SMALL_STATE(83)] = 1503,
  [SMALL_STATE(84)] = 1507,
  [SMALL_STATE(85)] = 1511,
  [SMALL_STATE(86)] = 1515,
  [SMALL_STATE(87)] = 1519,
  [SMALL_STATE(88)] = 1523,
  [SMALL_STATE(89)] = 1527,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(7),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(40),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(38),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(29),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(38),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(36),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(26),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(3),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(12),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(52),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(79),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 12), SHIFT_REPEAT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(79),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(13),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(40),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(38),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(29),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(38),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(36),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(26),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(3),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(12),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(6),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(71),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(79),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 2, .production_id = 12), SHIFT_REPEAT(28),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(63),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 8),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 8),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(89),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 15),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 15),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 15), SHIFT_REPEAT(89),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 2, .production_id = 9),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 2, .production_id = 9),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 14),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 14),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reader_macro_char, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reader_macro_char, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 10),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 10),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .production_id = 11),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .production_id = 11),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 11),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 11),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 13),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 13),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2), SHIFT_REPEAT(47),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 15), SHIFT_REPEAT(85),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(85),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_pair, 1, .production_id = 7),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_pair, 1, .production_id = 7),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 6),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 6),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 16),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 16),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 17),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 17),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_pair, 3, .production_id = 18),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_pair, 3, .production_id = 18),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1, .production_id = 6),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sequence_repeat1, 1, .production_id = 6),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(81),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(82),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [462] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fennel(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
