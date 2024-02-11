#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 14

enum {
  sym_shebang = 1,
  sym__whitespace = 2,
  sym_comment = 3,
  anon_sym_POUND = 4,
  anon_sym_QMARK_DOT = 5,
  anon_sym_COLON = 6,
  anon_sym_DOLLAR_DOT_DOT_DOT = 7,
  anon_sym_DOT_DOT_DOT = 8,
  anon_sym_DOT_DOT = 9,
  anon_sym_DOT = 10,
  anon_sym_SQUOTE = 11,
  anon_sym_BQUOTE = 12,
  anon_sym_COMMA = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  sym_nil = 20,
  sym_boolean = 21,
  aux_sym__colon_string_token1 = 22,
  anon_sym_DQUOTE = 23,
  aux_sym__double_quote_string_token1 = 24,
  sym_escape_sequence = 25,
  sym_number = 26,
  sym_symbol = 27,
  sym_program = 28,
  sym__gap = 29,
  sym__sexp = 30,
  sym__special_override_symbols = 31,
  sym__reader_macro_char = 32,
  sym_reader_macro = 33,
  sym__list_content = 34,
  sym_list = 35,
  sym_sequence = 36,
  sym_table_pair = 37,
  sym_table = 38,
  sym__literal = 39,
  sym__colon_string = 40,
  sym__double_quote_string = 41,
  sym_string = 42,
  sym_multi_symbol = 43,
  sym_multi_symbol_method = 44,
  aux_sym_program_repeat1 = 45,
  aux_sym_table_repeat1 = 46,
  aux_sym__double_quote_string_repeat1 = 47,
  aux_sym_multi_symbol_repeat1 = 48,
  alias_sym_symbol_fragment = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_shebang] = "shebang",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [anon_sym_QMARK_DOT] = "symbol",
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
  field_method = 6,
  field_open = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_close] = "close",
  [field_expression] = "expression",
  [field_key] = "key",
  [field_macro] = "macro",
  [field_method] = "method",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 8, .length = 2},
  [11] = {.index = 10, .length = 2},
  [12] = {.index = 10, .length = 2},
  [13] = {.index = 12, .length = 2},
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
    {field_expression, 1},
    {field_macro, 0},
  [8] =
    {field_close, 2},
    {field_open, 0},
  [10] =
    {field_base, 0},
    {field_method, 2},
  [12] =
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
  [6] = {
    [0] = alias_sym_symbol_fragment,
  },
  [9] = {
    [1] = aux_sym__colon_string_token1,
  },
  [10] = {
    [1] = alias_sym_symbol_fragment,
  },
  [11] = {
    [0] = alias_sym_symbol_fragment,
    [2] = alias_sym_symbol_fragment,
  },
  [12] = {
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
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 4,
  [16] = 16,
  [17] = 17,
  [18] = 10,
  [19] = 19,
  [20] = 12,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 23,
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
  [47] = 28,
  [48] = 29,
  [49] = 49,
  [50] = 30,
  [51] = 27,
  [52] = 52,
  [53] = 35,
  [54] = 54,
  [55] = 37,
  [56] = 46,
  [57] = 57,
  [58] = 45,
  [59] = 44,
  [60] = 31,
  [61] = 42,
  [62] = 43,
  [63] = 41,
  [64] = 40,
  [65] = 32,
  [66] = 39,
  [67] = 38,
  [68] = 36,
  [69] = 69,
  [70] = 33,
  [71] = 34,
  [72] = 29,
  [73] = 30,
  [74] = 74,
  [75] = 27,
  [76] = 28,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 74,
  [81] = 81,
  [82] = 82,
  [83] = 37,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 85,
  [90] = 90,
  [91] = 86,
  [92] = 86,
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
  return (c < '['
    ? (c < '\''
      ? (c < '"'
        ? c == 0
        : c <= '"')
      : (c <= ')' || (c < '@'
        ? c == ','
        : c <= '@')))
    : (c <= '[' || (c < '{'
      ? (c < '`'
        ? c == ']'
        : c <= '`')
      : (c <= '{' || (c >= '}' && c <= '~')))));
}

