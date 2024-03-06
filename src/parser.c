#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 24

enum {
  sym_symbol = 1,
  sym_shebang = 2,
  sym__whitespace = 3,
  sym_comment = 4,
  anon_sym_POUND = 5,
  anon_sym_QMARK_DOT = 6,
  anon_sym_TILDE_EQ = 7,
  anon_sym_COLON = 8,
  anon_sym_DOLLAR_DOT_DOT_DOT = 9,
  anon_sym_DOT_DOT_DOT = 10,
  anon_sym_DOT_DOT = 11,
  anon_sym_DOT = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_BQUOTE = 14,
  anon_sym_COMMA = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  sym_nil = 22,
  sym_boolean = 23,
  aux_sym__colon_string_token1 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym__double_quote_string_token1 = 26,
  sym_escape_sequence = 27,
  sym_number = 28,
  sym_program = 29,
  sym__sexp = 30,
  sym__special_override_symbols = 31,
  sym__reader_macro_char = 32,
  sym_reader_macro = 33,
  sym__list_content = 34,
  sym_list = 35,
  sym_sequence = 36,
  sym__table_pair = 37,
  sym_table = 38,
  sym__literal = 39,
  sym__colon_string = 40,
  sym__double_quote_string = 41,
  sym_string = 42,
  sym_multi_symbol = 43,
  sym_multi_symbol_method = 44,
  aux_sym_program_repeat1 = 45,
  aux_sym__list_content_repeat1 = 46,
  aux_sym_table_repeat1 = 47,
  aux_sym__double_quote_string_repeat1 = 48,
  aux_sym_multi_symbol_repeat1 = 49,
  alias_sym_symbol_fragment = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
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
  [sym_program] = "program",
  [sym__sexp] = "_sexp",
  [sym__special_override_symbols] = "_special_override_symbols",
  [sym__reader_macro_char] = "_reader_macro_char",
  [sym_reader_macro] = "reader_macro",
  [sym__list_content] = "_list_content",
  [sym_list] = "list",
  [sym_sequence] = "sequence",
  [sym__table_pair] = "_table_pair",
  [sym_table] = "table",
  [sym__literal] = "_literal",
  [sym__colon_string] = "_colon_string",
  [sym__double_quote_string] = "_double_quote_string",
  [sym_string] = "string",
  [sym_multi_symbol] = "multi_symbol",
  [sym_multi_symbol_method] = "multi_symbol_method",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__list_content_repeat1] = "_list_content_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym__double_quote_string_repeat1] = "_double_quote_string_repeat1",
  [aux_sym_multi_symbol_repeat1] = "multi_symbol_repeat1",
  [alias_sym_symbol_fragment] = "symbol_fragment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_symbol] = sym_symbol,
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
  [sym_program] = sym_program,
  [sym__sexp] = sym__sexp,
  [sym__special_override_symbols] = sym__special_override_symbols,
  [sym__reader_macro_char] = sym__reader_macro_char,
  [sym_reader_macro] = sym_reader_macro,
  [sym__list_content] = sym__list_content,
  [sym_list] = sym_list,
  [sym_sequence] = sym_sequence,
  [sym__table_pair] = sym__table_pair,
  [sym_table] = sym_table,
  [sym__literal] = sym__literal,
  [sym__colon_string] = sym__colon_string,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym_string] = sym_string,
  [sym_multi_symbol] = sym_multi_symbol,
  [sym_multi_symbol_method] = sym_multi_symbol_method,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__list_content_repeat1] = aux_sym__list_content_repeat1,
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
  [sym_symbol] = {
    .visible = true,
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
  [sym_program] = {
    .visible = true,
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
  [sym__table_pair] = {
    .visible = false,
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
  field_call = 2,
  field_close = 3,
  field_content = 4,
  field_expression = 5,
  field_item = 6,
  field_key = 7,
  field_macro = 8,
  field_member = 9,
  field_method = 10,
  field_open = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base] = "base",
  [field_call] = "call",
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
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 4},
  [14] = {.index = 24, .length = 3},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 4},
  [18] = {.index = 35, .length = 4},
  [19] = {.index = 39, .length = 3},
  [20] = {.index = 42, .length = 1},
  [21] = {.index = 43, .length = 2},
  [22] = {.index = 45, .length = 2},
  [23] = {.index = 45, .length = 2},
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
    {field_call, 0},
  [10] =
    {field_item, 0},
  [11] =
    {field_key, 0},
  [12] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [14] =
    {field_base, 0},
    {field_member, 1, .inherited = true},
  [16] =
    {field_expression, 1},
    {field_macro, 0},
  [18] =
    {field_call, 0},
    {field_item, 1, .inherited = true},
  [20] =
    {field_call, 1, .inherited = true},
    {field_close, 2},
    {field_item, 1, .inherited = true},
    {field_open, 0},
  [24] =
    {field_close, 2},
    {field_item, 1, .inherited = true},
    {field_open, 0},
  [27] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [29] =
    {field_key, 0},
    {field_value, 1},
  [31] =
    {field_close, 2},
    {field_key, 1, .inherited = true},
    {field_open, 0},
    {field_value, 1, .inherited = true},
  [35] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [39] =
    {field_close, 2},
    {field_content, 1},
    {field_open, 0},
  [42] =
    {field_member, 1},
  [43] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [45] =
    {field_base, 0},
    {field_method, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_symbol,
  },
  [10] = {
    [0] = alias_sym_symbol_fragment,
  },
  [19] = {
    [1] = aux_sym__colon_string_token1,
  },
  [20] = {
    [1] = alias_sym_symbol_fragment,
  },
  [22] = {
    [0] = alias_sym_symbol_fragment,
    [2] = alias_sym_symbol_fragment,
  },
  [23] = {
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
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
  [44] = 24,
  [45] = 26,
  [46] = 25,
  [47] = 47,
  [48] = 23,
  [49] = 49,
  [50] = 50,
  [51] = 39,
  [52] = 42,
  [53] = 53,
  [54] = 54,
  [55] = 41,
  [56] = 32,
  [57] = 38,
  [58] = 28,
  [59] = 37,
  [60] = 36,
  [61] = 35,
  [62] = 34,
  [63] = 27,
  [64] = 33,
  [65] = 29,
  [66] = 40,
  [67] = 30,
  [68] = 68,
  [69] = 31,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 70,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 77,
  [82] = 82,
  [83] = 80,
};

