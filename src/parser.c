#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 1
#define TOKEN_COUNT 30
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
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  sym_nil = 19,
  sym_boolean = 20,
  aux_sym__colon_string_token1 = 21,
  anon_sym_DQUOTE = 22,
  aux_sym__double_quote_string_token1 = 23,
  sym_escape_sequence = 24,
  sym_number = 25,
  sym__hashfn = 26,
  sym__quote = 27,
  sym__quasiquote = 28,
  sym__unquote = 29,
  sym_program = 30,
  sym__sexp = 31,
  sym__special_override_symbols = 32,
  sym__reader_macro_char = 33,
  sym_reader_macro = 34,
  sym__list_content = 35,
  sym_list = 36,
  sym_sequence = 37,
  sym__table_pair = 38,
  sym_table = 39,
  sym__literal = 40,
  sym__colon_string = 41,
  sym__double_quote_string = 42,
  sym_string = 43,
  sym_multi_symbol = 44,
  sym_multi_symbol_method = 45,
  aux_sym_program_repeat1 = 46,
  aux_sym__list_content_repeat1 = 47,
  aux_sym_table_repeat1 = 48,
  aux_sym__double_quote_string_repeat1 = 49,
  aux_sym_multi_symbol_repeat1 = 50,
  alias_sym_symbol_fragment = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [sym_shebang] = "shebang",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "symbol",
  [anon_sym_QMARK_DOT] = "symbol",
  [anon_sym_TILDE_EQ] = "symbol",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT] = "symbol",
  [anon_sym_DOT] = ".",
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
  [sym__hashfn] = "_hashfn",
  [sym__quote] = "_quote",
  [sym__quasiquote] = "_quasiquote",
  [sym__unquote] = "_unquote",
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
  [anon_sym_POUND] = sym_symbol,
  [anon_sym_QMARK_DOT] = sym_symbol,
  [anon_sym_TILDE_EQ] = sym_symbol,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOLLAR_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT] = sym_symbol,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym__hashfn] = sym__hashfn,
  [sym__quote] = sym__quote,
  [sym__quasiquote] = sym__quasiquote,
  [sym__unquote] = sym__unquote,
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
    .named = true,
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
  [sym__hashfn] = {
    .visible = false,
    .named = true,
  },
  [sym__quote] = {
    .visible = false,
    .named = true,
  },
  [sym__quasiquote] = {
    .visible = false,
    .named = true,
  },
  [sym__unquote] = {
    .visible = false,
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
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 2,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 12,
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
  [43] = 23,
  [44] = 25,
  [45] = 26,
  [46] = 46,
  [47] = 24,
  [48] = 31,
  [49] = 49,
  [50] = 27,
  [51] = 37,
  [52] = 52,
  [53] = 53,
  [54] = 40,
  [55] = 34,
  [56] = 36,
  [57] = 41,
  [58] = 38,
  [59] = 33,
  [60] = 32,
  [61] = 30,
  [62] = 39,
  [63] = 63,
  [64] = 35,
  [65] = 29,
  [66] = 28,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 68,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 75,
  [80] = 80,
  [81] = 78,
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
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '$') ADVANCE(50);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(80);
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
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
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
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '}') ADVANCE(103);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(95);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(97);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(103);
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
          lookahead != '\\') ADVANCE(80);
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
          lookahead != '\\') ADVANCE(80);
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
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(39);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == ':') ADVANCE(78);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '0') ADVANCE(52);
      if (lookahead == ':') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(53);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(78);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(37);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(56);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(64);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(78);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(69);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(74);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(85);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(103);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(85);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(103);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(91);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(3);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '0') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(31);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(103);
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
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 19, .external_lex_state = 1},
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
  [44] = {.lex_state = 0, .external_lex_state = 1},
  [45] = {.lex_state = 19, .external_lex_state = 1},
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
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
};

