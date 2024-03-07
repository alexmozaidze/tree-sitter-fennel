#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 1
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 7
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
  anon_sym_true = 20,
  anon_sym_false = 21,
  anon_sym_DQUOTE = 22,
  aux_sym__double_quote_string_token1 = 23,
  sym_escape_sequence = 24,
  sym_number = 25,
  anon_sym_SQUOTE = 26,
  anon_sym_BQUOTE = 27,
  anon_sym_COMMA = 28,
  sym___reader_macro_count = 29,
  sym__colon_string_colon = 30,
  sym__colon_string_content = 31,
  sym_program = 32,
  sym__sexp = 33,
  sym__special_override_symbols = 34,
  sym_hashfn_reader_macro = 35,
  sym__reader_macro = 36,
  sym__list_content = 37,
  sym_list = 38,
  sym_sequence = 39,
  sym__table_pair = 40,
  sym_table = 41,
  sym__literal = 42,
  sym_boolean = 43,
  sym__colon_string = 44,
  sym__double_quote_string = 45,
  sym_string = 46,
  sym_multi_symbol = 47,
  sym_multi_symbol_method = 48,
  aux_sym_program_repeat1 = 49,
  aux_sym__list_content_repeat1 = 50,
  aux_sym_table_repeat1 = 51,
  aux_sym__double_quote_string_repeat1 = 52,
  aux_sym_multi_symbol_repeat1 = 53,
  alias_sym_symbol_fragment = 54,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA] = ",",
  [sym___reader_macro_count] = "__reader_macro_count",
  [sym__colon_string_colon] = ":",
  [sym__colon_string_content] = "string_content",
  [sym_program] = "program",
  [sym__sexp] = "_sexp",
  [sym__special_override_symbols] = "_special_override_symbols",
  [sym_hashfn_reader_macro] = "hashfn_reader_macro",
  [sym__reader_macro] = "_reader_macro",
  [sym__list_content] = "_list_content",
  [sym_list] = "list",
  [sym_sequence] = "sequence",
  [sym__table_pair] = "_table_pair",
  [sym_table] = "table",
  [sym__literal] = "_literal",
  [sym_boolean] = "boolean",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym___reader_macro_count] = sym___reader_macro_count,
  [sym__colon_string_colon] = anon_sym_COLON,
  [sym__colon_string_content] = sym__colon_string_content,
  [sym_program] = sym_program,
  [sym__sexp] = sym__sexp,
  [sym__special_override_symbols] = sym__special_override_symbols,
  [sym_hashfn_reader_macro] = sym_hashfn_reader_macro,
  [sym__reader_macro] = sym__reader_macro,
  [sym__list_content] = sym__list_content,
  [sym_list] = sym_list,
  [sym_sequence] = sym_sequence,
  [sym__table_pair] = sym__table_pair,
  [sym_table] = sym_table,
  [sym__literal] = sym__literal,
  [sym_boolean] = sym_boolean,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
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
  [sym___reader_macro_count] = {
    .visible = false,
    .named = true,
  },
  [sym__colon_string_colon] = {
    .visible = true,
    .named = false,
  },
  [sym__colon_string_content] = {
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
  [sym_hashfn_reader_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__reader_macro] = {
    .visible = false,
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
  [sym_boolean] = {
    .visible = true,
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
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 1},
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
    {field_expression, 1},
    {field_macro, 0},
  [9] =
    {field_close, 1},
    {field_open, 0},
  [11] =
    {field_call, 0},
  [12] =
    {field_item, 0},
  [13] =
    {field_key, 0},
  [14] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [16] =
    {field_base, 0},
    {field_member, 1, .inherited = true},
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
  [11] = {
    [0] = alias_sym_symbol_fragment,
  },
  [19] = {
    [1] = sym__colon_string_content,
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
    sym__colon_string_content,
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
  [7] = 2,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 11,
  [18] = 18,
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 8,
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
  [43] = 24,
  [44] = 25,
  [45] = 45,
  [46] = 23,
  [47] = 26,
  [48] = 48,
  [49] = 37,
  [50] = 40,
  [51] = 36,
  [52] = 35,
  [53] = 53,
  [54] = 54,
  [55] = 32,
  [56] = 27,
  [57] = 34,
  [58] = 33,
  [59] = 31,
  [60] = 29,
  [61] = 30,
  [62] = 62,
  [63] = 38,
  [64] = 28,
  [65] = 39,
  [66] = 66,
  [67] = 41,
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
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 78,
  [83] = 76,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : (c <= ',' || c == '.'))))
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
      : (c <= ']' || (c < '}'
        ? c == '`'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_5(int32_t c) {
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
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(33);
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
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '`' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(74);
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
          lookahead != '\\') ADVANCE(44);
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
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(21);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(74);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(74);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(74);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(3);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '0') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(74);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(30);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(45);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(15);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!sym_symbol_character_set_5(lookahead)) ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (!sym_symbol_character_set_5(lookahead)) ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 18, .external_lex_state = 2},
  [2] = {.lex_state = 19, .external_lex_state = 2},
  [3] = {.lex_state = 19, .external_lex_state = 2},
  [4] = {.lex_state = 19, .external_lex_state = 2},
  [5] = {.lex_state = 19, .external_lex_state = 2},
  [6] = {.lex_state = 19, .external_lex_state = 2},
  [7] = {.lex_state = 19, .external_lex_state = 2},
  [8] = {.lex_state = 19, .external_lex_state = 2},
  [9] = {.lex_state = 19, .external_lex_state = 2},
  [10] = {.lex_state = 19, .external_lex_state = 2},
  [11] = {.lex_state = 19, .external_lex_state = 2},
  [12] = {.lex_state = 19, .external_lex_state = 2},
  [13] = {.lex_state = 19, .external_lex_state = 2},
  [14] = {.lex_state = 19, .external_lex_state = 2},
  [15] = {.lex_state = 19, .external_lex_state = 2},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 19, .external_lex_state = 2},
  [26] = {.lex_state = 19, .external_lex_state = 2},
  [27] = {.lex_state = 19, .external_lex_state = 2},
  [28] = {.lex_state = 19, .external_lex_state = 2},
  [29] = {.lex_state = 19, .external_lex_state = 2},
  [30] = {.lex_state = 19, .external_lex_state = 2},
  [31] = {.lex_state = 19, .external_lex_state = 2},
  [32] = {.lex_state = 19, .external_lex_state = 2},
  [33] = {.lex_state = 19, .external_lex_state = 2},
  [34] = {.lex_state = 19, .external_lex_state = 2},
  [35] = {.lex_state = 19, .external_lex_state = 2},
  [36] = {.lex_state = 19, .external_lex_state = 2},
  [37] = {.lex_state = 19, .external_lex_state = 2},
  [38] = {.lex_state = 19, .external_lex_state = 2},
  [39] = {.lex_state = 19, .external_lex_state = 2},
  [40] = {.lex_state = 19, .external_lex_state = 2},
  [41] = {.lex_state = 19, .external_lex_state = 2},
  [42] = {.lex_state = 19, .external_lex_state = 2},
  [43] = {.lex_state = 19, .external_lex_state = 2},
  [44] = {.lex_state = 19, .external_lex_state = 2},
  [45] = {.lex_state = 19, .external_lex_state = 2},
  [46] = {.lex_state = 19, .external_lex_state = 2},
  [47] = {.lex_state = 19, .external_lex_state = 2},
  [48] = {.lex_state = 19, .external_lex_state = 2},
  [49] = {.lex_state = 19, .external_lex_state = 2},
  [50] = {.lex_state = 19, .external_lex_state = 2},
  [51] = {.lex_state = 19, .external_lex_state = 2},
  [52] = {.lex_state = 19, .external_lex_state = 2},
  [53] = {.lex_state = 19, .external_lex_state = 2},
  [54] = {.lex_state = 19, .external_lex_state = 2},
  [55] = {.lex_state = 19, .external_lex_state = 2},
  [56] = {.lex_state = 19, .external_lex_state = 2},
  [57] = {.lex_state = 19, .external_lex_state = 2},
  [58] = {.lex_state = 19, .external_lex_state = 2},
  [59] = {.lex_state = 19, .external_lex_state = 2},
  [60] = {.lex_state = 19, .external_lex_state = 2},
  [61] = {.lex_state = 19, .external_lex_state = 2},
  [62] = {.lex_state = 19, .external_lex_state = 2},
  [63] = {.lex_state = 19, .external_lex_state = 2},
  [64] = {.lex_state = 19, .external_lex_state = 2},
  [65] = {.lex_state = 19, .external_lex_state = 2},
  [66] = {.lex_state = 19, .external_lex_state = 2},
  [67] = {.lex_state = 19, .external_lex_state = 2},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 4},
};

