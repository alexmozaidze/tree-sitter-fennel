#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 24

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
  anon_sym_nil = 20,
  aux_sym__colon_string_content_token1 = 21,
  anon_sym_POUND2 = 22,
  anon_sym_QMARK_DOT2 = 23,
  anon_sym_TILDE_EQ2 = 24,
  anon_sym_COLON2 = 25,
  anon_sym_DOLLAR_DOT_DOT_DOT2 = 26,
  anon_sym_DOT_DOT_DOT2 = 27,
  anon_sym_DOT_DOT2 = 28,
  anon_sym_DOT2 = 29,
  aux_sym__colon_string_content_token2 = 30,
  anon_sym_DQUOTE = 31,
  aux_sym__double_quote_string_token1 = 32,
  sym_escape_sequence = 33,
  sym_number = 34,
  sym_symbol_immediate = 35,
  sym__hashfn_reader_macro_char = 36,
  sym__quote_reader_macro_char = 37,
  sym__quasi_quote_reader_macro_char = 38,
  sym__unquote_reader_macro_char = 39,
  sym___reader_macro_count = 40,
  sym_program = 41,
  sym__sexp = 42,
  sym__special_override_symbols = 43,
  sym_hashfn_reader_macro = 44,
  sym_quote_reader_macro = 45,
  sym_quasi_quote_reader_macro = 46,
  sym_unquote_reader_macro = 47,
  sym__reader_macro = 48,
  sym__list_content = 49,
  sym_list = 50,
  sym_sequence = 51,
  sym__table_pair = 52,
  sym_table = 53,
  sym__literal = 54,
  sym_boolean = 55,
  sym__colon_string_content = 56,
  sym__colon_string = 57,
  sym__double_quote_string = 58,
  sym_string = 59,
  sym_multi_symbol = 60,
  sym_multi_symbol_method = 61,
  aux_sym_program_repeat1 = 62,
  aux_sym__list_content_repeat1 = 63,
  aux_sym_table_repeat1 = 64,
  aux_sym__double_quote_string_repeat1 = 65,
  aux_sym_multi_symbol_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "symbol",
  [anon_sym_QMARK_DOT] = "symbol",
  [anon_sym_TILDE_EQ] = "symbol",
  [anon_sym_COLON] = ":",
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
  [anon_sym_nil] = "nil",
  [aux_sym__colon_string_content_token1] = "_colon_string_content_token1",
  [anon_sym_POUND2] = "#",
  [anon_sym_QMARK_DOT2] = "\?.",
  [anon_sym_TILDE_EQ2] = "~=",
  [anon_sym_COLON2] = ":",
  [anon_sym_DOLLAR_DOT_DOT_DOT2] = "$...",
  [anon_sym_DOT_DOT_DOT2] = "...",
  [anon_sym_DOT_DOT2] = "..",
  [anon_sym_DOT2] = ".",
  [aux_sym__colon_string_content_token2] = "_colon_string_content_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_symbol_immediate] = "symbol_fragment",
  [sym__hashfn_reader_macro_char] = "#",
  [sym__quote_reader_macro_char] = "'",
  [sym__quasi_quote_reader_macro_char] = "`",
  [sym__unquote_reader_macro_char] = ",",
  [sym___reader_macro_count] = "__reader_macro_count",
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
  [sym__colon_string_content] = "string_content",
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_nil] = anon_sym_nil,
  [aux_sym__colon_string_content_token1] = aux_sym__colon_string_content_token1,
  [anon_sym_POUND2] = anon_sym_POUND,
  [anon_sym_QMARK_DOT2] = anon_sym_QMARK_DOT,
  [anon_sym_TILDE_EQ2] = anon_sym_TILDE_EQ,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_DOLLAR_DOT_DOT_DOT2] = anon_sym_DOLLAR_DOT_DOT_DOT,
  [anon_sym_DOT_DOT_DOT2] = anon_sym_DOT_DOT_DOT,
  [anon_sym_DOT_DOT2] = anon_sym_DOT_DOT,
  [anon_sym_DOT2] = anon_sym_DOT,
  [aux_sym__colon_string_content_token2] = aux_sym__colon_string_content_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_symbol_immediate] = sym_symbol_immediate,
  [sym__hashfn_reader_macro_char] = anon_sym_POUND2,
  [sym__quote_reader_macro_char] = sym__quote_reader_macro_char,
  [sym__quasi_quote_reader_macro_char] = sym__quasi_quote_reader_macro_char,
  [sym__unquote_reader_macro_char] = sym__unquote_reader_macro_char,
  [sym___reader_macro_count] = sym___reader_macro_count,
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
  [sym__colon_string_content] = sym__colon_string_content,
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
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__colon_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOT_DOT_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__colon_string_content_token2] = {
    .visible = false,
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
  [sym__colon_string_content] = {
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
  [20] = {.index = 42, .length = 2},
  [21] = {.index = 44, .length = 1},
  [22] = {.index = 45, .length = 2},
  [23] = {.index = 42, .length = 2},
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
    {field_base, 0},
    {field_method, 2},
  [44] =
    {field_member, 1},
  [45] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_symbol,
  },
  [11] = {
    [0] = sym_symbol_immediate,
  },
  [19] = {
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
  [55] = 55,
  [56] = 56,
};

static inline bool aux_sym__colon_string_content_token2_character_set_1(int32_t c) {
  return (c < ';'
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
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(55);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(59);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
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
      if (!sym_symbol_immediate_character_set_1(lookahead)) ADVANCE(120);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == 'x') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == '{') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(109);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '~') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(119);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(109);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '~') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(119);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '$') ADVANCE(109);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(111);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '~') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(119);
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
          lookahead != '\\') ADVANCE(94);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
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
      ACCEPT_TOKEN(sym_nil);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_nil);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND2);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT2);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON2);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT2);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT2);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT_DOT2);
      if (lookahead == '.') ADVANCE(51);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (lookahead == '.') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == ':') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(58);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.') ADVANCE(50);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.') ADVANCE(61);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(91);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(82);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(87);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__colon_string_content_token2);
      if (!aux_sym__colon_string_content_token2_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == ';') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(99);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(99);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(105);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(3);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(29);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(114);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(43);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_symbol_immediate);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(120);
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
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 't') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 20, .external_lex_state = 2},
  [2] = {.lex_state = 20, .external_lex_state = 2},
  [3] = {.lex_state = 20, .external_lex_state = 2},
  [4] = {.lex_state = 20, .external_lex_state = 2},
  [5] = {.lex_state = 20, .external_lex_state = 2},
  [6] = {.lex_state = 20, .external_lex_state = 2},
  [7] = {.lex_state = 20, .external_lex_state = 2},
  [8] = {.lex_state = 20, .external_lex_state = 2},
  [9] = {.lex_state = 20, .external_lex_state = 2},
  [10] = {.lex_state = 20, .external_lex_state = 2},
  [11] = {.lex_state = 20, .external_lex_state = 2},
  [12] = {.lex_state = 20, .external_lex_state = 2},
  [13] = {.lex_state = 20, .external_lex_state = 2},
  [14] = {.lex_state = 20, .external_lex_state = 2},
  [15] = {.lex_state = 20, .external_lex_state = 2},
  [16] = {.lex_state = 20, .external_lex_state = 2},
  [17] = {.lex_state = 20, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 22, .external_lex_state = 2},
  [20] = {.lex_state = 22, .external_lex_state = 2},
  [21] = {.lex_state = 22, .external_lex_state = 2},
  [22] = {.lex_state = 22, .external_lex_state = 2},
  [23] = {.lex_state = 21, .external_lex_state = 2},
  [24] = {.lex_state = 20, .external_lex_state = 2},
  [25] = {.lex_state = 20, .external_lex_state = 2},
  [26] = {.lex_state = 20, .external_lex_state = 2},
  [27] = {.lex_state = 20, .external_lex_state = 2},
  [28] = {.lex_state = 20, .external_lex_state = 2},
  [29] = {.lex_state = 20, .external_lex_state = 2},
  [30] = {.lex_state = 20, .external_lex_state = 2},
  [31] = {.lex_state = 20, .external_lex_state = 2},
  [32] = {.lex_state = 20, .external_lex_state = 2},
  [33] = {.lex_state = 20, .external_lex_state = 2},
  [34] = {.lex_state = 20, .external_lex_state = 2},
  [35] = {.lex_state = 20, .external_lex_state = 2},
  [36] = {.lex_state = 20, .external_lex_state = 2},
  [37] = {.lex_state = 20, .external_lex_state = 2},
  [38] = {.lex_state = 20, .external_lex_state = 2},
  [39] = {.lex_state = 20, .external_lex_state = 2},
  [40] = {.lex_state = 20, .external_lex_state = 2},
  [41] = {.lex_state = 20, .external_lex_state = 2},
  [42] = {.lex_state = 20, .external_lex_state = 2},
  [43] = {.lex_state = 20, .external_lex_state = 2},
  [44] = {.lex_state = 20, .external_lex_state = 2},
  [45] = {.lex_state = 20, .external_lex_state = 2},
  [46] = {.lex_state = 20, .external_lex_state = 2},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
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
    [anon_sym_nil] = ACTIONS(1),
    [aux_sym__colon_string_content_token1] = ACTIONS(1),
    [anon_sym_POUND2] = ACTIONS(1),
    [anon_sym_QMARK_DOT2] = ACTIONS(1),
    [anon_sym_TILDE_EQ2] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(1),
    [anon_sym_DOT_DOT2] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [aux_sym__colon_string_content_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__hashfn_reader_macro_char] = ACTIONS(1),
    [sym__quote_reader_macro_char] = ACTIONS(1),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(1),
    [sym__unquote_reader_macro_char] = ACTIONS(1),
    [sym___reader_macro_count] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(55),
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
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(6),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(21),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
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
    [sym__table_pair] = STATE(46),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(13),
    [aux_sym_table_repeat1] = STATE(3),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym_nil] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(37),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
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
    [sym__table_pair] = STATE(46),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(13),
    [aux_sym_table_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(39),
    [sym_nil] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(37),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [4] = {
    [sym__sexp] = STATE(44),
    [sym__special_override_symbols] = STATE(44),
    [sym_hashfn_reader_macro] = STATE(44),
    [sym_quote_reader_macro] = STATE(44),
    [sym_quasi_quote_reader_macro] = STATE(44),
    [sym_unquote_reader_macro] = STATE(44),
    [sym__reader_macro] = STATE(44),
    [sym_list] = STATE(44),
    [sym_sequence] = STATE(44),
    [sym_table] = STATE(44),
    [sym__literal] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(44),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(44),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(44),
    [anon_sym_QMARK_DOT] = ACTIONS(44),
    [anon_sym_TILDE_EQ] = ACTIONS(44),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(44),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(44),
    [anon_sym_DOT_DOT] = ACTIONS(50),
    [anon_sym_DOT] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(61),
    [sym_nil] = ACTIONS(64),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [sym_number] = ACTIONS(64),
    [sym__hashfn_reader_macro_char] = ACTIONS(73),
    [sym__quote_reader_macro_char] = ACTIONS(76),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(79),
    [sym__unquote_reader_macro_char] = ACTIONS(82),
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
    [sym__table_pair] = STATE(46),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(13),
    [aux_sym_table_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_QMARK_DOT] = ACTIONS(88),
    [anon_sym_TILDE_EQ] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(88),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(88),
    [anon_sym_DOT_DOT] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(106),
    [sym_nil] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [sym_number] = ACTIONS(108),
    [sym__hashfn_reader_macro_char] = ACTIONS(117),
    [sym__quote_reader_macro_char] = ACTIONS(120),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(123),
    [sym__unquote_reader_macro_char] = ACTIONS(126),
  },
  [6] = {
    [sym__sexp] = STATE(11),
    [sym__special_override_symbols] = STATE(11),
    [sym_hashfn_reader_macro] = STATE(11),
    [sym_quote_reader_macro] = STATE(11),
    [sym_quasi_quote_reader_macro] = STATE(11),
    [sym_unquote_reader_macro] = STATE(11),
    [sym__reader_macro] = STATE(11),
    [sym_list] = STATE(11),
    [sym_sequence] = STATE(11),
    [sym_table] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(11),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(131),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [7] = {
    [sym__sexp] = STATE(10),
    [sym__special_override_symbols] = STATE(10),
    [sym_hashfn_reader_macro] = STATE(10),
    [sym_quote_reader_macro] = STATE(10),
    [sym_quasi_quote_reader_macro] = STATE(10),
    [sym_unquote_reader_macro] = STATE(10),
    [sym__reader_macro] = STATE(10),
    [sym__list_content] = STATE(56),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(10),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(135),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [8] = {
    [sym__sexp] = STATE(44),
    [sym__special_override_symbols] = STATE(44),
    [sym_hashfn_reader_macro] = STATE(44),
    [sym_quote_reader_macro] = STATE(44),
    [sym_quasi_quote_reader_macro] = STATE(44),
    [sym_unquote_reader_macro] = STATE(44),
    [sym__reader_macro] = STATE(44),
    [sym_list] = STATE(44),
    [sym_sequence] = STATE(44),
    [sym_table] = STATE(44),
    [sym__literal] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(44),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(44),
    [aux_sym__list_content_repeat1] = STATE(12),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(139),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [9] = {
    [sym__sexp] = STATE(44),
    [sym__special_override_symbols] = STATE(44),
    [sym_hashfn_reader_macro] = STATE(44),
    [sym_quote_reader_macro] = STATE(44),
    [sym_quasi_quote_reader_macro] = STATE(44),
    [sym_unquote_reader_macro] = STATE(44),
    [sym__reader_macro] = STATE(44),
    [sym_list] = STATE(44),
    [sym_sequence] = STATE(44),
    [sym_table] = STATE(44),
    [sym__literal] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(44),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(44),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(139),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [10] = {
    [sym__sexp] = STATE(44),
    [sym__special_override_symbols] = STATE(44),
    [sym_hashfn_reader_macro] = STATE(44),
    [sym_quote_reader_macro] = STATE(44),
    [sym_quasi_quote_reader_macro] = STATE(44),
    [sym_unquote_reader_macro] = STATE(44),
    [sym__reader_macro] = STATE(44),
    [sym_list] = STATE(44),
    [sym_sequence] = STATE(44),
    [sym_table] = STATE(44),
    [sym__literal] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(44),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(44),
    [aux_sym__list_content_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(139),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [11] = {
    [sym__sexp] = STATE(11),
    [sym__special_override_symbols] = STATE(11),
    [sym_hashfn_reader_macro] = STATE(11),
    [sym_quote_reader_macro] = STATE(11),
    [sym_quasi_quote_reader_macro] = STATE(11),
    [sym_unquote_reader_macro] = STATE(11),
    [sym__reader_macro] = STATE(11),
    [sym_list] = STATE(11),
    [sym_sequence] = STATE(11),
    [sym_table] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_boolean] = STATE(11),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(11),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_symbol] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(150),
    [anon_sym_QMARK_DOT] = ACTIONS(150),
    [anon_sym_TILDE_EQ] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(150),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(150),
    [anon_sym_DOT_DOT] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(165),
    [sym_nil] = ACTIONS(168),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_number] = ACTIONS(168),
    [sym__hashfn_reader_macro_char] = ACTIONS(177),
    [sym__quote_reader_macro_char] = ACTIONS(180),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(183),
    [sym__unquote_reader_macro_char] = ACTIONS(186),
  },
  [12] = {
    [sym__sexp] = STATE(44),
    [sym__special_override_symbols] = STATE(44),
    [sym_hashfn_reader_macro] = STATE(44),
    [sym_quote_reader_macro] = STATE(44),
    [sym_quasi_quote_reader_macro] = STATE(44),
    [sym_unquote_reader_macro] = STATE(44),
    [sym__reader_macro] = STATE(44),
    [sym_list] = STATE(44),
    [sym_sequence] = STATE(44),
    [sym_table] = STATE(44),
    [sym__literal] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(44),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(44),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(139),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [13] = {
    [sym__sexp] = STATE(45),
    [sym__special_override_symbols] = STATE(45),
    [sym_hashfn_reader_macro] = STATE(45),
    [sym_quote_reader_macro] = STATE(45),
    [sym_quasi_quote_reader_macro] = STATE(45),
    [sym_unquote_reader_macro] = STATE(45),
    [sym__reader_macro] = STATE(45),
    [sym_list] = STATE(45),
    [sym_sequence] = STATE(45),
    [sym_table] = STATE(45),
    [sym__literal] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(45),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(45),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(191),
    [sym_nil] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(193),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [14] = {
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
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(42),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(42),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(195),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(195),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [15] = {
    [sym__sexp] = STATE(34),
    [sym__special_override_symbols] = STATE(34),
    [sym_hashfn_reader_macro] = STATE(34),
    [sym_quote_reader_macro] = STATE(34),
    [sym_quasi_quote_reader_macro] = STATE(34),
    [sym_unquote_reader_macro] = STATE(34),
    [sym__reader_macro] = STATE(34),
    [sym_list] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_table] = STATE(34),
    [sym__literal] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(34),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(34),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(197),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [16] = {
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
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(41),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(199),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [17] = {
    [sym__sexp] = STATE(43),
    [sym__special_override_symbols] = STATE(43),
    [sym_hashfn_reader_macro] = STATE(43),
    [sym_quote_reader_macro] = STATE(43),
    [sym_quasi_quote_reader_macro] = STATE(43),
    [sym_unquote_reader_macro] = STATE(43),
    [sym__reader_macro] = STATE(43),
    [sym_list] = STATE(43),
    [sym_sequence] = STATE(43),
    [sym_table] = STATE(43),
    [sym__literal] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym__colon_string] = STATE(24),
    [sym__double_quote_string] = STATE(38),
    [sym_string] = STATE(43),
    [sym_multi_symbol] = STATE(23),
    [sym_multi_symbol_method] = STATE(43),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_QMARK_DOT] = ACTIONS(9),
    [anon_sym_TILDE_EQ] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(9),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_nil] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(201),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [18] = {
    [sym__colon_string_content] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_symbol] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(205),
    [anon_sym_QMARK_DOT] = ACTIONS(205),
    [anon_sym_TILDE_EQ] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(205),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(205),
    [anon_sym_DOT_DOT] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [sym_nil] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_nil] = ACTIONS(207),
    [aux_sym__colon_string_content_token1] = ACTIONS(207),
    [anon_sym_POUND2] = ACTIONS(207),
    [anon_sym_QMARK_DOT2] = ACTIONS(207),
    [anon_sym_TILDE_EQ2] = ACTIONS(209),
    [anon_sym_COLON2] = ACTIONS(207),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(207),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(207),
    [anon_sym_DOT_DOT2] = ACTIONS(207),
    [anon_sym_DOT2] = ACTIONS(207),
    [aux_sym__colon_string_content_token2] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [sym_number] = ACTIONS(205),
    [sym__hashfn_reader_macro_char] = ACTIONS(203),
    [sym__quote_reader_macro_char] = ACTIONS(203),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(203),
    [sym__unquote_reader_macro_char] = ACTIONS(203),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT2,
    STATE(19), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(213), 8,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(211), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
      anon_sym_COLON2,
      anon_sym_DQUOTE,
  [40] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COLON2,
    ACTIONS(224), 1,
      anon_sym_DOT2,
    STATE(21), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(220), 8,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(218), 17,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [82] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_DOT2,
    STATE(19), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(228), 8,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(226), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
      anon_sym_COLON2,
      anon_sym_DQUOTE,
  [122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 9,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DOT2,
      sym_number,
      sym_symbol,
    ACTIONS(230), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
      anon_sym_COLON2,
      anon_sym_DQUOTE,
  [157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COLON2,
    ACTIONS(220), 8,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(218), 17,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(236), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(240), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(244), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(248), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(252), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(256), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(260), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(264), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(203), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(268), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(272), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(276), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(280), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(284), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(288), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(292), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(296), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(300), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(304), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(308), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(314), 16,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(318), 15,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 7,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(322), 15,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
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
  [944] = 5,
    ACTIONS(324), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(330), 1,
      sym_escape_sequence,
    STATE(48), 1,
      aux_sym__double_quote_string_repeat1,
  [960] = 5,
    ACTIONS(324), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(337), 1,
      sym_escape_sequence,
    STATE(48), 1,
      aux_sym__double_quote_string_repeat1,
  [976] = 5,
    ACTIONS(324), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(330), 1,
      sym_escape_sequence,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym__double_quote_string_repeat1,
  [992] = 2,
    ACTIONS(324), 1,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1001] = 2,
    ACTIONS(324), 1,
      sym_comment,
    ACTIONS(342), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_symbol_immediate,
  [1017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_symbol_immediate,
  [1024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_symbol_immediate,
  [1031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 40,
  [SMALL_STATE(21)] = 82,
  [SMALL_STATE(22)] = 122,
  [SMALL_STATE(23)] = 157,
  [SMALL_STATE(24)] = 193,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 259,
  [SMALL_STATE(27)] = 292,
  [SMALL_STATE(28)] = 325,
  [SMALL_STATE(29)] = 358,
  [SMALL_STATE(30)] = 391,
  [SMALL_STATE(31)] = 424,
  [SMALL_STATE(32)] = 457,
  [SMALL_STATE(33)] = 490,
  [SMALL_STATE(34)] = 523,
  [SMALL_STATE(35)] = 556,
  [SMALL_STATE(36)] = 589,
  [SMALL_STATE(37)] = 622,
  [SMALL_STATE(38)] = 655,
  [SMALL_STATE(39)] = 688,
  [SMALL_STATE(40)] = 721,
  [SMALL_STATE(41)] = 754,
  [SMALL_STATE(42)] = 787,
  [SMALL_STATE(43)] = 820,
  [SMALL_STATE(44)] = 853,
  [SMALL_STATE(45)] = 884,
  [SMALL_STATE(46)] = 914,
  [SMALL_STATE(47)] = 944,
  [SMALL_STATE(48)] = 960,
  [SMALL_STATE(49)] = 976,
  [SMALL_STATE(50)] = 992,
  [SMALL_STATE(51)] = 1001,
  [SMALL_STATE(52)] = 1010,
  [SMALL_STATE(53)] = 1017,
  [SMALL_STATE(54)] = 1024,
  [SMALL_STATE(55)] = 1031,
  [SMALL_STATE(56)] = 1038,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(32),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(18),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(32),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(8),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(44),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(30),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(49),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(14),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(17),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(16),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(15),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(20),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(32),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(18),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(32),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(7),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(8),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(13),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(30),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(49),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(14),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(17),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(16),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(15),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 12),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 7),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 1, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = 1, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = 1, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 22),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 22),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 22), SHIFT_REPEAT(53),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 11),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 11),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 17),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 17),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 6),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 6),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 23),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 23),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 6),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 6),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 6),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 6),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 19),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 19),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string_content, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string_content, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 14),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 14),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 13),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 13),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 8),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 8),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 10),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 10),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(51),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(50),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__hashfn_reader_macro_char = 0,
  ts_external_token__quote_reader_macro_char = 1,
  ts_external_token__quasi_quote_reader_macro_char = 2,
  ts_external_token__unquote_reader_macro_char = 3,
  ts_external_token___reader_macro_count = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__hashfn_reader_macro_char] = sym__hashfn_reader_macro_char,
  [ts_external_token__quote_reader_macro_char] = sym__quote_reader_macro_char,
  [ts_external_token__quasi_quote_reader_macro_char] = sym__quasi_quote_reader_macro_char,
  [ts_external_token__unquote_reader_macro_char] = sym__unquote_reader_macro_char,
  [ts_external_token___reader_macro_count] = sym___reader_macro_count,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
    [ts_external_token___reader_macro_count] = true,
  },
  [2] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
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
