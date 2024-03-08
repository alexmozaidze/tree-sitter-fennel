#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 23

enum ts_symbol_identifiers {
  sym_symbol = 1,
  sym_comment = 2,
  anon_sym_POUND = 3,
  anon_sym_QMARK_DOT = 4,
  anon_sym_TILDE_EQ = 5,
  anon_sym_COLON = 6,
  anon_sym_DOLLAR_DOT_DOT_DOT = 7,
  anon_sym_DOT_DOT_DOT = 8,
  anon_sym_DOT_DOT = 9,
  anon_sym_DOT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  sym_nil = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  anon_sym_DQUOTE = 20,
  aux_sym__double_quote_string_token1 = 21,
  sym_escape_sequence = 22,
  sym_number = 23,
  anon_sym_DOT2 = 24,
  anon_sym_COLON2 = 25,
  sym_symbol_immediate = 26,
  sym__hashfn_reader_macro_char = 27,
  sym__quote_reader_macro_char = 28,
  sym__quasi_quote_reader_macro_char = 29,
  sym__unquote_reader_macro_char = 30,
  sym___reader_macro_count = 31,
  sym__colon_string_colon = 32,
  sym__colon_string_content = 33,
  sym_program = 34,
  sym__sexp = 35,
  sym__special_override_symbols = 36,
  sym_hashfn_reader_macro = 37,
  sym_quote_reader_macro = 38,
  sym_quasi_quote_reader_macro = 39,
  sym_unquote_reader_macro = 40,
  sym__reader_macro = 41,
  sym__list_content = 42,
  sym_list = 43,
  sym_sequence = 44,
  sym__table_pair = 45,
  sym_table = 46,
  sym__literal = 47,
  sym_boolean = 48,
  sym__colon_string = 49,
  sym__double_quote_string = 50,
  sym_string = 51,
  sym_multi_symbol = 52,
  sym_multi_symbol_method = 53,
  aux_sym_program_repeat1 = 54,
  aux_sym__list_content_repeat1 = 55,
  aux_sym_table_repeat1 = 56,
  aux_sym__double_quote_string_repeat1 = 57,
  aux_sym_multi_symbol_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "symbol",
  [anon_sym_QMARK_DOT] = "symbol",
  [anon_sym_TILDE_EQ] = "symbol",
  [anon_sym_COLON] = "symbol",
  [anon_sym_DOLLAR_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT_DOT] = "symbol",
  [anon_sym_DOT_DOT] = "symbol",
  [anon_sym_DOT] = "symbol",
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
  [anon_sym_DOT2] = ".",
  [anon_sym_COLON2] = ":",
  [sym_symbol_immediate] = "symbol_fragment",
  [sym__hashfn_reader_macro_char] = "#",
  [sym__quote_reader_macro_char] = "'",
  [sym__quasi_quote_reader_macro_char] = "`",
  [sym__unquote_reader_macro_char] = ",",
  [sym___reader_macro_count] = "__reader_macro_count",
  [sym__colon_string_colon] = ":",
  [sym__colon_string_content] = "string_content",
  [sym_program] = "program",
  [sym__sexp] = "_sexp",
  [sym__special_override_symbols] = "_special_override_symbols",
  [sym_hashfn_reader_macro] = "hashfn_reader_macro",
  [sym_quote_reader_macro] = "quote_reader_macro",
  [sym_quasi_quote_reader_macro] = "quasi_quote_reader_macro",
  [sym_unquote_reader_macro] = "unquote_reader_macro",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_symbol] = sym_symbol,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = sym_symbol,
  [anon_sym_QMARK_DOT] = sym_symbol,
  [anon_sym_TILDE_EQ] = sym_symbol,
  [anon_sym_COLON] = sym_symbol,
  [anon_sym_DOLLAR_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT_DOT] = sym_symbol,
  [anon_sym_DOT_DOT] = sym_symbol,
  [anon_sym_DOT] = sym_symbol,
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
  [anon_sym_DOT2] = anon_sym_DOT,
  [anon_sym_COLON2] = anon_sym_COLON,
  [sym_symbol_immediate] = sym_symbol_immediate,
  [sym__hashfn_reader_macro_char] = sym__hashfn_reader_macro_char,
  [sym__quote_reader_macro_char] = sym__quote_reader_macro_char,
  [sym__quasi_quote_reader_macro_char] = sym__quasi_quote_reader_macro_char,
  [sym__unquote_reader_macro_char] = sym__unquote_reader_macro_char,
  [sym___reader_macro_count] = sym___reader_macro_count,
  [sym__colon_string_colon] = anon_sym_COLON2,
  [sym__colon_string_content] = sym__colon_string_content,
  [sym_program] = sym_program,
  [sym__sexp] = sym__sexp,
  [sym__special_override_symbols] = sym__special_override_symbols,
  [sym_hashfn_reader_macro] = sym_hashfn_reader_macro,
  [sym_quote_reader_macro] = sym_quote_reader_macro,
  [sym_quasi_quote_reader_macro] = sym_quasi_quote_reader_macro,
  [sym_unquote_reader_macro] = sym_unquote_reader_macro,
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
    .named = true,
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
    .named = true,
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
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [sym_symbol_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym__hashfn_reader_macro_char] = {
    .visible = true,
    .named = false,
  },
  [sym__quote_reader_macro_char] = {
    .visible = true,
    .named = false,
  },
  [sym__quasi_quote_reader_macro_char] = {
    .visible = true,
    .named = false,
  },
  [sym__unquote_reader_macro_char] = {
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
  [sym_quote_reader_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_quasi_quote_reader_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_reader_macro] = {
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
};

enum ts_field_identifiers {
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 1},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 4},
  [13] = {.index = 24, .length = 3},
  [14] = {.index = 27, .length = 2},
  [15] = {.index = 29, .length = 2},
  [16] = {.index = 31, .length = 4},
  [17] = {.index = 35, .length = 4},
  [18] = {.index = 39, .length = 3},
  [19] = {.index = 42, .length = 1},
  [20] = {.index = 43, .length = 2},
  [21] = {.index = 45, .length = 2},
  [22] = {.index = 43, .length = 2},
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
    {field_expression, 1},
    {field_macro, 0},
  [7] =
    {field_content, 1},
    {field_open, 0},
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
    {field_base, 0},
    {field_method, 2},
  [45] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [10] = {
    [0] = sym_symbol_immediate,
  },
  [18] = {
    [1] = sym__colon_string_content,
  },
  [20] = {
    [0] = sym_symbol_immediate,
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
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
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '\''
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= '.')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
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

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
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

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < '.'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= ',')))
    : (c <= '.' || (c < ']'
      ? (c < '@'
        ? (c >= ':' && c <= ';')
        : (c <= '@' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '`'
        : c <= '~')))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool sym_symbol_immediate_character_set_1(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (!sym_symbol_immediate_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 19:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(76);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(76);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(76);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(64);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(66);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(76);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == ';') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
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
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(76);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(76);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(76);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
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
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (lookahead == '.') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(3);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(29);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(45);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(16);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol_immediate);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(77);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
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
  [1] = {.lex_state = 22, .external_lex_state = 2},
  [2] = {.lex_state = 22, .external_lex_state = 2},
  [3] = {.lex_state = 22, .external_lex_state = 2},
  [4] = {.lex_state = 22, .external_lex_state = 2},
  [5] = {.lex_state = 22, .external_lex_state = 2},
  [6] = {.lex_state = 22, .external_lex_state = 2},
  [7] = {.lex_state = 22, .external_lex_state = 2},
  [8] = {.lex_state = 22, .external_lex_state = 2},
  [9] = {.lex_state = 22, .external_lex_state = 2},
  [10] = {.lex_state = 22, .external_lex_state = 2},
  [11] = {.lex_state = 22, .external_lex_state = 2},
  [12] = {.lex_state = 22, .external_lex_state = 2},
  [13] = {.lex_state = 22, .external_lex_state = 2},
  [14] = {.lex_state = 22, .external_lex_state = 2},
  [15] = {.lex_state = 22, .external_lex_state = 2},
  [16] = {.lex_state = 22, .external_lex_state = 2},
  [17] = {.lex_state = 22, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 20, .external_lex_state = 2},
  [23] = {.lex_state = 22, .external_lex_state = 2},
  [24] = {.lex_state = 22, .external_lex_state = 2},
  [25] = {.lex_state = 22, .external_lex_state = 2},
  [26] = {.lex_state = 22, .external_lex_state = 2},
  [27] = {.lex_state = 22, .external_lex_state = 2},
  [28] = {.lex_state = 22, .external_lex_state = 2},
  [29] = {.lex_state = 22, .external_lex_state = 2},
  [30] = {.lex_state = 22, .external_lex_state = 2},
  [31] = {.lex_state = 22, .external_lex_state = 2},
  [32] = {.lex_state = 22, .external_lex_state = 2},
  [33] = {.lex_state = 22, .external_lex_state = 2},
  [34] = {.lex_state = 22, .external_lex_state = 2},
  [35] = {.lex_state = 22, .external_lex_state = 2},
  [36] = {.lex_state = 22, .external_lex_state = 2},
  [37] = {.lex_state = 22, .external_lex_state = 2},
  [38] = {.lex_state = 22, .external_lex_state = 2},
  [39] = {.lex_state = 22, .external_lex_state = 2},
  [40] = {.lex_state = 22, .external_lex_state = 2},
  [41] = {.lex_state = 22, .external_lex_state = 2},
  [42] = {.lex_state = 22, .external_lex_state = 2},
  [43] = {.lex_state = 22, .external_lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
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
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [sym__hashfn_reader_macro_char] = ACTIONS(1),
    [sym__quote_reader_macro_char] = ACTIONS(1),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(1),
    [sym__unquote_reader_macro_char] = ACTIONS(1),
    [sym___reader_macro_count] = ACTIONS(1),
    [sym__colon_string_colon] = ACTIONS(1),
    [sym__colon_string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(54),
    [sym__sexp] = STATE(6),
    [sym__special_override_symbols] = STATE(6),
    [sym_hashfn_reader_macro] = STATE(6),
    [sym_quote_reader_macro] = STATE(6),
    [sym_quasi_quote_reader_macro] = STATE(6),
    [sym_unquote_reader_macro] = STATE(6),
    [sym__reader_macro] = STATE(6),
    [sym_list] = STATE(6),
    [sym_sequence] = STATE(6),
    [sym_table] = STATE(6),
    [sym__literal] = STATE(6),
    [sym_boolean] = STATE(6),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(6),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [2] = {
    [sym__sexp] = STATE(13),
    [sym__special_override_symbols] = STATE(13),
    [sym_hashfn_reader_macro] = STATE(13),
    [sym_quote_reader_macro] = STATE(13),
    [sym_quasi_quote_reader_macro] = STATE(13),
    [sym_unquote_reader_macro] = STATE(13),
    [sym__reader_macro] = STATE(13),
    [sym_list] = STATE(13),
    [sym_sequence] = STATE(13),
    [sym__table_pair] = STATE(43),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(13),
    [aux_sym_table_repeat1] = STATE(2),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(36),
    [anon_sym_QMARK_DOT] = ACTIONS(36),
    [anon_sym_TILDE_EQ] = ACTIONS(36),
    [anon_sym_COLON] = ACTIONS(36),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(36),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(36),
    [anon_sym_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym_nil] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym_number] = ACTIONS(39),
    [sym__hashfn_reader_macro_char] = ACTIONS(59),
    [sym__quote_reader_macro_char] = ACTIONS(62),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(65),
    [sym__unquote_reader_macro_char] = ACTIONS(68),
    [sym__colon_string_colon] = ACTIONS(71),
  },
  [3] = {
    [sym__sexp] = STATE(13),
    [sym__special_override_symbols] = STATE(13),
    [sym_hashfn_reader_macro] = STATE(13),
    [sym_quote_reader_macro] = STATE(13),
    [sym_quasi_quote_reader_macro] = STATE(13),
    [sym_unquote_reader_macro] = STATE(13),
    [sym__reader_macro] = STATE(13),
    [sym_list] = STATE(13),
    [sym_sequence] = STATE(13),
    [sym__table_pair] = STATE(43),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(13),
    [aux_sym_table_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(74),
    [anon_sym_QMARK_DOT] = ACTIONS(74),
    [anon_sym_TILDE_EQ] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(74),
    [anon_sym_DOT_DOT] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(78),
    [sym_nil] = ACTIONS(76),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(76),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [4] = {
    [sym__sexp] = STATE(41),
    [sym__special_override_symbols] = STATE(41),
    [sym_hashfn_reader_macro] = STATE(41),
    [sym_quote_reader_macro] = STATE(41),
    [sym_quasi_quote_reader_macro] = STATE(41),
    [sym_unquote_reader_macro] = STATE(41),
    [sym__reader_macro] = STATE(41),
    [sym_list] = STATE(41),
    [sym_sequence] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(80),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_QMARK_DOT] = ACTIONS(83),
    [anon_sym_TILDE_EQ] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(83),
    [anon_sym_DOT_DOT] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_nil] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [sym_number] = ACTIONS(86),
    [sym__hashfn_reader_macro_char] = ACTIONS(106),
    [sym__quote_reader_macro_char] = ACTIONS(109),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(112),
    [sym__unquote_reader_macro_char] = ACTIONS(115),
    [sym__colon_string_colon] = ACTIONS(118),
  },
  [5] = {
    [sym__sexp] = STATE(13),
    [sym__special_override_symbols] = STATE(13),
    [sym_hashfn_reader_macro] = STATE(13),
    [sym_quote_reader_macro] = STATE(13),
    [sym_quasi_quote_reader_macro] = STATE(13),
    [sym_unquote_reader_macro] = STATE(13),
    [sym__reader_macro] = STATE(13),
    [sym_list] = STATE(13),
    [sym_sequence] = STATE(13),
    [sym__table_pair] = STATE(43),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(13),
    [aux_sym_table_repeat1] = STATE(2),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(74),
    [anon_sym_QMARK_DOT] = ACTIONS(74),
    [anon_sym_TILDE_EQ] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(74),
    [anon_sym_DOT_DOT] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym_nil] = ACTIONS(76),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(76),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [6] = {
    [sym__sexp] = STATE(12),
    [sym__special_override_symbols] = STATE(12),
    [sym_hashfn_reader_macro] = STATE(12),
    [sym_quote_reader_macro] = STATE(12),
    [sym_quasi_quote_reader_macro] = STATE(12),
    [sym_unquote_reader_macro] = STATE(12),
    [sym__reader_macro] = STATE(12),
    [sym_list] = STATE(12),
    [sym_sequence] = STATE(12),
    [sym_table] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(12),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_QMARK_DOT] = ACTIONS(125),
    [anon_sym_TILDE_EQ] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(125),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(125),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(125),
    [anon_sym_DOT_DOT] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(127),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [7] = {
    [sym__sexp] = STATE(41),
    [sym__special_override_symbols] = STATE(41),
    [sym_hashfn_reader_macro] = STATE(41),
    [sym_quote_reader_macro] = STATE(41),
    [sym_quasi_quote_reader_macro] = STATE(41),
    [sym_unquote_reader_macro] = STATE(41),
    [sym__reader_macro] = STATE(41),
    [sym_list] = STATE(41),
    [sym_sequence] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(129),
    [anon_sym_QMARK_DOT] = ACTIONS(129),
    [anon_sym_TILDE_EQ] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_DOT_DOT] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(131),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [8] = {
    [sym__sexp] = STATE(41),
    [sym__special_override_symbols] = STATE(41),
    [sym_hashfn_reader_macro] = STATE(41),
    [sym_quote_reader_macro] = STATE(41),
    [sym_quasi_quote_reader_macro] = STATE(41),
    [sym_unquote_reader_macro] = STATE(41),
    [sym__reader_macro] = STATE(41),
    [sym_list] = STATE(41),
    [sym_sequence] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(11),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(129),
    [anon_sym_QMARK_DOT] = ACTIONS(129),
    [anon_sym_TILDE_EQ] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_DOT_DOT] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(131),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [9] = {
    [sym__sexp] = STATE(8),
    [sym__special_override_symbols] = STATE(8),
    [sym_hashfn_reader_macro] = STATE(8),
    [sym_quote_reader_macro] = STATE(8),
    [sym_quasi_quote_reader_macro] = STATE(8),
    [sym_unquote_reader_macro] = STATE(8),
    [sym__reader_macro] = STATE(8),
    [sym__list_content] = STATE(53),
    [sym_list] = STATE(8),
    [sym_sequence] = STATE(8),
    [sym_table] = STATE(8),
    [sym__literal] = STATE(8),
    [sym_boolean] = STATE(8),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(8),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(8),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_QMARK_DOT] = ACTIONS(137),
    [anon_sym_TILDE_EQ] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(139),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [10] = {
    [sym__sexp] = STATE(41),
    [sym__special_override_symbols] = STATE(41),
    [sym_hashfn_reader_macro] = STATE(41),
    [sym_quote_reader_macro] = STATE(41),
    [sym_quasi_quote_reader_macro] = STATE(41),
    [sym_unquote_reader_macro] = STATE(41),
    [sym__reader_macro] = STATE(41),
    [sym_list] = STATE(41),
    [sym_sequence] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(7),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(129),
    [anon_sym_QMARK_DOT] = ACTIONS(129),
    [anon_sym_TILDE_EQ] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_DOT_DOT] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(131),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [11] = {
    [sym__sexp] = STATE(41),
    [sym__special_override_symbols] = STATE(41),
    [sym_hashfn_reader_macro] = STATE(41),
    [sym_quote_reader_macro] = STATE(41),
    [sym_quasi_quote_reader_macro] = STATE(41),
    [sym_unquote_reader_macro] = STATE(41),
    [sym__reader_macro] = STATE(41),
    [sym_list] = STATE(41),
    [sym_sequence] = STATE(41),
    [sym_table] = STATE(41),
    [sym__literal] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(129),
    [anon_sym_QMARK_DOT] = ACTIONS(129),
    [anon_sym_TILDE_EQ] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_DOT_DOT] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(131),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [12] = {
    [sym__sexp] = STATE(12),
    [sym__special_override_symbols] = STATE(12),
    [sym_hashfn_reader_macro] = STATE(12),
    [sym_quote_reader_macro] = STATE(12),
    [sym_quasi_quote_reader_macro] = STATE(12),
    [sym_unquote_reader_macro] = STATE(12),
    [sym__reader_macro] = STATE(12),
    [sym_list] = STATE(12),
    [sym_sequence] = STATE(12),
    [sym_table] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(12),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_symbol] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(152),
    [anon_sym_QMARK_DOT] = ACTIONS(152),
    [anon_sym_TILDE_EQ] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(152),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_DOT] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(164),
    [sym_nil] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_number] = ACTIONS(155),
    [sym__hashfn_reader_macro_char] = ACTIONS(173),
    [sym__quote_reader_macro_char] = ACTIONS(176),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(179),
    [sym__unquote_reader_macro_char] = ACTIONS(182),
    [sym__colon_string_colon] = ACTIONS(185),
  },
  [13] = {
    [sym__sexp] = STATE(42),
    [sym__special_override_symbols] = STATE(42),
    [sym_hashfn_reader_macro] = STATE(42),
    [sym_quote_reader_macro] = STATE(42),
    [sym_quasi_quote_reader_macro] = STATE(42),
    [sym_unquote_reader_macro] = STATE(42),
    [sym__reader_macro] = STATE(42),
    [sym_list] = STATE(42),
    [sym_sequence] = STATE(42),
    [sym_table] = STATE(42),
    [sym__literal] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(42),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(42),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(188),
    [anon_sym_QMARK_DOT] = ACTIONS(188),
    [anon_sym_TILDE_EQ] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(188),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(188),
    [anon_sym_DOT_DOT] = ACTIONS(190),
    [anon_sym_DOT] = ACTIONS(190),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(192),
    [sym_nil] = ACTIONS(190),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(190),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [14] = {
    [sym__sexp] = STATE(28),
    [sym__special_override_symbols] = STATE(28),
    [sym_hashfn_reader_macro] = STATE(28),
    [sym_quote_reader_macro] = STATE(28),
    [sym_quasi_quote_reader_macro] = STATE(28),
    [sym_unquote_reader_macro] = STATE(28),
    [sym__reader_macro] = STATE(28),
    [sym_list] = STATE(28),
    [sym_sequence] = STATE(28),
    [sym_table] = STATE(28),
    [sym__literal] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(28),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(28),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(194),
    [anon_sym_QMARK_DOT] = ACTIONS(194),
    [anon_sym_TILDE_EQ] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(194),
    [anon_sym_DOT_DOT] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(196),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(196),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [15] = {
    [sym__sexp] = STATE(33),
    [sym__special_override_symbols] = STATE(33),
    [sym_hashfn_reader_macro] = STATE(33),
    [sym_quote_reader_macro] = STATE(33),
    [sym_quasi_quote_reader_macro] = STATE(33),
    [sym_unquote_reader_macro] = STATE(33),
    [sym__reader_macro] = STATE(33),
    [sym_list] = STATE(33),
    [sym_sequence] = STATE(33),
    [sym_table] = STATE(33),
    [sym__literal] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(33),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(33),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(198),
    [anon_sym_QMARK_DOT] = ACTIONS(198),
    [anon_sym_TILDE_EQ] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(198),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(198),
    [anon_sym_DOT_DOT] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(200),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(200),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [16] = {
    [sym__sexp] = STATE(30),
    [sym__special_override_symbols] = STATE(30),
    [sym_hashfn_reader_macro] = STATE(30),
    [sym_quote_reader_macro] = STATE(30),
    [sym_quasi_quote_reader_macro] = STATE(30),
    [sym_unquote_reader_macro] = STATE(30),
    [sym__reader_macro] = STATE(30),
    [sym_list] = STATE(30),
    [sym_sequence] = STATE(30),
    [sym_table] = STATE(30),
    [sym__literal] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(30),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(30),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(202),
    [anon_sym_QMARK_DOT] = ACTIONS(202),
    [anon_sym_TILDE_EQ] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(202),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(202),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(202),
    [anon_sym_DOT_DOT] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(204),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(204),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [17] = {
    [sym__sexp] = STATE(31),
    [sym__special_override_symbols] = STATE(31),
    [sym_hashfn_reader_macro] = STATE(31),
    [sym_quote_reader_macro] = STATE(31),
    [sym_quasi_quote_reader_macro] = STATE(31),
    [sym_unquote_reader_macro] = STATE(31),
    [sym__reader_macro] = STATE(31),
    [sym_list] = STATE(31),
    [sym_sequence] = STATE(31),
    [sym_table] = STATE(31),
    [sym__literal] = STATE(31),
    [sym_boolean] = STATE(31),
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(31),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(31),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_QMARK_DOT] = ACTIONS(206),
    [anon_sym_TILDE_EQ] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(206),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(206),
    [anon_sym_DOT_DOT] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_nil] = ACTIONS(208),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(208),
    [sym__hashfn_reader_macro_char] = ACTIONS(23),
    [sym__quote_reader_macro_char] = ACTIONS(25),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(27),
    [sym__unquote_reader_macro_char] = ACTIONS(29),
    [sym__colon_string_colon] = ACTIONS(31),
  },
  [18] = {
    [aux_sym_multi_symbol_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_symbol] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(210),
    [anon_sym_QMARK_DOT] = ACTIONS(210),
    [anon_sym_TILDE_EQ] = ACTIONS(210),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(210),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(210),
    [anon_sym_DOT_DOT] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_RBRACK] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [sym_nil] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(212),
    [anon_sym_false] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [sym_number] = ACTIONS(212),
    [anon_sym_DOT2] = ACTIONS(214),
    [anon_sym_COLON2] = ACTIONS(210),
    [sym__hashfn_reader_macro_char] = ACTIONS(210),
    [sym__quote_reader_macro_char] = ACTIONS(210),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(210),
    [sym__unquote_reader_macro_char] = ACTIONS(210),
    [sym__colon_string_colon] = ACTIONS(210),
  },
  [19] = {
    [aux_sym_multi_symbol_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_symbol] = ACTIONS(218),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(216),
    [anon_sym_QMARK_DOT] = ACTIONS(216),
    [anon_sym_TILDE_EQ] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(216),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(216),
    [anon_sym_DOT_DOT] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(218),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [sym_nil] = ACTIONS(218),
    [anon_sym_true] = ACTIONS(218),
    [anon_sym_false] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [sym_number] = ACTIONS(218),
    [anon_sym_DOT2] = ACTIONS(214),
    [anon_sym_COLON2] = ACTIONS(220),
    [sym__hashfn_reader_macro_char] = ACTIONS(216),
    [sym__quote_reader_macro_char] = ACTIONS(216),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(216),
    [sym__unquote_reader_macro_char] = ACTIONS(216),
    [sym__colon_string_colon] = ACTIONS(216),
  },
  [20] = {
    [aux_sym_multi_symbol_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_symbol] = ACTIONS(224),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(222),
    [anon_sym_QMARK_DOT] = ACTIONS(222),
    [anon_sym_TILDE_EQ] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(224),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(222),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(222),
    [anon_sym_DOT_DOT] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [sym_nil] = ACTIONS(224),
    [anon_sym_true] = ACTIONS(224),
    [anon_sym_false] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [sym_number] = ACTIONS(224),
    [anon_sym_DOT2] = ACTIONS(226),
    [anon_sym_COLON2] = ACTIONS(222),
    [sym__hashfn_reader_macro_char] = ACTIONS(222),
    [sym__quote_reader_macro_char] = ACTIONS(222),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(222),
    [sym__unquote_reader_macro_char] = ACTIONS(222),
    [sym__colon_string_colon] = ACTIONS(222),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 9,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(229), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON2,
  [36] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COLON2,
    ACTIONS(218), 8,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(216), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_TILDE_EQ,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [73] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(235), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(239), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(243), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(247), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(251), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(255), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(259), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(263), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(267), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(271), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(275), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(279), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(283), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(287), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(291), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(295), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(299), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(303), 19,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
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
  [685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(309), 17,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(313), 16,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(317), 16,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [779] = 5,
    ACTIONS(319), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(325), 1,
      sym_escape_sequence,
    STATE(45), 1,
      aux_sym__double_quote_string_repeat1,
  [795] = 5,
    ACTIONS(319), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(332), 1,
      sym_escape_sequence,
    STATE(45), 1,
      aux_sym__double_quote_string_repeat1,
  [811] = 5,
    ACTIONS(319), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(325), 1,
      sym_escape_sequence,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym__double_quote_string_repeat1,
  [827] = 2,
    ACTIONS(319), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [836] = 2,
    ACTIONS(319), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_symbol_immediate,
  [852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_symbol_immediate,
  [859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_symbol_immediate,
  [866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      sym__colon_string_content,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
  [880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 36,
  [SMALL_STATE(23)] = 73,
  [SMALL_STATE(24)] = 107,
  [SMALL_STATE(25)] = 141,
  [SMALL_STATE(26)] = 175,
  [SMALL_STATE(27)] = 209,
  [SMALL_STATE(28)] = 243,
  [SMALL_STATE(29)] = 277,
  [SMALL_STATE(30)] = 311,
  [SMALL_STATE(31)] = 345,
  [SMALL_STATE(32)] = 379,
  [SMALL_STATE(33)] = 413,
  [SMALL_STATE(34)] = 447,
  [SMALL_STATE(35)] = 481,
  [SMALL_STATE(36)] = 515,
  [SMALL_STATE(37)] = 549,
  [SMALL_STATE(38)] = 583,
  [SMALL_STATE(39)] = 617,
  [SMALL_STATE(40)] = 651,
  [SMALL_STATE(41)] = 685,
  [SMALL_STATE(42)] = 717,
  [SMALL_STATE(43)] = 748,
  [SMALL_STATE(44)] = 779,
  [SMALL_STATE(45)] = 795,
  [SMALL_STATE(46)] = 811,
  [SMALL_STATE(47)] = 827,
  [SMALL_STATE(48)] = 836,
  [SMALL_STATE(49)] = 845,
  [SMALL_STATE(50)] = 852,
  [SMALL_STATE(51)] = 859,
  [SMALL_STATE(52)] = 866,
  [SMALL_STATE(53)] = 873,
  [SMALL_STATE(54)] = 880,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(13),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(13),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(9),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(10),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(23),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(46),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(15),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(17),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(16),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(14),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(52),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(19),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(41),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(41),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(10),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(23),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(46),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(15),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(17),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(16),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(14),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(52),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 11),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 1, .production_id = 8),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 10),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 10),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21), SHIFT_REPEAT(49),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 19),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 19),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 12),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 12),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 13),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 13),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 16),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 16),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 18),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 18),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 2, .production_id = 15),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 2, .production_id = 15),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(48),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(47),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [349] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__hashfn_reader_macro_char = 0,
  ts_external_token__quote_reader_macro_char = 1,
  ts_external_token__quasi_quote_reader_macro_char = 2,
  ts_external_token__unquote_reader_macro_char = 3,
  ts_external_token___reader_macro_count = 4,
  ts_external_token__colon_string_colon = 5,
  ts_external_token__colon_string_content = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__hashfn_reader_macro_char] = sym__hashfn_reader_macro_char,
  [ts_external_token__quote_reader_macro_char] = sym__quote_reader_macro_char,
  [ts_external_token__quasi_quote_reader_macro_char] = sym__quasi_quote_reader_macro_char,
  [ts_external_token__unquote_reader_macro_char] = sym__unquote_reader_macro_char,
  [ts_external_token___reader_macro_count] = sym___reader_macro_count,
  [ts_external_token__colon_string_colon] = sym__colon_string_colon,
  [ts_external_token__colon_string_content] = sym__colon_string_content,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
    [ts_external_token___reader_macro_count] = true,
    [ts_external_token__colon_string_colon] = true,
    [ts_external_token__colon_string_content] = true,
  },
  [2] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
    [ts_external_token__colon_string_colon] = true,
  },
  [3] = {
    [ts_external_token__colon_string_content] = true,
  },
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