static inline bool aux_sym__colon_string_token1_character_set_2(int32_t c) {
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

static inline bool aux_sym__colon_string_token1_character_set_3(int32_t c) {
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
  return (c < '@'
    ? (c < '\''
      ? (c < '"'
        ? c == 0
        : c <= '#')
      : (c <= ')' || (c < ':'
        ? c == ','
        : c <= ':')))
    : (c <= '@' || (c < '`'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
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
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 18:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(114);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(129);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(114);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(129);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '~') ADVANCE(85);
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
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(96);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(23);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(38);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(39);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_nil);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_boolean);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(68);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == ':') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(32);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(36);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(66);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(96);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(87);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (!aux_sym__colon_string_token1_character_set_3(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(103);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(103);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(5);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '0') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(31);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(120);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(57);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(121);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(123);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(55);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(124);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(118);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(118);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(129);
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
  [48] = {.lex_state = 20},
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
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
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
    [sym_program] = STATE(88),
    [sym__gap] = STATE(16),
    [sym__sexp] = STATE(16),
    [sym__special_override_symbols] = STATE(16),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(16),
    [sym_list] = STATE(16),
    [sym_sequence] = STATE(16),
    [sym_table] = STATE(16),
    [sym__literal] = STATE(16),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(16),
    [sym_multi_symbol] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_shebang] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
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
    [sym__gap] = STATE(2),
    [sym__sexp] = STATE(84),
    [sym__special_override_symbols] = STATE(84),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(84),
    [sym_list] = STATE(84),
    [sym_sequence] = STATE(84),
    [sym_table_pair] = STATE(2),
    [sym_table] = STATE(84),
    [sym__literal] = STATE(84),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(84),
    [sym_multi_symbol] = STATE(84),
    [aux_sym_table_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(33),
    [sym_comment] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(36),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(42),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_BQUOTE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(63),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym_number] = ACTIONS(65),
    [sym_symbol] = ACTIONS(71),
  },
  [3] = {
    [sym__gap] = STATE(2),
    [sym__sexp] = STATE(84),
    [sym__special_override_symbols] = STATE(84),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(84),
    [sym_list] = STATE(84),
    [sym_sequence] = STATE(84),
    [sym_table_pair] = STATE(2),
    [sym_table] = STATE(84),
    [sym__literal] = STATE(84),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(84),
    [sym_multi_symbol] = STATE(84),
    [aux_sym_table_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(74),
    [sym_comment] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(82),
    [sym_nil] = ACTIONS(84),
    [sym_boolean] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(84),
    [sym_symbol] = ACTIONS(86),
  },
  [4] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(4),
    [sym__special_override_symbols] = STATE(4),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(4),
    [sym_list] = STATE(4),
    [sym_sequence] = STATE(4),
    [sym_table] = STATE(4),
    [sym__literal] = STATE(4),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(4),
    [sym_multi_symbol] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(88),
    [sym_comment] = ACTIONS(88),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_QMARK_DOT] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(94),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(94),
    [anon_sym_DOT_DOT] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_BQUOTE] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(117),
    [sym_nil] = ACTIONS(120),
    [sym_boolean] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_number] = ACTIONS(120),
    [sym_symbol] = ACTIONS(126),
  },
  [5] = {
    [sym__gap] = STATE(2),
    [sym__sexp] = STATE(84),
    [sym__special_override_symbols] = STATE(84),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(84),
    [sym_list] = STATE(84),
    [sym_sequence] = STATE(84),
    [sym_table_pair] = STATE(2),
    [sym_table] = STATE(84),
    [sym__literal] = STATE(84),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(84),
    [sym_multi_symbol] = STATE(84),
    [aux_sym_table_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(74),
    [sym_comment] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(129),
    [sym_nil] = ACTIONS(84),
    [sym_boolean] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(84),
    [sym_symbol] = ACTIONS(86),
  },
  [6] = {
    [sym__gap] = STATE(3),
    [sym__sexp] = STATE(84),
    [sym__special_override_symbols] = STATE(84),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(84),
    [sym_list] = STATE(84),
    [sym_sequence] = STATE(84),
    [sym_table_pair] = STATE(3),
    [sym_table] = STATE(84),
    [sym__literal] = STATE(84),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(84),
    [sym_multi_symbol] = STATE(84),
    [aux_sym_table_repeat1] = STATE(3),
    [sym__whitespace] = ACTIONS(131),
    [sym_comment] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym_nil] = ACTIONS(84),
    [sym_boolean] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(84),
    [sym_symbol] = ACTIONS(86),
  },
  [7] = {
    [sym__gap] = STATE(22),
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(21),
    [sym__list_content] = STATE(85),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(52),
    [sym_multi_symbol_method] = STATE(21),
    [sym__whitespace] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(155),
    [sym_boolean] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(155),
    [sym_symbol] = ACTIONS(159),
  },
  [8] = {
    [sym__gap] = STATE(22),
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(21),
    [sym__list_content] = STATE(89),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(52),
    [sym_multi_symbol_method] = STATE(21),
    [sym__whitespace] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(155),
    [sym_boolean] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(155),
    [sym_symbol] = ACTIONS(159),
  },
  [9] = {
    [sym__gap] = STATE(5),
    [sym__sexp] = STATE(84),
    [sym__special_override_symbols] = STATE(84),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(84),
    [sym_list] = STATE(84),
    [sym_sequence] = STATE(84),
    [sym_table_pair] = STATE(5),
    [sym_table] = STATE(84),
    [sym__literal] = STATE(84),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(84),
    [sym_multi_symbol] = STATE(84),
    [aux_sym_table_repeat1] = STATE(5),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym_nil] = ACTIONS(84),
    [sym_boolean] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(84),
    [sym_symbol] = ACTIONS(86),
  },
  [10] = {
    [sym__gap] = STATE(20),
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_program_repeat1] = STATE(20),
    [sym__whitespace] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(171),
    [sym_boolean] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(171),
    [sym_symbol] = ACTIONS(173),
  },
  [11] = {
    [sym__gap] = STATE(17),
    [sym__sexp] = STATE(17),
    [sym__special_override_symbols] = STATE(17),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(17),
    [sym_list] = STATE(17),
    [sym_sequence] = STATE(17),
    [sym_table] = STATE(17),
    [sym__literal] = STATE(17),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(17),
    [sym_multi_symbol] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym__whitespace] = ACTIONS(177),
    [sym_comment] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
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
    [sym_nil] = ACTIONS(181),
    [sym_boolean] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(181),
    [sym_symbol] = ACTIONS(31),
  },
  [12] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(4),
    [sym__special_override_symbols] = STATE(4),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(4),
    [sym_list] = STATE(4),
    [sym_sequence] = STATE(4),
    [sym_table] = STATE(4),
    [sym__literal] = STATE(4),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(4),
    [sym_multi_symbol] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(187),
    [sym_symbol] = ACTIONS(173),
  },
  [13] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(4),
    [sym__special_override_symbols] = STATE(4),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(4),
    [sym_list] = STATE(4),
    [sym_sequence] = STATE(4),
    [sym_table] = STATE(4),
    [sym__literal] = STATE(4),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(4),
    [sym_multi_symbol] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(187),
    [sym_symbol] = ACTIONS(173),
  },
  [14] = {
    [sym__gap] = STATE(19),
    [sym__sexp] = STATE(19),
    [sym__special_override_symbols] = STATE(19),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(19),
    [sym_list] = STATE(19),
    [sym_sequence] = STATE(19),
    [sym_table] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(19),
    [sym_multi_symbol] = STATE(19),
    [aux_sym_program_repeat1] = STATE(19),
    [sym__whitespace] = ACTIONS(191),
    [sym_comment] = ACTIONS(191),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(193),
    [sym_boolean] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(193),
    [sym_symbol] = ACTIONS(173),
  },
  [15] = {
    [sym__gap] = STATE(15),
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym__whitespace] = ACTIONS(195),
    [sym_comment] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(198),
    [anon_sym_QMARK_DOT] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(204),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(201),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [anon_sym_BQUOTE] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(222),
    [sym_nil] = ACTIONS(225),
    [sym_boolean] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [sym_number] = ACTIONS(225),
    [sym_symbol] = ACTIONS(231),
  },
  [16] = {
    [sym__gap] = STATE(15),
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym__whitespace] = ACTIONS(234),
    [sym_comment] = ACTIONS(234),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
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
    [sym_nil] = ACTIONS(236),
    [sym_boolean] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(236),
    [sym_symbol] = ACTIONS(31),
  },
  [17] = {
    [sym__gap] = STATE(15),
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym__whitespace] = ACTIONS(234),
    [sym_comment] = ACTIONS(234),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
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
    [sym_nil] = ACTIONS(236),
    [sym_boolean] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(236),
    [sym_symbol] = ACTIONS(31),
  },
  [18] = {
    [sym__gap] = STATE(12),
    [sym__sexp] = STATE(12),
    [sym__special_override_symbols] = STATE(12),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(12),
    [sym_list] = STATE(12),
    [sym_sequence] = STATE(12),
    [sym_table] = STATE(12),
    [sym__literal] = STATE(12),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(12),
    [sym_multi_symbol] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [sym__whitespace] = ACTIONS(240),
    [sym_comment] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(244),
    [sym_boolean] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(244),
    [sym_symbol] = ACTIONS(173),
  },
  [19] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(4),
    [sym__special_override_symbols] = STATE(4),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(4),
    [sym_list] = STATE(4),
    [sym_sequence] = STATE(4),
    [sym_table] = STATE(4),
    [sym__literal] = STATE(4),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(4),
    [sym_multi_symbol] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(187),
    [sym_symbol] = ACTIONS(173),
  },
  [20] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(4),
    [sym__special_override_symbols] = STATE(4),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(4),
    [sym_list] = STATE(4),
    [sym_sequence] = STATE(4),
    [sym_table] = STATE(4),
    [sym__literal] = STATE(4),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(4),
    [sym_multi_symbol] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(183),
    [sym_comment] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(187),
    [sym_boolean] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(187),
    [sym_symbol] = ACTIONS(173),
  },
  [21] = {
    [sym__gap] = STATE(13),
    [sym__sexp] = STATE(13),
    [sym__special_override_symbols] = STATE(13),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(13),
    [sym_list] = STATE(13),
    [sym_sequence] = STATE(13),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [sym__whitespace] = ACTIONS(250),
    [sym_comment] = ACTIONS(250),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(254),
    [sym_boolean] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(254),
    [sym_symbol] = ACTIONS(173),
  },
  [22] = {
    [sym__sexp] = STATE(14),
    [sym__special_override_symbols] = STATE(14),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(14),
    [sym_list] = STATE(14),
    [sym_sequence] = STATE(14),
    [sym_table] = STATE(14),
    [sym__literal] = STATE(14),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(14),
    [sym_multi_symbol] = STATE(52),
    [sym_multi_symbol_method] = STATE(14),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(256),
    [sym_boolean] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(256),
    [sym_symbol] = ACTIONS(159),
  },
  [23] = {
    [sym__sexp] = STATE(65),
    [sym__special_override_symbols] = STATE(65),
    [sym__reader_macro_char] = STATE(23),
    [sym_reader_macro] = STATE(65),
    [sym_list] = STATE(65),
    [sym_sequence] = STATE(65),
    [sym_table] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(65),
    [sym_multi_symbol] = STATE(65),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
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
    [sym_nil] = ACTIONS(258),
    [sym_boolean] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(258),
    [sym_symbol] = ACTIONS(31),
  },
  [24] = {
    [sym__sexp] = STATE(65),
    [sym__special_override_symbols] = STATE(65),
    [sym__reader_macro_char] = STATE(24),
    [sym_reader_macro] = STATE(65),
    [sym_list] = STATE(65),
    [sym_sequence] = STATE(65),
    [sym_table] = STATE(65),
    [sym__literal] = STATE(65),
    [sym__colon_string] = STATE(64),
    [sym__double_quote_string] = STATE(66),
    [sym_string] = STATE(65),
    [sym_multi_symbol] = STATE(65),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [anon_sym_BQUOTE] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [sym_nil] = ACTIONS(258),
    [sym_boolean] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(258),
    [sym_symbol] = ACTIONS(86),
  },
  [25] = {
    [sym__sexp] = STATE(54),
    [sym__special_override_symbols] = STATE(54),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(54),
    [sym_list] = STATE(54),
    [sym_sequence] = STATE(54),
    [sym_table] = STATE(54),
    [sym__literal] = STATE(54),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(54),
    [sym_multi_symbol] = STATE(54),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(260),
    [sym_boolean] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(260),
    [sym_symbol] = ACTIONS(173),
  },
  [26] = {
    [sym__sexp] = STATE(32),
    [sym__special_override_symbols] = STATE(32),
    [sym__reader_macro_char] = STATE(26),
    [sym_reader_macro] = STATE(32),
    [sym_list] = STATE(32),
    [sym_sequence] = STATE(32),
    [sym_table] = STATE(32),
    [sym__literal] = STATE(32),
    [sym__colon_string] = STATE(40),
    [sym__double_quote_string] = STATE(39),
    [sym_string] = STATE(32),
    [sym_multi_symbol] = STATE(32),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_BQUOTE] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(153),
    [sym_nil] = ACTIONS(262),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_number] = ACTIONS(262),
    [sym_symbol] = ACTIONS(173),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(268), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(266), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(264), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [33] = 4,
    ACTIONS(275), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(273), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(271), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [66] = 3,
    ACTIONS(281), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(279), 8,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      aux_sym__colon_string_token1,
    ACTIONS(277), 12,
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
  [97] = 4,
    ACTIONS(287), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(285), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(283), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [130] = 2,
    ACTIONS(292), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(290), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [158] = 2,
    ACTIONS(296), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(294), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [186] = 2,
    ACTIONS(300), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(298), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [214] = 2,
    ACTIONS(304), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(302), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [242] = 2,
    ACTIONS(308), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(306), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [270] = 2,
    ACTIONS(312), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(310), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [298] = 2,
    ACTIONS(316), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(314), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [326] = 2,
    ACTIONS(320), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(318), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [354] = 2,
    ACTIONS(324), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(322), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [382] = 2,
    ACTIONS(328), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(326), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [410] = 2,
    ACTIONS(332), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(330), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [438] = 2,
    ACTIONS(336), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(334), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [466] = 2,
    ACTIONS(340), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(338), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [494] = 3,
    ACTIONS(277), 5,
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
    ACTIONS(342), 12,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [524] = 2,
    ACTIONS(281), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(277), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [552] = 2,
    ACTIONS(348), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(346), 17,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [580] = 4,
    ACTIONS(350), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(273), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(271), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [611] = 3,
    ACTIONS(281), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(352), 8,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      aux_sym__colon_string_token1,
    ACTIONS(277), 10,
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
  [640] = 5,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(354), 1,
      anon_sym_COLON,
    STATE(28), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(266), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(264), 14,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [673] = 4,
    ACTIONS(356), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(285), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(283), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [704] = 4,
    ACTIONS(359), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(266), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(264), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [735] = 3,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(266), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(264), 14,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [763] = 2,
    ACTIONS(308), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(306), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [789] = 2,
    ACTIONS(366), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(364), 15,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [815] = 2,
    ACTIONS(316), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(314), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [841] = 2,
    ACTIONS(348), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(346), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [867] = 2,
    ACTIONS(370), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(368), 15,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [893] = 2,
    ACTIONS(281), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(277), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [919] = 3,
    ACTIONS(277), 3,
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
    ACTIONS(342), 12,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [947] = 2,
    ACTIONS(292), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(290), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [973] = 2,
    ACTIONS(336), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(334), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [999] = 2,
    ACTIONS(340), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(338), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [1025] = 2,
    ACTIONS(332), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(330), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [1051] = 2,
    ACTIONS(328), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(326), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [1077] = 2,
    ACTIONS(296), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(294), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [1103] = 2,
    ACTIONS(324), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(322), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [1129] = 2,
    ACTIONS(320), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(318), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [1155] = 2,
    ACTIONS(312), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(310), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
    ACTIONS(374), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(372), 15,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [1207] = 2,
    ACTIONS(300), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(298), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [1233] = 2,
    ACTIONS(304), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(302), 15,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
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
  [1259] = 2,
    ACTIONS(277), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(352), 8,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      aux_sym__colon_string_token1,
  [1274] = 3,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(283), 2,
      sym__whitespace,
      sym_comment,
  [1285] = 4,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(383), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym__double_quote_string_repeat1,
  [1298] = 3,
    ACTIONS(385), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(264), 2,
      sym__whitespace,
      sym_comment,
  [1309] = 3,
    ACTIONS(385), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(271), 2,
      sym__whitespace,
      sym_comment,
  [1320] = 4,
    ACTIONS(381), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(383), 1,
      sym_escape_sequence,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym__double_quote_string_repeat1,
  [1333] = 4,
    ACTIONS(381), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(383), 1,
      sym_escape_sequence,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      aux_sym__double_quote_string_repeat1,
  [1346] = 4,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(396), 1,
      sym_escape_sequence,
    STATE(79), 1,
      aux_sym__double_quote_string_repeat1,
  [1359] = 4,
    ACTIONS(381), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(383), 1,
      sym_escape_sequence,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym__double_quote_string_repeat1,
  [1372] = 1,
    ACTIONS(401), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1378] = 1,
    ACTIONS(401), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1384] = 1,
    ACTIONS(314), 3,
      sym__whitespace,
      sym_comment,
      anon_sym_DOT,
  [1390] = 2,
    STATE(25), 1,
      sym__gap,
    ACTIONS(403), 2,
      sym__whitespace,
      sym_comment,
  [1398] = 1,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [1402] = 1,
    ACTIONS(407), 1,
      sym_symbol,
  [1406] = 1,
    ACTIONS(409), 1,
      sym_symbol,
  [1410] = 1,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
  [1414] = 1,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [1418] = 1,
    ACTIONS(415), 1,
      sym_symbol,
  [1422] = 1,
    ACTIONS(417), 1,
      sym_symbol,
  [1426] = 1,
    ACTIONS(419), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 33,
  [SMALL_STATE(29)] = 66,
  [SMALL_STATE(30)] = 97,
  [SMALL_STATE(31)] = 130,
  [SMALL_STATE(32)] = 158,
  [SMALL_STATE(33)] = 186,
  [SMALL_STATE(34)] = 214,
  [SMALL_STATE(35)] = 242,
  [SMALL_STATE(36)] = 270,
  [SMALL_STATE(37)] = 298,
  [SMALL_STATE(38)] = 326,
  [SMALL_STATE(39)] = 354,
  [SMALL_STATE(40)] = 382,
  [SMALL_STATE(41)] = 410,
  [SMALL_STATE(42)] = 438,
  [SMALL_STATE(43)] = 466,
  [SMALL_STATE(44)] = 494,
  [SMALL_STATE(45)] = 524,
  [SMALL_STATE(46)] = 552,
  [SMALL_STATE(47)] = 580,
  [SMALL_STATE(48)] = 611,
  [SMALL_STATE(49)] = 640,
  [SMALL_STATE(50)] = 673,
  [SMALL_STATE(51)] = 704,
  [SMALL_STATE(52)] = 735,
  [SMALL_STATE(53)] = 763,
  [SMALL_STATE(54)] = 789,
  [SMALL_STATE(55)] = 815,
  [SMALL_STATE(56)] = 841,
  [SMALL_STATE(57)] = 867,
  [SMALL_STATE(58)] = 893,
  [SMALL_STATE(59)] = 919,
  [SMALL_STATE(60)] = 947,
  [SMALL_STATE(61)] = 973,
  [SMALL_STATE(62)] = 999,
  [SMALL_STATE(63)] = 1025,
  [SMALL_STATE(64)] = 1051,
  [SMALL_STATE(65)] = 1077,
  [SMALL_STATE(66)] = 1103,
  [SMALL_STATE(67)] = 1129,
  [SMALL_STATE(68)] = 1155,
  [SMALL_STATE(69)] = 1181,
  [SMALL_STATE(70)] = 1207,
  [SMALL_STATE(71)] = 1233,
  [SMALL_STATE(72)] = 1259,
  [SMALL_STATE(73)] = 1274,
  [SMALL_STATE(74)] = 1285,
  [SMALL_STATE(75)] = 1298,
  [SMALL_STATE(76)] = 1309,
  [SMALL_STATE(77)] = 1320,
  [SMALL_STATE(78)] = 1333,
  [SMALL_STATE(79)] = 1346,
  [SMALL_STATE(80)] = 1359,
  [SMALL_STATE(81)] = 1372,
  [SMALL_STATE(82)] = 1378,
  [SMALL_STATE(83)] = 1384,
  [SMALL_STATE(84)] = 1390,
  [SMALL_STATE(85)] = 1398,
  [SMALL_STATE(86)] = 1402,
  [SMALL_STATE(87)] = 1406,
  [SMALL_STATE(88)] = 1410,
  [SMALL_STATE(89)] = 1414,
  [SMALL_STATE(90)] = 1418,
  [SMALL_STATE(91)] = 1422,
  [SMALL_STATE(92)] = 1426,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(44),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(58),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(72),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(58),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(62),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(24),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(18),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(84),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(77),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(75),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(91),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 6),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 2, .production_id = 6),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2), SHIFT_REPEAT(91),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 8),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 8),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 2, .production_id = 7),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 2, .production_id = 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .production_id = 5),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 10),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 10),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 8),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 8),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .production_id = 8),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .production_id = 8),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reader_macro_char, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reader_macro_char, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 9),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 9),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2), SHIFT_REPEAT(86),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(86),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_pair, 3, .production_id = 13),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_pair, 3, .production_id = 13),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 11),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 11),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 12),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 12),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2), SHIFT_REPEAT(92),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(82),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(81),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [411] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
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