static inline bool aux_sym__colon_string_token1_character_set_1(int32_t c) {
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
    ? (c < ','
      ? (c < '"'
        ? c == 0
        : (c <= '#' || (c >= '\'' && c <= ')')))
      : (c <= ',' || (c < ':'
        ? c == '.'
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

static inline bool sym_symbol_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(53);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(106);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
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
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(100);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(106);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(100);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(83);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(83);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(21);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(39);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
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
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == ':') ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(37);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(59);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(94);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(3);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '0') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(31);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(106);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 18, .external_lex_state = 1},
  [2] = {.lex_state = 19, .external_lex_state = 1},
  [3] = {.lex_state = 19, .external_lex_state = 1},
  [4] = {.lex_state = 19, .external_lex_state = 1},
  [5] = {.lex_state = 19, .external_lex_state = 1},
  [6] = {.lex_state = 19, .external_lex_state = 1},
  [7] = {.lex_state = 19, .external_lex_state = 1},
  [8] = {.lex_state = 19, .external_lex_state = 1},
  [9] = {.lex_state = 19, .external_lex_state = 1},
  [10] = {.lex_state = 19, .external_lex_state = 1},
  [11] = {.lex_state = 19, .external_lex_state = 1},
  [12] = {.lex_state = 19, .external_lex_state = 1},
  [13] = {.lex_state = 19, .external_lex_state = 1},
  [14] = {.lex_state = 19, .external_lex_state = 1},
  [15] = {.lex_state = 19, .external_lex_state = 1},
  [16] = {.lex_state = 19, .external_lex_state = 1},
  [17] = {.lex_state = 19, .external_lex_state = 1},
  [18] = {.lex_state = 19, .external_lex_state = 1},
  [19] = {.lex_state = 19, .external_lex_state = 1},
  [20] = {.lex_state = 19, .external_lex_state = 1},
  [21] = {.lex_state = 19, .external_lex_state = 1},
  [22] = {.lex_state = 19, .external_lex_state = 1},
  [23] = {.lex_state = 19, .external_lex_state = 1},
  [24] = {.lex_state = 19, .external_lex_state = 1},
  [25] = {.lex_state = 19, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 19, .external_lex_state = 1},
  [28] = {.lex_state = 19, .external_lex_state = 1},
  [29] = {.lex_state = 19, .external_lex_state = 1},
  [30] = {.lex_state = 19, .external_lex_state = 1},
  [31] = {.lex_state = 19, .external_lex_state = 1},
  [32] = {.lex_state = 19, .external_lex_state = 1},
  [33] = {.lex_state = 19, .external_lex_state = 1},
  [34] = {.lex_state = 19, .external_lex_state = 1},
  [35] = {.lex_state = 19, .external_lex_state = 1},
  [36] = {.lex_state = 19, .external_lex_state = 1},
  [37] = {.lex_state = 19, .external_lex_state = 1},
  [38] = {.lex_state = 19, .external_lex_state = 1},
  [39] = {.lex_state = 19, .external_lex_state = 1},
  [40] = {.lex_state = 19, .external_lex_state = 1},
  [41] = {.lex_state = 19, .external_lex_state = 1},
  [42] = {.lex_state = 19, .external_lex_state = 1},
  [43] = {.lex_state = 19, .external_lex_state = 1},
  [44] = {.lex_state = 19, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 19, .external_lex_state = 1},
  [47] = {.lex_state = 19, .external_lex_state = 1},
  [48] = {.lex_state = 19, .external_lex_state = 1},
  [49] = {.lex_state = 19, .external_lex_state = 1},
  [50] = {.lex_state = 19, .external_lex_state = 1},
  [51] = {.lex_state = 19, .external_lex_state = 1},
  [52] = {.lex_state = 19, .external_lex_state = 1},
  [53] = {.lex_state = 19, .external_lex_state = 1},
  [54] = {.lex_state = 19, .external_lex_state = 1},
  [55] = {.lex_state = 19, .external_lex_state = 1},
  [56] = {.lex_state = 19, .external_lex_state = 1},
  [57] = {.lex_state = 19, .external_lex_state = 1},
  [58] = {.lex_state = 19, .external_lex_state = 1},
  [59] = {.lex_state = 19, .external_lex_state = 1},
  [60] = {.lex_state = 19, .external_lex_state = 1},
  [61] = {.lex_state = 19, .external_lex_state = 1},
  [62] = {.lex_state = 19, .external_lex_state = 1},
  [63] = {.lex_state = 19, .external_lex_state = 1},
  [64] = {.lex_state = 19, .external_lex_state = 1},
  [65] = {.lex_state = 19, .external_lex_state = 1},
  [66] = {.lex_state = 19, .external_lex_state = 1},
  [67] = {.lex_state = 19, .external_lex_state = 1},
  [68] = {.lex_state = 19, .external_lex_state = 1},
  [69] = {.lex_state = 19, .external_lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
};

enum {
  ts_external_token_POUND = 0,
  ts_external_token_SQUOTE = 1,
  ts_external_token_BQUOTE = 2,
  ts_external_token_COMMA = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_POUND] = anon_sym_POUND,
  [ts_external_token_SQUOTE] = anon_sym_SQUOTE,
  [ts_external_token_BQUOTE] = anon_sym_BQUOTE,
  [ts_external_token_COMMA] = anon_sym_COMMA,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_POUND] = true,
    [ts_external_token_SQUOTE] = true,
    [ts_external_token_BQUOTE] = true,
    [ts_external_token_COMMA] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
  },
  [1] = {
    [sym_program] = STATE(79),
    [sym__sexp] = STATE(16),
    [sym__special_override_symbols] = STATE(16),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(16),
    [sym_list] = STATE(16),
    [sym_sequence] = STATE(16),
    [sym_table] = STATE(16),
    [sym__literal] = STATE(16),
    [sym__colon_string] = STATE(61),
    [sym__double_quote_string] = STATE(62),
    [sym_string] = STATE(16),
    [sym_multi_symbol] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_symbol] = ACTIONS(7),
    [sym_shebang] = ACTIONS(9),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(29),
    [sym_boolean] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(29),
  },
  [2] = {
    [sym__sexp] = STATE(19),
    [sym__special_override_symbols] = STATE(19),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(19),
    [sym__list_content] = STATE(81),
    [sym_list] = STATE(19),
    [sym_sequence] = STATE(19),
    [sym_table] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(19),
    [sym_multi_symbol] = STATE(68),
    [sym_multi_symbol_method] = STATE(19),
    [sym_symbol] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
  },
  [3] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(49),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym_nil] = ACTIONS(63),
    [sym_boolean] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(63),
  },
  [4] = {
    [sym__sexp] = STATE(19),
    [sym__special_override_symbols] = STATE(19),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(19),
    [sym__list_content] = STATE(77),
    [sym_list] = STATE(19),
    [sym_sequence] = STATE(19),
    [sym_table] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(19),
    [sym_multi_symbol] = STATE(68),
    [sym_multi_symbol_method] = STATE(19),
    [sym_symbol] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(55),
    [sym_boolean] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(55),
  },
  [5] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(49),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(8),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RBRACE] = ACTIONS(67),
    [sym_nil] = ACTIONS(63),
    [sym_boolean] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(63),
  },
  [6] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(49),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(69),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(72),
    [anon_sym_QMARK_DOT] = ACTIONS(75),
    [anon_sym_TILDE_EQ] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(75),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(75),
    [anon_sym_DOT_DOT] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym_nil] = ACTIONS(101),
    [sym_boolean] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym_number] = ACTIONS(101),
  },
  [7] = {
    [sym__sexp] = STATE(47),
    [sym__special_override_symbols] = STATE(47),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(47),
    [sym_list] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_table] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(47),
    [sym_multi_symbol] = STATE(47),
    [aux_sym__list_content_repeat1] = STATE(7),
    [sym_symbol] = ACTIONS(107),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(110),
    [anon_sym_QMARK_DOT] = ACTIONS(113),
    [anon_sym_TILDE_EQ] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(113),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(113),
    [anon_sym_DOT_DOT] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(136),
    [sym_nil] = ACTIONS(139),
    [sym_boolean] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [sym_number] = ACTIONS(139),
  },
  [8] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(49),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RBRACE] = ACTIONS(145),
    [sym_nil] = ACTIONS(63),
    [sym_boolean] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(63),
  },
  [9] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(49),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(6),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RBRACE] = ACTIONS(147),
    [sym_nil] = ACTIONS(63),
    [sym_boolean] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(63),
  },
  [10] = {
    [sym__sexp] = STATE(47),
    [sym__special_override_symbols] = STATE(47),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(47),
    [sym_list] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_table] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(47),
    [sym_multi_symbol] = STATE(47),
    [aux_sym__list_content_repeat1] = STATE(7),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(151),
    [sym_boolean] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(151),
  },
  [11] = {
    [sym__sexp] = STATE(47),
    [sym__special_override_symbols] = STATE(47),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(47),
    [sym_list] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_table] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(47),
    [sym_multi_symbol] = STATE(47),
    [aux_sym__list_content_repeat1] = STATE(7),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(151),
    [sym_boolean] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(151),
  },
  [12] = {
    [sym__sexp] = STATE(47),
    [sym__special_override_symbols] = STATE(47),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(47),
    [sym_list] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_table] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(47),
    [sym_multi_symbol] = STATE(47),
    [aux_sym__list_content_repeat1] = STATE(11),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(151),
    [sym_boolean] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(151),
  },
  [13] = {
    [sym__sexp] = STATE(47),
    [sym__special_override_symbols] = STATE(47),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(47),
    [sym_list] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_table] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(47),
    [sym_multi_symbol] = STATE(47),
    [aux_sym__list_content_repeat1] = STATE(10),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(151),
    [sym_boolean] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(151),
  },
  [14] = {
    [sym__sexp] = STATE(47),
    [sym__special_override_symbols] = STATE(47),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(47),
    [sym_list] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_table] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(47),
    [sym_multi_symbol] = STATE(47),
    [aux_sym__list_content_repeat1] = STATE(7),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(151),
    [sym_boolean] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(151),
  },
  [15] = {
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(61),
    [sym__double_quote_string] = STATE(62),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_symbol] = ACTIONS(163),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(166),
    [anon_sym_QMARK_DOT] = ACTIONS(169),
    [anon_sym_TILDE_EQ] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(169),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(169),
    [anon_sym_DOT_DOT] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(190),
    [sym_nil] = ACTIONS(193),
    [sym_boolean] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [sym_number] = ACTIONS(193),
  },
  [16] = {
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(61),
    [sym__double_quote_string] = STATE(62),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(201),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(203),
    [sym_boolean] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(203),
  },
  [17] = {
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(61),
    [sym__double_quote_string] = STATE(62),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(201),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(203),
    [sym_boolean] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(203),
  },
  [18] = {
    [sym__sexp] = STATE(17),
    [sym__special_override_symbols] = STATE(17),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(17),
    [sym_list] = STATE(17),
    [sym_sequence] = STATE(17),
    [sym_table] = STATE(17),
    [sym__literal] = STATE(17),
    [sym__colon_string] = STATE(61),
    [sym__double_quote_string] = STATE(62),
    [sym_string] = STATE(17),
    [sym_multi_symbol] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(201),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(207),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(207),
  },
  [19] = {
    [sym__sexp] = STATE(47),
    [sym__special_override_symbols] = STATE(47),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(47),
    [sym_list] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_table] = STATE(47),
    [sym__literal] = STATE(47),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(47),
    [sym_multi_symbol] = STATE(47),
    [aux_sym__list_content_repeat1] = STATE(14),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_nil] = ACTIONS(151),
    [sym_boolean] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(151),
  },
  [20] = {
    [sym__sexp] = STATE(50),
    [sym__special_override_symbols] = STATE(50),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(50),
    [sym_list] = STATE(50),
    [sym_sequence] = STATE(50),
    [sym_table] = STATE(50),
    [sym__literal] = STATE(50),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(50),
    [sym_multi_symbol] = STATE(50),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_RBRACE] = ACTIONS(211),
    [sym_nil] = ACTIONS(213),
    [sym_boolean] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(213),
  },
  [21] = {
    [sym__sexp] = STATE(58),
    [sym__special_override_symbols] = STATE(58),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(58),
    [sym_list] = STATE(58),
    [sym_sequence] = STATE(58),
    [sym_table] = STATE(58),
    [sym__literal] = STATE(58),
    [sym__colon_string] = STATE(61),
    [sym__double_quote_string] = STATE(62),
    [sym_string] = STATE(58),
    [sym_multi_symbol] = STATE(58),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(201),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_nil] = ACTIONS(215),
    [sym_boolean] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(215),
  },
  [22] = {
    [sym__sexp] = STATE(28),
    [sym__special_override_symbols] = STATE(28),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(28),
    [sym_list] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_table] = STATE(28),
    [sym__literal] = STATE(28),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(28),
    [sym_multi_symbol] = STATE(28),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [sym_nil] = ACTIONS(217),
    [sym_boolean] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [sym_number] = ACTIONS(217),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(223), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(219), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(221), 16,
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
  [36] = 5,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(225), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(227), 16,
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
  [72] = 5,
    ACTIONS(236), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(234), 16,
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
  [108] = 4,
    ACTIONS(243), 1,
      aux_sym__colon_string_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(239), 11,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(241), 11,
      anon_sym_TILDE_EQ,
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
  [142] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(245), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(247), 16,
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
  [173] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(249), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(251), 16,
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
  [204] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(253), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(255), 16,
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
  [235] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(257), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(259), 16,
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
  [266] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(263), 16,
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
  [297] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(265), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(267), 16,
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
  [328] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(269), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(271), 16,
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
  [359] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(273), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(275), 16,
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
  [390] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(277), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(279), 16,
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
  [421] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(281), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(283), 16,
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
  [452] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(285), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(287), 16,
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
  [483] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(289), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(291), 16,
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
  [514] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(239), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(241), 16,
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
  [545] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(293), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(295), 16,
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
  [576] = 4,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(241), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(297), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(299), 13,
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
  [609] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(301), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(303), 16,
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
  [640] = 6,
    ACTIONS(236), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_COLON,
    STATE(23), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(234), 13,
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
  [676] = 5,
    ACTIONS(307), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(225), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(227), 14,
      ts_builtin_sym_end,
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
  [710] = 4,
    ACTIONS(310), 1,
      aux_sym__colon_string_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(241), 9,
      ts_builtin_sym_end,
      anon_sym_TILDE_EQ,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(239), 11,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
  [742] = 5,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(234), 14,
      ts_builtin_sym_end,
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
  [776] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(315), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(317), 15,
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
      anon_sym_DQUOTE,
  [806] = 5,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(219), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(221), 14,
      ts_builtin_sym_end,
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
  [840] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(323), 14,
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
  [869] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(325), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(327), 14,
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
  [898] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(239), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(241), 14,
      ts_builtin_sym_end,
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
  [927] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(301), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(303), 14,
      ts_builtin_sym_end,
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
  [956] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(329), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(331), 14,
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
  [985] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(333), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(335), 14,
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
  [1014] = 4,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(297), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(299), 13,
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
  [1045] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(265), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(267), 14,
      ts_builtin_sym_end,
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
  [1074] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(289), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(291), 14,
      ts_builtin_sym_end,
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
  [1103] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(249), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(251), 14,
      ts_builtin_sym_end,
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
  [1132] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(285), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(287), 14,
      ts_builtin_sym_end,
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
  [1161] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(281), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(283), 14,
      ts_builtin_sym_end,
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
  [1190] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(277), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(279), 14,
      ts_builtin_sym_end,
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
  [1219] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(273), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(275), 14,
      ts_builtin_sym_end,
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
  [1248] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(245), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(247), 14,
      ts_builtin_sym_end,
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
  [1277] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(269), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(271), 14,
      ts_builtin_sym_end,
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
  [1306] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(253), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(255), 14,
      ts_builtin_sym_end,
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
  [1335] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(293), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(295), 14,
      ts_builtin_sym_end,
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
  [1364] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(257), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(259), 14,
      ts_builtin_sym_end,
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
  [1393] = 4,
    ACTIONS(337), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(232), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(234), 13,
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
  [1424] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(261), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(263), 14,
      ts_builtin_sym_end,
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
  [1453] = 5,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(345), 1,
      sym_escape_sequence,
    STATE(73), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(339), 2,
      sym__whitespace,
      sym_comment,
  [1470] = 5,
    ACTIONS(343), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(345), 1,
      sym_escape_sequence,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(339), 2,
      sym__whitespace,
      sym_comment,
  [1487] = 5,
    ACTIONS(343), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(345), 1,
      sym_escape_sequence,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(339), 2,
      sym__whitespace,
      sym_comment,
  [1504] = 5,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(356), 1,
      sym_escape_sequence,
    STATE(73), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(339), 2,
      sym__whitespace,
      sym_comment,
  [1521] = 5,
    ACTIONS(343), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(345), 1,
      sym_escape_sequence,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(339), 2,
      sym__whitespace,
      sym_comment,
  [1538] = 3,
    ACTIONS(363), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(339), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1550] = 3,
    ACTIONS(363), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(339), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1562] = 2,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1570] = 2,
    ACTIONS(367), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1578] = 2,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1586] = 2,
    ACTIONS(371), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1594] = 2,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1602] = 2,
    ACTIONS(375), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1610] = 2,
    ACTIONS(377), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 36,
  [SMALL_STATE(25)] = 72,
  [SMALL_STATE(26)] = 108,
  [SMALL_STATE(27)] = 142,
  [SMALL_STATE(28)] = 173,
  [SMALL_STATE(29)] = 204,
  [SMALL_STATE(30)] = 235,
  [SMALL_STATE(31)] = 266,
  [SMALL_STATE(32)] = 297,
  [SMALL_STATE(33)] = 328,
  [SMALL_STATE(34)] = 359,
  [SMALL_STATE(35)] = 390,
  [SMALL_STATE(36)] = 421,
  [SMALL_STATE(37)] = 452,
  [SMALL_STATE(38)] = 483,
  [SMALL_STATE(39)] = 514,
  [SMALL_STATE(40)] = 545,
  [SMALL_STATE(41)] = 576,
  [SMALL_STATE(42)] = 609,
  [SMALL_STATE(43)] = 640,
  [SMALL_STATE(44)] = 676,
  [SMALL_STATE(45)] = 710,
  [SMALL_STATE(46)] = 742,
  [SMALL_STATE(47)] = 776,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 840,
  [SMALL_STATE(50)] = 869,
  [SMALL_STATE(51)] = 898,
  [SMALL_STATE(52)] = 927,
  [SMALL_STATE(53)] = 956,
  [SMALL_STATE(54)] = 985,
  [SMALL_STATE(55)] = 1014,
  [SMALL_STATE(56)] = 1045,
  [SMALL_STATE(57)] = 1074,
  [SMALL_STATE(58)] = 1103,
  [SMALL_STATE(59)] = 1132,
  [SMALL_STATE(60)] = 1161,
  [SMALL_STATE(61)] = 1190,
  [SMALL_STATE(62)] = 1219,
  [SMALL_STATE(63)] = 1248,
  [SMALL_STATE(64)] = 1277,
  [SMALL_STATE(65)] = 1306,
  [SMALL_STATE(66)] = 1335,
  [SMALL_STATE(67)] = 1364,
  [SMALL_STATE(68)] = 1393,
  [SMALL_STATE(69)] = 1424,
  [SMALL_STATE(70)] = 1453,
  [SMALL_STATE(71)] = 1470,
  [SMALL_STATE(72)] = 1487,
  [SMALL_STATE(73)] = 1504,
  [SMALL_STATE(74)] = 1521,
  [SMALL_STATE(75)] = 1538,
  [SMALL_STATE(76)] = 1550,
  [SMALL_STATE(77)] = 1562,
  [SMALL_STATE(78)] = 1570,
  [SMALL_STATE(79)] = 1578,
  [SMALL_STATE(80)] = 1586,
  [SMALL_STATE(81)] = 1594,
  [SMALL_STATE(82)] = 1602,
  [SMALL_STATE(83)] = 1610,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(25),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(41),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(39),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(26),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(39),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(37),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(22),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(12),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(20),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(72),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(41),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(39),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(26),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(39),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(37),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(22),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(12),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(3),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(47),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(72),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 12),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 1, .production_id = 8),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 10),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 10),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21), SHIFT_REPEAT(83),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(83),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = 2, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = 2, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 2, .production_id = 11),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 2, .production_id = 11),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 13),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 13),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .dynamic_precedence = 1, .production_id = 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .dynamic_precedence = 1, .production_id = 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 14),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 14),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 17),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 17),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 19),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 19),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reader_macro_char, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reader_macro_char, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 20),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 20),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21), SHIFT_REPEAT(80),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(80),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 23),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 23),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(75),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(76),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [369] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fennel_external_scanner_create(void);
void tree_sitter_fennel_external_scanner_destroy(void *);
bool tree_sitter_fennel_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fennel_external_scanner_serialize(void *, char *);
void tree_sitter_fennel_external_scanner_deserialize(void *, const char *, unsigned);

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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_symbol,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fennel_external_scanner_create,
      tree_sitter_fennel_external_scanner_destroy,
      tree_sitter_fennel_external_scanner_scan,
      tree_sitter_fennel_external_scanner_serialize,
      tree_sitter_fennel_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
