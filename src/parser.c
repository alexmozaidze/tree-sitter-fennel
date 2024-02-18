#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 16

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
  aux_sym_table_repeat1 = 47,
  aux_sym__double_quote_string_repeat1 = 48,
  aux_sym_multi_symbol_repeat1 = 49,
  alias_sym_symbol_fragment = 50,
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
  field_expression = 3,
  field_key = 4,
  field_macro = 5,
  field_member = 6,
  field_method = 7,
  field_open = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_close] = "close",
  [field_expression] = "expression",
  [field_key] = "key",
  [field_macro] = "macro",
  [field_member] = "member",
  [field_method] = "method",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_open, 0, .inherited = true},
  [1] =
    {field_close, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [3] =
    {field_open, 0},
  [4] =
    {field_close, 1},
    {field_open, 0},
  [6] =
    {field_key, 0},
  [7] =
    {field_base, 0},
    {field_member, 1, .inherited = true},
  [9] =
    {field_expression, 1},
    {field_macro, 0},
  [11] =
    {field_close, 2},
    {field_open, 0},
  [13] =
    {field_member, 1},
  [14] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [16] =
    {field_base, 0},
    {field_method, 2},
  [18] =
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
  [7] = {
    [0] = alias_sym_symbol_fragment,
  },
  [10] = {
    [1] = aux_sym__colon_string_token1,
  },
  [11] = {
    [1] = alias_sym_symbol_fragment,
  },
  [13] = {
    [0] = alias_sym_symbol_fragment,
    [2] = alias_sym_symbol_fragment,
  },
  [14] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 4,
  [7] = 3,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 8,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 10,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
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
  [47] = 26,
  [48] = 28,
  [49] = 49,
  [50] = 27,
  [51] = 29,
  [52] = 45,
  [53] = 37,
  [54] = 54,
  [55] = 55,
  [56] = 34,
  [57] = 39,
  [58] = 44,
  [59] = 35,
  [60] = 40,
  [61] = 43,
  [62] = 31,
  [63] = 30,
  [64] = 32,
  [65] = 36,
  [66] = 33,
  [67] = 67,
  [68] = 41,
  [69] = 69,
  [70] = 42,
  [71] = 38,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 72,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 79,
  [84] = 84,
  [85] = 81,
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
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
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
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 19},
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
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 17},
  [85] = {.lex_state = 17},
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
    [sym_program] = STATE(80),
    [sym__gap] = STATE(17),
    [sym__sexp] = STATE(17),
    [sym__special_override_symbols] = STATE(17),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(17),
    [sym_list] = STATE(17),
    [sym_sequence] = STATE(17),
    [sym_table] = STATE(17),
    [sym__literal] = STATE(17),
    [sym__colon_string] = STATE(70),
    [sym__double_quote_string] = STATE(68),
    [sym_string] = STATE(17),
    [sym_multi_symbol] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
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
    [sym__gap] = STATE(3),
    [sym__sexp] = STATE(49),
    [sym__special_override_symbols] = STATE(49),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(49),
    [sym_list] = STATE(49),
    [sym_sequence] = STATE(49),
    [sym_table_pair] = STATE(3),
    [sym_table] = STATE(49),
    [sym__literal] = STATE(49),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(49),
    [sym_multi_symbol] = STATE(49),
    [aux_sym_table_repeat1] = STATE(3),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(55),
    [sym_boolean] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
    [sym_symbol] = ACTIONS(59),
  },
  [3] = {
    [sym__gap] = STATE(9),
    [sym__sexp] = STATE(49),
    [sym__special_override_symbols] = STATE(49),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(49),
    [sym_list] = STATE(49),
    [sym_sequence] = STATE(49),
    [sym_table_pair] = STATE(9),
    [sym_table] = STATE(49),
    [sym__literal] = STATE(49),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(49),
    [sym_multi_symbol] = STATE(49),
    [aux_sym_table_repeat1] = STATE(9),
    [sym__whitespace] = ACTIONS(61),
    [sym_comment] = ACTIONS(61),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(63),
    [sym_nil] = ACTIONS(55),
    [sym_boolean] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
    [sym_symbol] = ACTIONS(59),
  },
  [4] = {
    [sym__gap] = STATE(22),
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(21),
    [sym__list_content] = STATE(79),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(69),
    [sym_multi_symbol_method] = STATE(21),
    [sym__whitespace] = ACTIONS(65),
    [sym_comment] = ACTIONS(65),
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
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(69),
    [sym_boolean] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(69),
    [sym_symbol] = ACTIONS(71),
  },
  [5] = {
    [sym__gap] = STATE(7),
    [sym__sexp] = STATE(49),
    [sym__special_override_symbols] = STATE(49),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(49),
    [sym_list] = STATE(49),
    [sym_sequence] = STATE(49),
    [sym_table_pair] = STATE(7),
    [sym_table] = STATE(49),
    [sym__literal] = STATE(49),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(49),
    [sym_multi_symbol] = STATE(49),
    [aux_sym_table_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(73),
    [sym_comment] = ACTIONS(73),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(75),
    [sym_nil] = ACTIONS(55),
    [sym_boolean] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
    [sym_symbol] = ACTIONS(59),
  },
  [6] = {
    [sym__gap] = STATE(22),
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(21),
    [sym__list_content] = STATE(83),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(69),
    [sym_multi_symbol_method] = STATE(21),
    [sym__whitespace] = ACTIONS(65),
    [sym_comment] = ACTIONS(65),
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
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(69),
    [sym_boolean] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(69),
    [sym_symbol] = ACTIONS(71),
  },
  [7] = {
    [sym__gap] = STATE(9),
    [sym__sexp] = STATE(49),
    [sym__special_override_symbols] = STATE(49),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(49),
    [sym_list] = STATE(49),
    [sym_sequence] = STATE(49),
    [sym_table_pair] = STATE(9),
    [sym_table] = STATE(49),
    [sym__literal] = STATE(49),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(49),
    [sym_multi_symbol] = STATE(49),
    [aux_sym_table_repeat1] = STATE(9),
    [sym__whitespace] = ACTIONS(61),
    [sym_comment] = ACTIONS(61),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym_nil] = ACTIONS(55),
    [sym_boolean] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
    [sym_symbol] = ACTIONS(59),
  },
  [8] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(8),
    [sym__special_override_symbols] = STATE(8),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(8),
    [sym_list] = STATE(8),
    [sym_sequence] = STATE(8),
    [sym_table] = STATE(8),
    [sym__literal] = STATE(8),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(8),
    [sym_multi_symbol] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(81),
    [sym_comment] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_QMARK_DOT] = ACTIONS(87),
    [anon_sym_TILDE_EQ] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(90),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(87),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(87),
    [anon_sym_DOT_DOT] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(110),
    [sym_nil] = ACTIONS(113),
    [sym_boolean] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym_number] = ACTIONS(113),
    [sym_symbol] = ACTIONS(119),
  },
  [9] = {
    [sym__gap] = STATE(9),
    [sym__sexp] = STATE(49),
    [sym__special_override_symbols] = STATE(49),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(49),
    [sym_list] = STATE(49),
    [sym_sequence] = STATE(49),
    [sym_table_pair] = STATE(9),
    [sym_table] = STATE(49),
    [sym__literal] = STATE(49),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(49),
    [sym_multi_symbol] = STATE(49),
    [aux_sym_table_repeat1] = STATE(9),
    [sym__whitespace] = ACTIONS(122),
    [sym_comment] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_QMARK_DOT] = ACTIONS(128),
    [anon_sym_TILDE_EQ] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(128),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(128),
    [anon_sym_DOT_DOT] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(152),
    [sym_nil] = ACTIONS(154),
    [sym_boolean] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(154),
    [sym_symbol] = ACTIONS(160),
  },
  [10] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(8),
    [sym__special_override_symbols] = STATE(8),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(8),
    [sym_list] = STATE(8),
    [sym_sequence] = STATE(8),
    [sym_table] = STATE(8),
    [sym__literal] = STATE(8),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(8),
    [sym_multi_symbol] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(59),
  },
  [11] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(8),
    [sym__special_override_symbols] = STATE(8),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(8),
    [sym_list] = STATE(8),
    [sym_sequence] = STATE(8),
    [sym_table] = STATE(8),
    [sym__literal] = STATE(8),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(8),
    [sym_multi_symbol] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
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
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(59),
  },
  [12] = {
    [sym__gap] = STATE(10),
    [sym__sexp] = STATE(10),
    [sym__special_override_symbols] = STATE(10),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(10),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [sym__whitespace] = ACTIONS(171),
    [sym_comment] = ACTIONS(171),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(175),
    [sym_boolean] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(175),
    [sym_symbol] = ACTIONS(59),
  },
  [13] = {
    [sym__gap] = STATE(19),
    [sym__sexp] = STATE(19),
    [sym__special_override_symbols] = STATE(19),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(19),
    [sym_list] = STATE(19),
    [sym_sequence] = STATE(19),
    [sym_table] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(19),
    [sym_multi_symbol] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [sym__whitespace] = ACTIONS(177),
    [sym_comment] = ACTIONS(177),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(181),
    [sym_boolean] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(181),
    [sym_symbol] = ACTIONS(59),
  },
  [14] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(8),
    [sym__special_override_symbols] = STATE(8),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(8),
    [sym_list] = STATE(8),
    [sym_sequence] = STATE(8),
    [sym_table] = STATE(8),
    [sym__literal] = STATE(8),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(8),
    [sym_multi_symbol] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
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
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(59),
  },
  [15] = {
    [sym__gap] = STATE(15),
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(70),
    [sym__double_quote_string] = STATE(68),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym__whitespace] = ACTIONS(185),
    [sym_comment] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(188),
    [anon_sym_QMARK_DOT] = ACTIONS(191),
    [anon_sym_TILDE_EQ] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(191),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(212),
    [sym_nil] = ACTIONS(215),
    [sym_boolean] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [sym_number] = ACTIONS(215),
    [sym_symbol] = ACTIONS(221),
  },
  [16] = {
    [sym__gap] = STATE(18),
    [sym__sexp] = STATE(18),
    [sym__special_override_symbols] = STATE(18),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(18),
    [sym_list] = STATE(18),
    [sym_sequence] = STATE(18),
    [sym_table] = STATE(18),
    [sym__literal] = STATE(18),
    [sym__colon_string] = STATE(70),
    [sym__double_quote_string] = STATE(68),
    [sym_string] = STATE(18),
    [sym_multi_symbol] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
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
  [17] = {
    [sym__gap] = STATE(15),
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(70),
    [sym__double_quote_string] = STATE(68),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym__whitespace] = ACTIONS(232),
    [sym_comment] = ACTIONS(232),
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
    [sym_nil] = ACTIONS(234),
    [sym_boolean] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(234),
    [sym_symbol] = ACTIONS(31),
  },
  [18] = {
    [sym__gap] = STATE(15),
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(70),
    [sym__double_quote_string] = STATE(68),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym__whitespace] = ACTIONS(232),
    [sym_comment] = ACTIONS(232),
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
    [sym_nil] = ACTIONS(234),
    [sym_boolean] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(234),
    [sym_symbol] = ACTIONS(31),
  },
  [19] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(8),
    [sym__special_override_symbols] = STATE(8),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(8),
    [sym_list] = STATE(8),
    [sym_sequence] = STATE(8),
    [sym_table] = STATE(8),
    [sym__literal] = STATE(8),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(8),
    [sym_multi_symbol] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(167),
    [sym_boolean] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(167),
    [sym_symbol] = ACTIONS(59),
  },
  [20] = {
    [sym__gap] = STATE(11),
    [sym__sexp] = STATE(11),
    [sym__special_override_symbols] = STATE(11),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(11),
    [sym_list] = STATE(11),
    [sym_sequence] = STATE(11),
    [sym_table] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(11),
    [sym_multi_symbol] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [sym__whitespace] = ACTIONS(240),
    [sym_comment] = ACTIONS(240),
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
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(242),
    [sym_boolean] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(242),
    [sym_symbol] = ACTIONS(59),
  },
  [21] = {
    [sym__gap] = STATE(14),
    [sym__sexp] = STATE(14),
    [sym__special_override_symbols] = STATE(14),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(14),
    [sym_list] = STATE(14),
    [sym_sequence] = STATE(14),
    [sym_table] = STATE(14),
    [sym__literal] = STATE(14),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(14),
    [sym_multi_symbol] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(248),
    [sym_boolean] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(248),
    [sym_symbol] = ACTIONS(59),
  },
  [22] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(69),
    [sym_multi_symbol_method] = STATE(20),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(250),
    [sym_boolean] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(250),
    [sym_symbol] = ACTIONS(71),
  },
  [23] = {
    [sym__sexp] = STATE(55),
    [sym__special_override_symbols] = STATE(55),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(55),
    [sym_list] = STATE(55),
    [sym_sequence] = STATE(55),
    [sym_table] = STATE(55),
    [sym__literal] = STATE(55),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(55),
    [sym_multi_symbol] = STATE(55),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(252),
    [sym_boolean] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(252),
    [sym_symbol] = ACTIONS(59),
  },
  [24] = {
    [sym__sexp] = STATE(36),
    [sym__special_override_symbols] = STATE(36),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(36),
    [sym_list] = STATE(36),
    [sym_sequence] = STATE(36),
    [sym_table] = STATE(36),
    [sym__literal] = STATE(36),
    [sym__colon_string] = STATE(42),
    [sym__double_quote_string] = STATE(41),
    [sym_string] = STATE(36),
    [sym_multi_symbol] = STATE(36),
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
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(254),
    [sym_boolean] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(254),
    [sym_symbol] = ACTIONS(59),
  },
  [25] = {
    [sym__sexp] = STATE(65),
    [sym__special_override_symbols] = STATE(65),
    [sym__reader_macro_char] = STATE(25),
    [sym_reader_macro] = STATE(65),
    [sym_list] = STATE(65),
    [sym_sequence] = STATE(65),
    [sym_table] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__colon_string] = STATE(70),
    [sym__double_quote_string] = STATE(68),
    [sym_string] = STATE(65),
    [sym_multi_symbol] = STATE(65),
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
    [sym_nil] = ACTIONS(256),
    [sym_boolean] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(256),
    [sym_symbol] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(262), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(264), 2,
      sym_number,
      sym_symbol,
    ACTIONS(260), 10,
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
    ACTIONS(258), 12,
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
  [34] = 4,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(268), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(266), 18,
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
    ACTIONS(277), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(275), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(273), 18,
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
  [102] = 4,
    ACTIONS(284), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(282), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(280), 18,
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
    ACTIONS(288), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(286), 18,
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
    ACTIONS(292), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(290), 18,
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
    ACTIONS(296), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(294), 18,
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
    ACTIONS(300), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(298), 18,
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
    ACTIONS(304), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(302), 18,
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
    ACTIONS(308), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(306), 18,
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
    ACTIONS(312), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(310), 18,
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
    ACTIONS(316), 6,
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
    ACTIONS(320), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(318), 18,
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
  [397] = 2,
    ACTIONS(324), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
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
  [426] = 2,
    ACTIONS(328), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(326), 18,
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
  [455] = 2,
    ACTIONS(332), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(330), 18,
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
  [484] = 2,
    ACTIONS(336), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(334), 18,
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
  [513] = 2,
    ACTIONS(340), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(338), 18,
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
  [542] = 2,
    ACTIONS(264), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(258), 18,
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
  [571] = 3,
    ACTIONS(258), 5,
      sym__whitespace,
      sym_comment,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(344), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(342), 13,
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
  [602] = 5,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_COLON,
    STATE(29), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(275), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(273), 15,
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
  [636] = 4,
    ACTIONS(350), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(264), 2,
      sym_number,
      sym_symbol,
    ACTIONS(258), 10,
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
    ACTIONS(348), 10,
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
  [668] = 4,
    ACTIONS(352), 1,
      anon_sym_DOT,
    STATE(51), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(275), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(273), 16,
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
  [700] = 4,
    STATE(23), 1,
      sym__gap,
    ACTIONS(355), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(359), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(357), 14,
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
  [732] = 4,
    ACTIONS(361), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(268), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(266), 16,
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
  [764] = 4,
    ACTIONS(364), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(282), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(280), 16,
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
  [796] = 3,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
    ACTIONS(344), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(342), 13,
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
  [825] = 2,
    ACTIONS(316), 6,
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
  [852] = 2,
    ACTIONS(368), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(366), 16,
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
  [879] = 2,
    ACTIONS(372), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(370), 16,
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
  [906] = 2,
    ACTIONS(304), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(302), 16,
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
  [933] = 2,
    ACTIONS(324), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
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
  [960] = 2,
    ACTIONS(264), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(258), 16,
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
  [987] = 2,
    ACTIONS(308), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(306), 16,
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
  [1014] = 2,
    ACTIONS(328), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(326), 16,
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
  [1041] = 2,
    ACTIONS(340), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(338), 16,
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
  [1068] = 2,
    ACTIONS(292), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(290), 16,
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
  [1095] = 2,
    ACTIONS(288), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(286), 16,
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
  [1122] = 2,
    ACTIONS(296), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(294), 16,
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
  [1149] = 2,
    ACTIONS(312), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(310), 16,
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
  [1176] = 2,
    ACTIONS(300), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(298), 16,
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
  [1203] = 2,
    ACTIONS(376), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(374), 16,
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
  [1230] = 2,
    ACTIONS(332), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(330), 16,
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
  [1257] = 3,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(275), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(273), 15,
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
  [1286] = 2,
    ACTIONS(336), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(334), 16,
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
  [1313] = 2,
    ACTIONS(320), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(318), 16,
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
  [1340] = 4,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(384), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym__double_quote_string_repeat1,
  [1353] = 4,
    ACTIONS(382), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(384), 1,
      sym_escape_sequence,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__double_quote_string_repeat1,
  [1366] = 4,
    ACTIONS(382), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(384), 1,
      sym_escape_sequence,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym__double_quote_string_repeat1,
  [1379] = 4,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(395), 1,
      sym_escape_sequence,
    STATE(75), 1,
      aux_sym__double_quote_string_repeat1,
  [1392] = 4,
    ACTIONS(382), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(384), 1,
      sym_escape_sequence,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym__double_quote_string_repeat1,
  [1405] = 1,
    ACTIONS(400), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1411] = 1,
    ACTIONS(400), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1417] = 1,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
  [1421] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [1425] = 1,
    ACTIONS(406), 1,
      sym_symbol,
  [1429] = 1,
    ACTIONS(408), 1,
      sym_symbol,
  [1433] = 1,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
  [1437] = 1,
    ACTIONS(412), 1,
      sym_symbol,
  [1441] = 1,
    ACTIONS(414), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 34,
  [SMALL_STATE(28)] = 68,
  [SMALL_STATE(29)] = 102,
  [SMALL_STATE(30)] = 136,
  [SMALL_STATE(31)] = 165,
  [SMALL_STATE(32)] = 194,
  [SMALL_STATE(33)] = 223,
  [SMALL_STATE(34)] = 252,
  [SMALL_STATE(35)] = 281,
  [SMALL_STATE(36)] = 310,
  [SMALL_STATE(37)] = 339,
  [SMALL_STATE(38)] = 368,
  [SMALL_STATE(39)] = 397,
  [SMALL_STATE(40)] = 426,
  [SMALL_STATE(41)] = 455,
  [SMALL_STATE(42)] = 484,
  [SMALL_STATE(43)] = 513,
  [SMALL_STATE(44)] = 542,
  [SMALL_STATE(45)] = 571,
  [SMALL_STATE(46)] = 602,
  [SMALL_STATE(47)] = 636,
  [SMALL_STATE(48)] = 668,
  [SMALL_STATE(49)] = 700,
  [SMALL_STATE(50)] = 732,
  [SMALL_STATE(51)] = 764,
  [SMALL_STATE(52)] = 796,
  [SMALL_STATE(53)] = 825,
  [SMALL_STATE(54)] = 852,
  [SMALL_STATE(55)] = 879,
  [SMALL_STATE(56)] = 906,
  [SMALL_STATE(57)] = 933,
  [SMALL_STATE(58)] = 960,
  [SMALL_STATE(59)] = 987,
  [SMALL_STATE(60)] = 1014,
  [SMALL_STATE(61)] = 1041,
  [SMALL_STATE(62)] = 1068,
  [SMALL_STATE(63)] = 1095,
  [SMALL_STATE(64)] = 1122,
  [SMALL_STATE(65)] = 1149,
  [SMALL_STATE(66)] = 1176,
  [SMALL_STATE(67)] = 1203,
  [SMALL_STATE(68)] = 1230,
  [SMALL_STATE(69)] = 1257,
  [SMALL_STATE(70)] = 1286,
  [SMALL_STATE(71)] = 1313,
  [SMALL_STATE(72)] = 1340,
  [SMALL_STATE(73)] = 1353,
  [SMALL_STATE(74)] = 1366,
  [SMALL_STATE(75)] = 1379,
  [SMALL_STATE(76)] = 1392,
  [SMALL_STATE(77)] = 1405,
  [SMALL_STATE(78)] = 1411,
  [SMALL_STATE(79)] = 1417,
  [SMALL_STATE(80)] = 1421,
  [SMALL_STATE(81)] = 1425,
  [SMALL_STATE(82)] = 1429,
  [SMALL_STATE(83)] = 1433,
  [SMALL_STATE(84)] = 1437,
  [SMALL_STATE(85)] = 1441,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(9),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(45),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(44),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(26),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(44),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(43),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(24),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(6),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(12),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(49),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(74),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(28),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(61),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 12),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 12),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 12), SHIFT_REPEAT(85),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(85),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 7),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 7),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 9),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 9),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 11),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 11),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 10),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 10),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 9),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 9),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .production_id = 9),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .production_id = 9),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 2, .production_id = 8),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 2, .production_id = 8),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reader_macro_char, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reader_macro_char, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(81),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_pair, 1, .production_id = 6),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_pair, 1, .production_id = 6),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 12), SHIFT_REPEAT(81),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 14),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 14),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_pair, 3, .production_id = 15),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_pair, 3, .production_id = 15),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 13),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 13),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(77),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(78),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [404] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