enum {
  ts_external_token__hashfn = 0,
  ts_external_token__quote = 1,
  ts_external_token__quasiquote = 2,
  ts_external_token__unquote = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__hashfn] = sym__hashfn,
  [ts_external_token__quote] = sym__quote,
  [ts_external_token__quasiquote] = sym__quasiquote,
  [ts_external_token__unquote] = sym__unquote,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__hashfn] = true,
    [ts_external_token__quote] = true,
    [ts_external_token__quasiquote] = true,
    [ts_external_token__unquote] = true,
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
    [sym__hashfn] = ACTIONS(1),
    [sym__quote] = ACTIONS(1),
    [sym__quasiquote] = ACTIONS(1),
    [sym__unquote] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(77),
    [sym__sexp] = STATE(17),
    [sym__special_override_symbols] = STATE(17),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(17),
    [sym_list] = STATE(17),
    [sym_sequence] = STATE(17),
    [sym_table] = STATE(17),
    [sym__literal] = STATE(17),
    [sym__colon_string] = STATE(59),
    [sym__double_quote_string] = STATE(60),
    [sym_string] = STATE(17),
    [sym_multi_symbol] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
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
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(25),
    [sym_boolean] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_number] = ACTIONS(25),
    [sym__hashfn] = ACTIONS(29),
    [sym__quote] = ACTIONS(29),
    [sym__quasiquote] = ACTIONS(29),
    [sym__unquote] = ACTIONS(29),
  },
  [2] = {
    [sym__sexp] = STATE(10),
    [sym__special_override_symbols] = STATE(10),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(10),
    [sym__list_content] = STATE(79),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(67),
    [sym_multi_symbol_method] = STATE(10),
    [sym_symbol] = ACTIONS(31),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_nil] = ACTIONS(49),
    [sym_boolean] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(49),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [3] = {
    [sym__sexp] = STATE(46),
    [sym__special_override_symbols] = STATE(46),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(3),
    [sym_symbol] = ACTIONS(55),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_QMARK_DOT] = ACTIONS(58),
    [anon_sym_TILDE_EQ] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(58),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(58),
    [anon_sym_DOT_DOT] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(78),
    [sym_nil] = ACTIONS(81),
    [sym_boolean] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [sym_number] = ACTIONS(81),
    [sym__hashfn] = ACTIONS(87),
    [sym__quote] = ACTIONS(87),
    [sym__quasiquote] = ACTIONS(87),
    [sym__unquote] = ACTIONS(87),
  },
  [4] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(63),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_nil] = ACTIONS(94),
    [sym_boolean] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(94),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [5] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(63),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(96),
    [sym_nil] = ACTIONS(94),
    [sym_boolean] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(94),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [6] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(63),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(98),
    [sym_nil] = ACTIONS(94),
    [sym_boolean] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(94),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [7] = {
    [sym__sexp] = STATE(10),
    [sym__special_override_symbols] = STATE(10),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(10),
    [sym__list_content] = STATE(75),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(67),
    [sym_multi_symbol_method] = STATE(10),
    [sym_symbol] = ACTIONS(31),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_nil] = ACTIONS(49),
    [sym_boolean] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(49),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [8] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(63),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(102),
    [sym_nil] = ACTIONS(94),
    [sym_boolean] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(94),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [9] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(20),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym__table_pair] = STATE(63),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(20),
    [aux_sym_table_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(104),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_QMARK_DOT] = ACTIONS(107),
    [anon_sym_TILDE_EQ] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(107),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(107),
    [anon_sym_DOT_DOT] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(128),
    [sym_nil] = ACTIONS(130),
    [sym_boolean] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_number] = ACTIONS(130),
    [sym__hashfn] = ACTIONS(136),
    [sym__quote] = ACTIONS(136),
    [sym__quasiquote] = ACTIONS(136),
    [sym__unquote] = ACTIONS(136),
  },
  [10] = {
    [sym__sexp] = STATE(46),
    [sym__special_override_symbols] = STATE(46),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(14),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_nil] = ACTIONS(141),
    [sym_boolean] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(141),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [11] = {
    [sym__sexp] = STATE(46),
    [sym__special_override_symbols] = STATE(46),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(3),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_nil] = ACTIONS(141),
    [sym_boolean] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(141),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [12] = {
    [sym__sexp] = STATE(46),
    [sym__special_override_symbols] = STATE(46),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(13),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_nil] = ACTIONS(141),
    [sym_boolean] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(141),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [13] = {
    [sym__sexp] = STATE(46),
    [sym__special_override_symbols] = STATE(46),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(3),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_nil] = ACTIONS(141),
    [sym_boolean] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(141),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [14] = {
    [sym__sexp] = STATE(46),
    [sym__special_override_symbols] = STATE(46),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(3),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_nil] = ACTIONS(141),
    [sym_boolean] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(141),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
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
    [sym__colon_string] = STATE(59),
    [sym__double_quote_string] = STATE(60),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_symbol] = ACTIONS(153),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(156),
    [anon_sym_QMARK_DOT] = ACTIONS(156),
    [anon_sym_TILDE_EQ] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(159),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(156),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(156),
    [anon_sym_DOT_DOT] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(174),
    [sym_nil] = ACTIONS(177),
    [sym_boolean] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [sym_number] = ACTIONS(177),
    [sym__hashfn] = ACTIONS(183),
    [sym__quote] = ACTIONS(183),
    [sym__quasiquote] = ACTIONS(183),
    [sym__unquote] = ACTIONS(183),
  },
  [16] = {
    [sym__sexp] = STATE(18),
    [sym__special_override_symbols] = STATE(18),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(18),
    [sym_list] = STATE(18),
    [sym_sequence] = STATE(18),
    [sym_table] = STATE(18),
    [sym__literal] = STATE(18),
    [sym__colon_string] = STATE(59),
    [sym__double_quote_string] = STATE(60),
    [sym_string] = STATE(18),
    [sym_multi_symbol] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(188),
    [sym_boolean] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_number] = ACTIONS(188),
    [sym__hashfn] = ACTIONS(29),
    [sym__quote] = ACTIONS(29),
    [sym__quasiquote] = ACTIONS(29),
    [sym__unquote] = ACTIONS(29),
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
    [sym__colon_string] = STATE(59),
    [sym__double_quote_string] = STATE(60),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(190),
    [sym_boolean] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_number] = ACTIONS(190),
    [sym__hashfn] = ACTIONS(29),
    [sym__quote] = ACTIONS(29),
    [sym__quasiquote] = ACTIONS(29),
    [sym__unquote] = ACTIONS(29),
  },
  [18] = {
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__colon_string] = STATE(59),
    [sym__double_quote_string] = STATE(60),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(190),
    [sym_boolean] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_number] = ACTIONS(190),
    [sym__hashfn] = ACTIONS(29),
    [sym__quote] = ACTIONS(29),
    [sym__quasiquote] = ACTIONS(29),
    [sym__unquote] = ACTIONS(29),
  },
  [19] = {
    [sym__sexp] = STATE(46),
    [sym__special_override_symbols] = STATE(46),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(11),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_nil] = ACTIONS(141),
    [sym_boolean] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(141),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [20] = {
    [sym__sexp] = STATE(49),
    [sym__special_override_symbols] = STATE(49),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(49),
    [sym_list] = STATE(49),
    [sym_sequence] = STATE(49),
    [sym_table] = STATE(49),
    [sym__literal] = STATE(49),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(49),
    [sym_multi_symbol] = STATE(49),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(196),
    [sym_nil] = ACTIONS(198),
    [sym_boolean] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(198),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [21] = {
    [sym__sexp] = STATE(57),
    [sym__special_override_symbols] = STATE(57),
    [sym__reader_macro_char] = STATE(21),
    [sym_reader_macro] = STATE(57),
    [sym_list] = STATE(57),
    [sym_sequence] = STATE(57),
    [sym_table] = STATE(57),
    [sym__literal] = STATE(57),
    [sym__colon_string] = STATE(59),
    [sym__double_quote_string] = STATE(60),
    [sym_string] = STATE(57),
    [sym_multi_symbol] = STATE(57),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(13),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(200),
    [sym_boolean] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_number] = ACTIONS(200),
    [sym__hashfn] = ACTIONS(29),
    [sym__quote] = ACTIONS(29),
    [sym__quasiquote] = ACTIONS(29),
    [sym__unquote] = ACTIONS(29),
  },
  [22] = {
    [sym__sexp] = STATE(41),
    [sym__special_override_symbols] = STATE(41),
    [sym__reader_macro_char] = STATE(22),
    [sym_reader_macro] = STATE(41),
    [sym_list] = STATE(41),
    [sym_sequence] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literal] = STATE(41),
    [sym__colon_string] = STATE(33),
    [sym__double_quote_string] = STATE(32),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(41),
    [sym_symbol] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_QMARK_DOT] = ACTIONS(33),
    [anon_sym_TILDE_EQ] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(33),
    [anon_sym_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [sym_nil] = ACTIONS(202),
    [sym_boolean] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(202),
    [sym__hashfn] = ACTIONS(53),
    [sym__quote] = ACTIONS(53),
    [sym__quasiquote] = ACTIONS(53),
    [sym__unquote] = ACTIONS(53),
  },
  [23] = {
    [aux_sym_multi_symbol_repeat1] = STATE(23),
    [sym_symbol] = ACTIONS(204),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_QMARK_DOT] = ACTIONS(206),
    [anon_sym_TILDE_EQ] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(206),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(206),
    [anon_sym_DOT_DOT] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [sym_nil] = ACTIONS(204),
    [sym_boolean] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [sym_number] = ACTIONS(204),
    [sym__hashfn] = ACTIONS(206),
    [sym__quote] = ACTIONS(206),
    [sym__quasiquote] = ACTIONS(206),
    [sym__unquote] = ACTIONS(206),
  },
  [24] = {
    [aux_sym_multi_symbol_repeat1] = STATE(23),
    [sym_symbol] = ACTIONS(211),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(213),
    [anon_sym_QMARK_DOT] = ACTIONS(213),
    [anon_sym_TILDE_EQ] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(213),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(213),
    [anon_sym_DOT_DOT] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_RBRACE] = ACTIONS(213),
    [sym_nil] = ACTIONS(211),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [sym_number] = ACTIONS(211),
    [sym__hashfn] = ACTIONS(213),
    [sym__quote] = ACTIONS(213),
    [sym__quasiquote] = ACTIONS(213),
    [sym__unquote] = ACTIONS(213),
  },
  [25] = {
    [sym_symbol] = ACTIONS(217),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(217),
    [anon_sym_QMARK_DOT] = ACTIONS(217),
    [anon_sym_TILDE_EQ] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(217),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(217),
    [anon_sym_DOT_DOT] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
    [sym_nil] = ACTIONS(217),
    [sym_boolean] = ACTIONS(217),
    [aux_sym__colon_string_token1] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_number] = ACTIONS(217),
    [sym__hashfn] = ACTIONS(219),
    [sym__quote] = ACTIONS(219),
    [sym__quasiquote] = ACTIONS(219),
    [sym__unquote] = ACTIONS(219),
  },
  [26] = {
    [aux_sym_multi_symbol_repeat1] = STATE(24),
    [sym_symbol] = ACTIONS(223),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(225),
    [anon_sym_QMARK_DOT] = ACTIONS(225),
    [anon_sym_TILDE_EQ] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(225),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(225),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(225),
    [anon_sym_DOT_DOT] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [sym_nil] = ACTIONS(223),
    [sym_boolean] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_number] = ACTIONS(223),
    [sym__hashfn] = ACTIONS(225),
    [sym__quote] = ACTIONS(225),
    [sym__quasiquote] = ACTIONS(225),
    [sym__unquote] = ACTIONS(225),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(230), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(232), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [32] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(234), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(236), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [64] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(238), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(240), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [96] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(242), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(244), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [128] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(246), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(248), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [160] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(250), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(252), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [192] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(254), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(256), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [224] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(258), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(260), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [256] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(262), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(264), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [288] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(266), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(268), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [320] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(270), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(272), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [352] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(274), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(276), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [384] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(278), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(280), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [416] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(219), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [448] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(282), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(284), 17,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [480] = 6,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      anon_sym_COLON,
    STATE(24), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(223), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(225), 14,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [517] = 5,
    ACTIONS(288), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(204), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(206), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [552] = 4,
    ACTIONS(291), 1,
      aux_sym__colon_string_token1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(219), 10,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_TILDE_EQ,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(217), 11,
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
  [585] = 5,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(223), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(225), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [620] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(296), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(298), 16,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [651] = 5,
    ACTIONS(300), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(211), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(213), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [686] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(246), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(248), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [716] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(302), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(304), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [746] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(230), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(232), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [776] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(270), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(272), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [806] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(306), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(308), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [836] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(310), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(312), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [866] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(219), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [896] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(258), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(260), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [926] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(266), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(268), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [956] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(282), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(284), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [986] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(274), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(276), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1016] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(254), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(256), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1046] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(250), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(252), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1076] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(242), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(244), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1106] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(278), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(280), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1136] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(314), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(316), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [1166] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(262), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(264), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1196] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(238), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(240), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1226] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(234), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(236), 15,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_COLON,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1256] = 4,
    ACTIONS(318), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(223), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(225), 14,
      sym__hashfn,
      sym__quote,
      sym__quasiquote,
      sym__unquote,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [1288] = 5,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(326), 1,
      sym_escape_sequence,
    STATE(71), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(320), 2,
      sym__whitespace,
      sym_comment,
  [1305] = 5,
    ACTIONS(324), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(326), 1,
      sym_escape_sequence,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(320), 2,
      sym__whitespace,
      sym_comment,
  [1322] = 5,
    ACTIONS(324), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(326), 1,
      sym_escape_sequence,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(320), 2,
      sym__whitespace,
      sym_comment,
  [1339] = 5,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(337), 1,
      sym_escape_sequence,
    STATE(71), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(320), 2,
      sym__whitespace,
      sym_comment,
  [1356] = 5,
    ACTIONS(324), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(326), 1,
      sym_escape_sequence,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(320), 2,
      sym__whitespace,
      sym_comment,
  [1373] = 3,
    ACTIONS(344), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(320), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1385] = 3,
    ACTIONS(344), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(320), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1397] = 2,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1405] = 2,
    ACTIONS(348), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1413] = 2,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1421] = 2,
    ACTIONS(352), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1429] = 2,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1437] = 2,
    ACTIONS(356), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1445] = 2,
    ACTIONS(358), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 32,
  [SMALL_STATE(29)] = 64,
  [SMALL_STATE(30)] = 96,
  [SMALL_STATE(31)] = 128,
  [SMALL_STATE(32)] = 160,
  [SMALL_STATE(33)] = 192,
  [SMALL_STATE(34)] = 224,
  [SMALL_STATE(35)] = 256,
  [SMALL_STATE(36)] = 288,
  [SMALL_STATE(37)] = 320,
  [SMALL_STATE(38)] = 352,
  [SMALL_STATE(39)] = 384,
  [SMALL_STATE(40)] = 416,
  [SMALL_STATE(41)] = 448,
  [SMALL_STATE(42)] = 480,
  [SMALL_STATE(43)] = 517,
  [SMALL_STATE(44)] = 552,
  [SMALL_STATE(45)] = 585,
  [SMALL_STATE(46)] = 620,
  [SMALL_STATE(47)] = 651,
  [SMALL_STATE(48)] = 686,
  [SMALL_STATE(49)] = 716,
  [SMALL_STATE(50)] = 746,
  [SMALL_STATE(51)] = 776,
  [SMALL_STATE(52)] = 806,
  [SMALL_STATE(53)] = 836,
  [SMALL_STATE(54)] = 866,
  [SMALL_STATE(55)] = 896,
  [SMALL_STATE(56)] = 926,
  [SMALL_STATE(57)] = 956,
  [SMALL_STATE(58)] = 986,
  [SMALL_STATE(59)] = 1016,
  [SMALL_STATE(60)] = 1046,
  [SMALL_STATE(61)] = 1076,
  [SMALL_STATE(62)] = 1106,
  [SMALL_STATE(63)] = 1136,
  [SMALL_STATE(64)] = 1166,
  [SMALL_STATE(65)] = 1196,
  [SMALL_STATE(66)] = 1226,
  [SMALL_STATE(67)] = 1256,
  [SMALL_STATE(68)] = 1288,
  [SMALL_STATE(69)] = 1305,
  [SMALL_STATE(70)] = 1322,
  [SMALL_STATE(71)] = 1339,
  [SMALL_STATE(72)] = 1356,
  [SMALL_STATE(73)] = 1373,
  [SMALL_STATE(74)] = 1385,
  [SMALL_STATE(75)] = 1397,
  [SMALL_STATE(76)] = 1405,
  [SMALL_STATE(77)] = 1413,
  [SMALL_STATE(78)] = 1421,
  [SMALL_STATE(79)] = 1429,
  [SMALL_STATE(80)] = 1437,
  [SMALL_STATE(81)] = 1445,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(26),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(40),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(40),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(36),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(12),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(46),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(70),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(22),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(26),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(40),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(25),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(40),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(36),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(12),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(20),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(70),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 12),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(56),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 1, .production_id = 8),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21), SHIFT_REPEAT(81),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 10),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 10),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = 2, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = 2, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(81),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 17),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 17),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 19),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 19),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .dynamic_precedence = 1, .production_id = 4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .dynamic_precedence = 1, .production_id = 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 13),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 13),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 20),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 20),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 14),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 14),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 2, .production_id = 11),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 2, .production_id = 11),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21), SHIFT_REPEAT(78),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(78),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 23),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 23),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(73),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(74),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