enum {
  ts_external_token_POUND = 0,
  ts_external_token_SQUOTE = 1,
  ts_external_token_BQUOTE = 2,
  ts_external_token_COMMA = 3,
  ts_external_token___reader_macro_count = 4,
  ts_external_token__colon_string_colon = 5,
  ts_external_token__colon_string_content = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_POUND] = anon_sym_POUND,
  [ts_external_token_SQUOTE] = anon_sym_SQUOTE,
  [ts_external_token_BQUOTE] = anon_sym_BQUOTE,
  [ts_external_token_COMMA] = anon_sym_COMMA,
  [ts_external_token___reader_macro_count] = sym___reader_macro_count,
  [ts_external_token__colon_string_colon] = sym__colon_string_colon,
  [ts_external_token__colon_string_content] = sym__colon_string_content,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_POUND] = true,
    [ts_external_token_SQUOTE] = true,
    [ts_external_token_BQUOTE] = true,
    [ts_external_token_COMMA] = true,
    [ts_external_token___reader_macro_count] = true,
    [ts_external_token__colon_string_colon] = true,
    [ts_external_token__colon_string_content] = true,
  },
  [2] = {
    [ts_external_token_POUND] = true,
    [ts_external_token__colon_string_colon] = true,
  },
  [3] = {
    [ts_external_token__colon_string_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_shebang] = ACTIONS(1),
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym___reader_macro_count] = ACTIONS(1),
    [sym__colon_string_colon] = ACTIONS(1),
    [sym__colon_string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(77),
    [sym__sexp] = STATE(16),
    [sym__special_override_symbols] = STATE(16),
    [sym_hashfn_reader_macro] = STATE(16),
    [sym__reader_macro] = STATE(16),
    [sym_list] = STATE(16),
    [sym_sequence] = STATE(16),
    [sym_table] = STATE(16),
    [sym__literal] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym__colon_string] = STATE(57),
    [sym__double_quote_string] = STATE(58),
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
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(25),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [2] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym_hashfn_reader_macro] = STATE(20),
    [sym__reader_macro] = STATE(20),
    [sym__list_content] = STATE(81),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(66),
    [sym_multi_symbol_method] = STATE(20),
    [sym_symbol] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_nil] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(51),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [3] = {
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym_hashfn_reader_macro] = STATE(21),
    [sym__reader_macro] = STATE(21),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym__table_pair] = STATE(62),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(21),
    [aux_sym_table_repeat1] = STATE(10),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym_nil] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(63),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [4] = {
    [sym__sexp] = STATE(45),
    [sym__special_override_symbols] = STATE(45),
    [sym_hashfn_reader_macro] = STATE(45),
    [sym__reader_macro] = STATE(45),
    [sym_list] = STATE(45),
    [sym_sequence] = STATE(45),
    [sym_table] = STATE(45),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(45),
    [sym_multi_symbol] = STATE(45),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(65),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_QMARK_DOT] = ACTIONS(71),
    [anon_sym_TILDE_EQ] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(71),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(71),
    [anon_sym_DOT_DOT] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(88),
    [sym_nil] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(94),
    [anon_sym_false] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_number] = ACTIONS(91),
    [sym__colon_string_colon] = ACTIONS(100),
  },
  [5] = {
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym_hashfn_reader_macro] = STATE(21),
    [sym__reader_macro] = STATE(21),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym__table_pair] = STATE(62),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(21),
    [aux_sym_table_repeat1] = STATE(10),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(103),
    [sym_nil] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(63),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [6] = {
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym_hashfn_reader_macro] = STATE(21),
    [sym__reader_macro] = STATE(21),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym__table_pair] = STATE(62),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(21),
    [aux_sym_table_repeat1] = STATE(3),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(105),
    [sym_nil] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(63),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [7] = {
    [sym__sexp] = STATE(20),
    [sym__special_override_symbols] = STATE(20),
    [sym_hashfn_reader_macro] = STATE(20),
    [sym__reader_macro] = STATE(20),
    [sym__list_content] = STATE(80),
    [sym_list] = STATE(20),
    [sym_sequence] = STATE(20),
    [sym_table] = STATE(20),
    [sym__literal] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(20),
    [sym_multi_symbol] = STATE(66),
    [sym_multi_symbol_method] = STATE(20),
    [sym_symbol] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_nil] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(51),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [8] = {
    [sym__sexp] = STATE(29),
    [sym__special_override_symbols] = STATE(29),
    [sym_hashfn_reader_macro] = STATE(29),
    [sym__reader_macro] = STATE(29),
    [sym_list] = STATE(29),
    [sym_sequence] = STATE(29),
    [sym_table] = STATE(29),
    [sym__literal] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(29),
    [sym_multi_symbol] = STATE(29),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(109),
    [sym_nil] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(111),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [9] = {
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym_hashfn_reader_macro] = STATE(21),
    [sym__reader_macro] = STATE(21),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym__table_pair] = STATE(62),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(21),
    [aux_sym_table_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(113),
    [sym_nil] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(63),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [10] = {
    [sym__sexp] = STATE(21),
    [sym__special_override_symbols] = STATE(21),
    [sym_hashfn_reader_macro] = STATE(21),
    [sym__reader_macro] = STATE(21),
    [sym_list] = STATE(21),
    [sym_sequence] = STATE(21),
    [sym__table_pair] = STATE(62),
    [sym_table] = STATE(21),
    [sym__literal] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(21),
    [sym_multi_symbol] = STATE(21),
    [aux_sym_table_repeat1] = STATE(10),
    [sym_symbol] = ACTIONS(115),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(118),
    [anon_sym_QMARK_DOT] = ACTIONS(121),
    [anon_sym_TILDE_EQ] = ACTIONS(121),
    [anon_sym_COLON] = ACTIONS(121),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(121),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(121),
    [anon_sym_DOT_DOT] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(139),
    [sym_nil] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(144),
    [anon_sym_false] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [sym_number] = ACTIONS(141),
    [sym__colon_string_colon] = ACTIONS(150),
  },
  [11] = {
    [sym__sexp] = STATE(45),
    [sym__special_override_symbols] = STATE(45),
    [sym_hashfn_reader_macro] = STATE(45),
    [sym__reader_macro] = STATE(45),
    [sym_list] = STATE(45),
    [sym_sequence] = STATE(45),
    [sym_table] = STATE(45),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(45),
    [sym_multi_symbol] = STATE(45),
    [aux_sym__list_content_repeat1] = STATE(19),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_nil] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(155),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [12] = {
    [sym__sexp] = STATE(18),
    [sym__special_override_symbols] = STATE(18),
    [sym_hashfn_reader_macro] = STATE(18),
    [sym__reader_macro] = STATE(18),
    [sym_list] = STATE(18),
    [sym_sequence] = STATE(18),
    [sym_table] = STATE(18),
    [sym__literal] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym__colon_string] = STATE(57),
    [sym__double_quote_string] = STATE(58),
    [sym_string] = STATE(18),
    [sym_multi_symbol] = STATE(18),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(161),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [13] = {
    [sym__sexp] = STATE(45),
    [sym__special_override_symbols] = STATE(45),
    [sym_hashfn_reader_macro] = STATE(45),
    [sym__reader_macro] = STATE(45),
    [sym_list] = STATE(45),
    [sym_sequence] = STATE(45),
    [sym_table] = STATE(45),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(45),
    [sym_multi_symbol] = STATE(45),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_nil] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(155),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [14] = {
    [sym__sexp] = STATE(45),
    [sym__special_override_symbols] = STATE(45),
    [sym_hashfn_reader_macro] = STATE(45),
    [sym__reader_macro] = STATE(45),
    [sym_list] = STATE(45),
    [sym_sequence] = STATE(45),
    [sym_table] = STATE(45),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(45),
    [sym_multi_symbol] = STATE(45),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_nil] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(155),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [15] = {
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym_hashfn_reader_macro] = STATE(15),
    [sym__reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__colon_string] = STATE(57),
    [sym__double_quote_string] = STATE(58),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_symbol] = ACTIONS(169),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(172),
    [anon_sym_QMARK_DOT] = ACTIONS(175),
    [anon_sym_TILDE_EQ] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(175),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(175),
    [anon_sym_DOT_DOT] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(190),
    [sym_nil] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(196),
    [anon_sym_false] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [sym_number] = ACTIONS(193),
    [sym__colon_string_colon] = ACTIONS(202),
  },
  [16] = {
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym_hashfn_reader_macro] = STATE(15),
    [sym__reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__colon_string] = STATE(57),
    [sym__double_quote_string] = STATE(58),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(205),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [17] = {
    [sym__sexp] = STATE(45),
    [sym__special_override_symbols] = STATE(45),
    [sym_hashfn_reader_macro] = STATE(45),
    [sym__reader_macro] = STATE(45),
    [sym_list] = STATE(45),
    [sym_sequence] = STATE(45),
    [sym_table] = STATE(45),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(45),
    [sym_multi_symbol] = STATE(45),
    [aux_sym__list_content_repeat1] = STATE(14),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_nil] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(155),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [18] = {
    [sym__sexp] = STATE(15),
    [sym__special_override_symbols] = STATE(15),
    [sym_hashfn_reader_macro] = STATE(15),
    [sym__reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__colon_string] = STATE(57),
    [sym__double_quote_string] = STATE(58),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(15),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(205),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [19] = {
    [sym__sexp] = STATE(45),
    [sym__special_override_symbols] = STATE(45),
    [sym_hashfn_reader_macro] = STATE(45),
    [sym__reader_macro] = STATE(45),
    [sym_list] = STATE(45),
    [sym_sequence] = STATE(45),
    [sym_table] = STATE(45),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(45),
    [sym_multi_symbol] = STATE(45),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_nil] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(155),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [20] = {
    [sym__sexp] = STATE(45),
    [sym__special_override_symbols] = STATE(45),
    [sym_hashfn_reader_macro] = STATE(45),
    [sym__reader_macro] = STATE(45),
    [sym_list] = STATE(45),
    [sym_sequence] = STATE(45),
    [sym_table] = STATE(45),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(45),
    [sym_multi_symbol] = STATE(45),
    [aux_sym__list_content_repeat1] = STATE(13),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [sym_nil] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(155),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [21] = {
    [sym__sexp] = STATE(48),
    [sym__special_override_symbols] = STATE(48),
    [sym_hashfn_reader_macro] = STATE(48),
    [sym__reader_macro] = STATE(48),
    [sym_list] = STATE(48),
    [sym_sequence] = STATE(48),
    [sym_table] = STATE(48),
    [sym__literal] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__colon_string] = STATE(34),
    [sym__double_quote_string] = STATE(33),
    [sym_string] = STATE(48),
    [sym_multi_symbol] = STATE(48),
    [sym_symbol] = ACTIONS(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_QMARK_DOT] = ACTIONS(37),
    [anon_sym_TILDE_EQ] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(37),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(215),
    [sym_nil] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym_number] = ACTIONS(217),
    [sym__colon_string_colon] = ACTIONS(57),
  },
  [22] = {
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym_hashfn_reader_macro] = STATE(60),
    [sym__reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym_boolean] = STATE(60),
    [sym__colon_string] = STATE(57),
    [sym__double_quote_string] = STATE(58),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_symbol] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_QMARK_DOT] = ACTIONS(13),
    [anon_sym_TILDE_EQ] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT_DOT] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_nil] = ACTIONS(219),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_number] = ACTIONS(219),
    [sym__colon_string_colon] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(225), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(221), 6,
      anon_sym_DOT_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(223), 14,
      sym__colon_string_colon,
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
  [35] = 5,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(227), 6,
      anon_sym_DOT_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(229), 14,
      sym__colon_string_colon,
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
  [70] = 5,
    ACTIONS(238), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(234), 6,
      anon_sym_DOT_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(236), 14,
      sym__colon_string_colon,
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
  [105] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(241), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(243), 14,
      sym__colon_string_colon,
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
  [135] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(245), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(247), 14,
      sym__colon_string_colon,
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
  [165] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(249), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(251), 14,
      sym__colon_string_colon,
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
  [195] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(253), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(255), 14,
      sym__colon_string_colon,
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
  [225] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(257), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(259), 14,
      sym__colon_string_colon,
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
  [255] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(261), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(263), 14,
      sym__colon_string_colon,
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
  [285] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(265), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(267), 14,
      sym__colon_string_colon,
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
  [315] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(269), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(271), 14,
      sym__colon_string_colon,
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
  [345] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(275), 14,
      sym__colon_string_colon,
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
  [375] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(277), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(279), 14,
      sym__colon_string_colon,
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
  [405] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(281), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(283), 14,
      sym__colon_string_colon,
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
  [435] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(285), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(109), 14,
      sym__colon_string_colon,
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
  [465] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(287), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(289), 14,
      sym__colon_string_colon,
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
  [495] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(291), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(293), 14,
      sym__colon_string_colon,
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
  [525] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(295), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(297), 14,
      sym__colon_string_colon,
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
  [555] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(299), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(301), 14,
      sym__colon_string_colon,
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
  [585] = 6,
    ACTIONS(238), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      anon_sym_COLON,
    STATE(23), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(234), 6,
      anon_sym_DOT_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(236), 11,
      sym__colon_string_colon,
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
  [620] = 5,
    ACTIONS(305), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(227), 6,
      anon_sym_DOT_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(229), 12,
      sym__colon_string_colon,
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
  [653] = 5,
    ACTIONS(308), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(234), 6,
      anon_sym_DOT_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(236), 12,
      sym__colon_string_colon,
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
    ACTIONS(311), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(313), 13,
      sym__colon_string_colon,
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
  [715] = 5,
    ACTIONS(315), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(221), 6,
      anon_sym_DOT_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(223), 12,
      sym__colon_string_colon,
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
  [748] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(241), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(243), 12,
      sym__colon_string_colon,
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
    ACTIONS(317), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(319), 12,
      sym__colon_string_colon,
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
  [804] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(285), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(109), 12,
      sym__colon_string_colon,
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
  [832] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(295), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(297), 12,
      sym__colon_string_colon,
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
  [860] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(281), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(283), 12,
      sym__colon_string_colon,
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
  [888] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(277), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(279), 12,
      sym__colon_string_colon,
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
  [916] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(321), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(323), 12,
      sym__colon_string_colon,
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
  [944] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(325), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(327), 12,
      sym__colon_string_colon,
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
  [972] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(265), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(267), 12,
      sym__colon_string_colon,
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
  [1000] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(245), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(247), 12,
      sym__colon_string_colon,
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
  [1028] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(275), 12,
      sym__colon_string_colon,
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
  [1056] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(269), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(271), 12,
      sym__colon_string_colon,
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
  [1084] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(261), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(263), 12,
      sym__colon_string_colon,
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
  [1112] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(253), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(255), 12,
      sym__colon_string_colon,
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
  [1140] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(257), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(259), 12,
      sym__colon_string_colon,
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
  [1168] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(329), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(331), 12,
      sym__colon_string_colon,
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
  [1196] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(287), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(289), 12,
      sym__colon_string_colon,
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
  [1224] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(249), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(251), 12,
      sym__colon_string_colon,
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
  [1252] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(291), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(293), 12,
      sym__colon_string_colon,
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
  [1280] = 4,
    ACTIONS(333), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(234), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(236), 11,
      sym__colon_string_colon,
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
  [1310] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(299), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(301), 12,
      sym__colon_string_colon,
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
  [1338] = 5,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(341), 1,
      sym_escape_sequence,
    STATE(71), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(335), 2,
      sym__whitespace,
      sym_comment,
  [1355] = 5,
    ACTIONS(339), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(341), 1,
      sym_escape_sequence,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(335), 2,
      sym__whitespace,
      sym_comment,
  [1372] = 5,
    ACTIONS(339), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(341), 1,
      sym_escape_sequence,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    STATE(72), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(335), 2,
      sym__whitespace,
      sym_comment,
  [1389] = 5,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(352), 1,
      sym_escape_sequence,
    STATE(71), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(335), 2,
      sym__whitespace,
      sym_comment,
  [1406] = 5,
    ACTIONS(339), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(341), 1,
      sym_escape_sequence,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(71), 1,
      aux_sym__double_quote_string_repeat1,
    ACTIONS(335), 2,
      sym__whitespace,
      sym_comment,
  [1423] = 3,
    ACTIONS(359), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(335), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1435] = 3,
    ACTIONS(359), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(335), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [1447] = 2,
    ACTIONS(361), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1455] = 2,
    ACTIONS(363), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1463] = 2,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1471] = 2,
    ACTIONS(367), 1,
      sym__colon_string_content,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1479] = 2,
    ACTIONS(369), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1487] = 2,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1495] = 2,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1503] = 2,
    ACTIONS(375), 1,
      sym__colon_string_content,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1511] = 2,
    ACTIONS(377), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 35,
  [SMALL_STATE(25)] = 70,
  [SMALL_STATE(26)] = 105,
  [SMALL_STATE(27)] = 135,
  [SMALL_STATE(28)] = 165,
  [SMALL_STATE(29)] = 195,
  [SMALL_STATE(30)] = 225,
  [SMALL_STATE(31)] = 255,
  [SMALL_STATE(32)] = 285,
  [SMALL_STATE(33)] = 315,
  [SMALL_STATE(34)] = 345,
  [SMALL_STATE(35)] = 375,
  [SMALL_STATE(36)] = 405,
  [SMALL_STATE(37)] = 435,
  [SMALL_STATE(38)] = 465,
  [SMALL_STATE(39)] = 495,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 555,
  [SMALL_STATE(42)] = 585,
  [SMALL_STATE(43)] = 620,
  [SMALL_STATE(44)] = 653,
  [SMALL_STATE(45)] = 686,
  [SMALL_STATE(46)] = 715,
  [SMALL_STATE(47)] = 748,
  [SMALL_STATE(48)] = 776,
  [SMALL_STATE(49)] = 804,
  [SMALL_STATE(50)] = 832,
  [SMALL_STATE(51)] = 860,
  [SMALL_STATE(52)] = 888,
  [SMALL_STATE(53)] = 916,
  [SMALL_STATE(54)] = 944,
  [SMALL_STATE(55)] = 972,
  [SMALL_STATE(56)] = 1000,
  [SMALL_STATE(57)] = 1028,
  [SMALL_STATE(58)] = 1056,
  [SMALL_STATE(59)] = 1084,
  [SMALL_STATE(60)] = 1112,
  [SMALL_STATE(61)] = 1140,
  [SMALL_STATE(62)] = 1168,
  [SMALL_STATE(63)] = 1196,
  [SMALL_STATE(64)] = 1224,
  [SMALL_STATE(65)] = 1252,
  [SMALL_STATE(66)] = 1280,
  [SMALL_STATE(67)] = 1310,
  [SMALL_STATE(68)] = 1338,
  [SMALL_STATE(69)] = 1355,
  [SMALL_STATE(70)] = 1372,
  [SMALL_STATE(71)] = 1389,
  [SMALL_STATE(72)] = 1406,
  [SMALL_STATE(73)] = 1423,
  [SMALL_STATE(74)] = 1435,
  [SMALL_STATE(75)] = 1447,
  [SMALL_STATE(76)] = 1455,
  [SMALL_STATE(77)] = 1463,
  [SMALL_STATE(78)] = 1471,
  [SMALL_STATE(79)] = 1479,
  [SMALL_STATE(80)] = 1487,
  [SMALL_STATE(81)] = 1495,
  [SMALL_STATE(82)] = 1503,
  [SMALL_STATE(83)] = 1511,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(25),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(8),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(37),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(36),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(11),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(6),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(45),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(35),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(70),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(78),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = 1, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(25),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(8),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(37),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(37),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(36),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(11),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(21),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(35),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(70),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(78),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 12),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(69),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(82),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 7),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 1, .production_id = 9),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 11),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 11),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21), SHIFT_REPEAT(83),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(83),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 6),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 6),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 6),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 6),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 13),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 13),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = 1, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 14),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 14),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 17),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 17),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 19),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 19),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 20),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 20),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21), SHIFT_REPEAT(76),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(76),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 8),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 8),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 23),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 23),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 10),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 10),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(73),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(74),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
