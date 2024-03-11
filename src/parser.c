#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 25

enum ts_symbol_identifiers {
  sym_symbol = 1,
  sym_comment = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_nil = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  anon_sym_COLON = 12,
  anon_sym_nil = 13,
  anon_sym_true2 = 14,
  anon_sym_false2 = 15,
  anon_sym_POUND = 16,
  anon_sym_QMARK_DOT = 17,
  anon_sym_TILDE_EQ = 18,
  anon_sym_COLON2 = 19,
  anon_sym_DOLLAR_DOT_DOT_DOT = 20,
  anon_sym_DOT_DOT_DOT = 21,
  anon_sym_DOT_DOT = 22,
  anon_sym_DOT = 23,
  aux_sym__colon_string_token1 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym__double_quote_string_token1 = 26,
  sym_escape_sequence = 27,
  sym_number = 28,
  anon_sym_POUND2 = 29,
  anon_sym_QMARK_DOT2 = 30,
  anon_sym_TILDE_EQ2 = 31,
  anon_sym_DOLLAR_DOT_DOT_DOT2 = 32,
  anon_sym_DOT_DOT_DOT2 = 33,
  anon_sym_DOT_DOT2 = 34,
  anon_sym_DOT2 = 35,
  sym_symbol_immediate = 36,
  sym__hashfn_reader_macro_char = 37,
  sym__quote_reader_macro_char = 38,
  sym__quasi_quote_reader_macro_char = 39,
  sym__unquote_reader_macro_char = 40,
  sym___reader_macro_count = 41,
  sym___colon_string_start_mark = 42,
  sym___colon_string_end_mark = 43,
  sym_program = 44,
  sym__sexp = 45,
  sym_hashfn_reader_macro = 46,
  sym_quote_reader_macro = 47,
  sym_quasi_quote_reader_macro = 48,
  sym_unquote_reader_macro = 49,
  sym__reader_macro = 50,
  sym__list_content = 51,
  sym_list = 52,
  sym_sequence = 53,
  sym__table_pair = 54,
  sym_table = 55,
  sym__literal = 56,
  sym_boolean = 57,
  sym__colon_string = 58,
  sym__double_quote_string = 59,
  sym_string = 60,
  sym_multi_symbol = 61,
  sym_multi_symbol_method = 62,
  sym__special_override_symbol = 63,
  aux_sym_program_repeat1 = 64,
  aux_sym__list_content_repeat1 = 65,
  aux_sym_table_repeat1 = 66,
  aux_sym__double_quote_string_repeat1 = 67,
  aux_sym_multi_symbol_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLON] = ":",
  [anon_sym_nil] = "string_content",
  [anon_sym_true2] = "string_content",
  [anon_sym_false2] = "string_content",
  [anon_sym_POUND] = "string_content",
  [anon_sym_QMARK_DOT] = "string_content",
  [anon_sym_TILDE_EQ] = "string_content",
  [anon_sym_COLON2] = ":",
  [anon_sym_DOLLAR_DOT_DOT_DOT] = "string_content",
  [anon_sym_DOT_DOT_DOT] = "string_content",
  [anon_sym_DOT_DOT] = "string_content",
  [anon_sym_DOT] = ".",
  [aux_sym__colon_string_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [anon_sym_POUND2] = "symbol",
  [anon_sym_QMARK_DOT2] = "symbol",
  [anon_sym_TILDE_EQ2] = "symbol",
  [anon_sym_DOLLAR_DOT_DOT_DOT2] = "symbol",
  [anon_sym_DOT_DOT_DOT2] = "symbol",
  [anon_sym_DOT_DOT2] = "symbol",
  [anon_sym_DOT2] = "symbol",
  [sym_symbol_immediate] = "symbol_fragment",
  [sym__hashfn_reader_macro_char] = "#",
  [sym__quote_reader_macro_char] = "'",
  [sym__quasi_quote_reader_macro_char] = "`",
  [sym__unquote_reader_macro_char] = ",",
  [sym___reader_macro_count] = "__reader_macro_count",
  [sym___colon_string_start_mark] = "__colon_string_start_mark",
  [sym___colon_string_end_mark] = "__colon_string_end_mark",
  [sym_program] = "program",
  [sym__sexp] = "_sexp",
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
  [sym__special_override_symbol] = "_special_override_symbol",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_nil] = sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_true2] = anon_sym_nil,
  [anon_sym_false2] = anon_sym_nil,
  [anon_sym_POUND] = anon_sym_nil,
  [anon_sym_QMARK_DOT] = anon_sym_nil,
  [anon_sym_TILDE_EQ] = anon_sym_nil,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_DOLLAR_DOT_DOT_DOT] = anon_sym_nil,
  [anon_sym_DOT_DOT_DOT] = anon_sym_nil,
  [anon_sym_DOT_DOT] = anon_sym_nil,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__colon_string_token1] = anon_sym_nil,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [anon_sym_POUND2] = sym_symbol,
  [anon_sym_QMARK_DOT2] = sym_symbol,
  [anon_sym_TILDE_EQ2] = sym_symbol,
  [anon_sym_DOLLAR_DOT_DOT_DOT2] = sym_symbol,
  [anon_sym_DOT_DOT_DOT2] = sym_symbol,
  [anon_sym_DOT_DOT2] = sym_symbol,
  [anon_sym_DOT2] = sym_symbol,
  [sym_symbol_immediate] = sym_symbol_immediate,
  [sym__hashfn_reader_macro_char] = sym__hashfn_reader_macro_char,
  [sym__quote_reader_macro_char] = sym__quote_reader_macro_char,
  [sym__quasi_quote_reader_macro_char] = sym__quasi_quote_reader_macro_char,
  [sym__unquote_reader_macro_char] = sym__unquote_reader_macro_char,
  [sym___reader_macro_count] = sym___reader_macro_count,
  [sym___colon_string_start_mark] = sym___colon_string_start_mark,
  [sym___colon_string_end_mark] = sym___colon_string_end_mark,
  [sym_program] = sym_program,
  [sym__sexp] = sym__sexp,
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
  [sym__special_override_symbol] = sym__special_override_symbol,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false2] = {
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
  [anon_sym_COLON2] = {
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
  [anon_sym_POUND2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK_DOT2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_EQ2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_DOT_DOT_DOT2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT2] = {
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
  [sym___colon_string_start_mark] = {
    .visible = false,
    .named = true,
  },
  [sym___colon_string_end_mark] = {
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
  [sym__special_override_symbol] = {
    .visible = false,
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
  [19] = {.index = 39, .length = 2},
  [20] = {.index = 41, .length = 3},
  [21] = {.index = 44, .length = 2},
  [22] = {.index = 46, .length = 1},
  [23] = {.index = 47, .length = 2},
  [24] = {.index = 44, .length = 2},
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
    {field_content, 1},
    {field_open, 0},
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
    {field_content, 2},
    {field_open, 0},
  [41] =
    {field_close, 2},
    {field_content, 1},
    {field_open, 0},
  [44] =
    {field_base, 0},
    {field_method, 2},
  [46] =
    {field_member, 1},
  [47] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_symbol,
  },
  [10] = {
    [1] = anon_sym_nil,
  },
  [11] = {
    [0] = sym_symbol_immediate,
  },
  [19] = {
    [2] = anon_sym_nil,
  },
  [20] = {
    [1] = anon_sym_nil,
  },
  [21] = {
    [0] = sym_symbol_immediate,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__double_quote_string_repeat1, 2,
    aux_sym__double_quote_string_repeat1,
    anon_sym_nil,
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
  [57] = 57,
  [58] = 58,
  [59] = 59,
};

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
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym__colon_string_token1_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(61);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == '~') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (!sym_symbol_immediate_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 21:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(131);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(146);
      END_STATE();
    case 22:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(131);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(146);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '$') ADVANCE(129);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(131);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(146);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(107);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_nil);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_nil);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_true2);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_true2);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_false2);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_false2);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON2);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(51);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(52);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(66);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == ':') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(46);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(50);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(64);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'a') ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(44);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'i') ADVANCE(78);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(82);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(40);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'r') ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 's') ADVANCE(72);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'u') ADVANCE(71);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(90);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(104);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == ';') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(112);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(112);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(118);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOT_DOT2);
      if (lookahead == '.') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(4);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(123);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(137);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(36);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(37);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(138);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(140);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(35);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(141);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(135);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(134);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_symbol_immediate);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(147);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 21, .external_lex_state = 2},
  [2] = {.lex_state = 21, .external_lex_state = 2},
  [3] = {.lex_state = 21, .external_lex_state = 2},
  [4] = {.lex_state = 21, .external_lex_state = 2},
  [5] = {.lex_state = 21, .external_lex_state = 2},
  [6] = {.lex_state = 21, .external_lex_state = 2},
  [7] = {.lex_state = 21, .external_lex_state = 2},
  [8] = {.lex_state = 21, .external_lex_state = 2},
  [9] = {.lex_state = 21, .external_lex_state = 2},
  [10] = {.lex_state = 21, .external_lex_state = 2},
  [11] = {.lex_state = 21, .external_lex_state = 2},
  [12] = {.lex_state = 21, .external_lex_state = 2},
  [13] = {.lex_state = 21, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 21, .external_lex_state = 2},
  [16] = {.lex_state = 21, .external_lex_state = 2},
  [17] = {.lex_state = 21, .external_lex_state = 2},
  [18] = {.lex_state = 21, .external_lex_state = 2},
  [19] = {.lex_state = 23, .external_lex_state = 2},
  [20] = {.lex_state = 23, .external_lex_state = 2},
  [21] = {.lex_state = 23, .external_lex_state = 2},
  [22] = {.lex_state = 23, .external_lex_state = 2},
  [23] = {.lex_state = 21, .external_lex_state = 4},
  [24] = {.lex_state = 22, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 4},
  [26] = {.lex_state = 21, .external_lex_state = 2},
  [27] = {.lex_state = 21, .external_lex_state = 2},
  [28] = {.lex_state = 21, .external_lex_state = 2},
  [29] = {.lex_state = 21, .external_lex_state = 2},
  [30] = {.lex_state = 21, .external_lex_state = 2},
  [31] = {.lex_state = 21, .external_lex_state = 2},
  [32] = {.lex_state = 21, .external_lex_state = 2},
  [33] = {.lex_state = 21, .external_lex_state = 2},
  [34] = {.lex_state = 21, .external_lex_state = 2},
  [35] = {.lex_state = 21, .external_lex_state = 2},
  [36] = {.lex_state = 21, .external_lex_state = 2},
  [37] = {.lex_state = 21, .external_lex_state = 2},
  [38] = {.lex_state = 21, .external_lex_state = 2},
  [39] = {.lex_state = 21, .external_lex_state = 2},
  [40] = {.lex_state = 21, .external_lex_state = 2},
  [41] = {.lex_state = 21, .external_lex_state = 2},
  [42] = {.lex_state = 21, .external_lex_state = 2},
  [43] = {.lex_state = 21, .external_lex_state = 2},
  [44] = {.lex_state = 21, .external_lex_state = 2},
  [45] = {.lex_state = 21, .external_lex_state = 2},
  [46] = {.lex_state = 21, .external_lex_state = 2},
  [47] = {.lex_state = 21, .external_lex_state = 2},
  [48] = {.lex_state = 21, .external_lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_true2] = ACTIONS(1),
    [anon_sym_false2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym__colon_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_POUND2] = ACTIONS(1),
    [anon_sym_QMARK_DOT2] = ACTIONS(1),
    [anon_sym_TILDE_EQ2] = ACTIONS(1),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(1),
    [anon_sym_DOT_DOT2] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [sym__hashfn_reader_macro_char] = ACTIONS(1),
    [sym__quote_reader_macro_char] = ACTIONS(1),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(1),
    [sym__unquote_reader_macro_char] = ACTIONS(1),
    [sym___reader_macro_count] = ACTIONS(1),
    [sym___colon_string_start_mark] = ACTIONS(1),
    [sym___colon_string_end_mark] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(58),
    [sym__sexp] = STATE(6),
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
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(6),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(6),
    [sym__special_override_symbol] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(15),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [2] = {
    [sym__sexp] = STATE(13),
    [sym_hashfn_reader_macro] = STATE(13),
    [sym_quote_reader_macro] = STATE(13),
    [sym_quasi_quote_reader_macro] = STATE(13),
    [sym_unquote_reader_macro] = STATE(13),
    [sym__reader_macro] = STATE(13),
    [sym_list] = STATE(13),
    [sym_sequence] = STATE(13),
    [sym__table_pair] = STATE(48),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(13),
    [sym__special_override_symbol] = STATE(13),
    [aux_sym_table_repeat1] = STATE(3),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym_nil] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(37),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [3] = {
    [sym__sexp] = STATE(13),
    [sym_hashfn_reader_macro] = STATE(13),
    [sym_quote_reader_macro] = STATE(13),
    [sym_quasi_quote_reader_macro] = STATE(13),
    [sym_unquote_reader_macro] = STATE(13),
    [sym__reader_macro] = STATE(13),
    [sym_list] = STATE(13),
    [sym_sequence] = STATE(13),
    [sym__table_pair] = STATE(48),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(13),
    [sym__special_override_symbol] = STATE(13),
    [aux_sym_table_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(39),
    [sym_nil] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(37),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [4] = {
    [sym__sexp] = STATE(46),
    [sym_hashfn_reader_macro] = STATE(46),
    [sym_quote_reader_macro] = STATE(46),
    [sym_quasi_quote_reader_macro] = STATE(46),
    [sym_unquote_reader_macro] = STATE(46),
    [sym__reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(46),
    [sym__special_override_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(44),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(52),
    [sym_nil] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(58),
    [anon_sym_false] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [sym_number] = ACTIONS(55),
    [anon_sym_POUND2] = ACTIONS(67),
    [anon_sym_QMARK_DOT2] = ACTIONS(67),
    [anon_sym_TILDE_EQ2] = ACTIONS(67),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(67),
    [anon_sym_DOT_DOT2] = ACTIONS(70),
    [anon_sym_DOT2] = ACTIONS(70),
    [sym__hashfn_reader_macro_char] = ACTIONS(73),
    [sym__quote_reader_macro_char] = ACTIONS(76),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(79),
    [sym__unquote_reader_macro_char] = ACTIONS(82),
  },
  [5] = {
    [sym__sexp] = STATE(13),
    [sym_hashfn_reader_macro] = STATE(13),
    [sym_quote_reader_macro] = STATE(13),
    [sym_quasi_quote_reader_macro] = STATE(13),
    [sym_unquote_reader_macro] = STATE(13),
    [sym__reader_macro] = STATE(13),
    [sym_list] = STATE(13),
    [sym_sequence] = STATE(13),
    [sym__table_pair] = STATE(48),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(13),
    [sym__special_override_symbol] = STATE(13),
    [aux_sym_table_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(97),
    [sym_nil] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(102),
    [anon_sym_false] = ACTIONS(102),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [sym_number] = ACTIONS(99),
    [anon_sym_POUND2] = ACTIONS(111),
    [anon_sym_QMARK_DOT2] = ACTIONS(111),
    [anon_sym_TILDE_EQ2] = ACTIONS(111),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(111),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(111),
    [anon_sym_DOT_DOT2] = ACTIONS(114),
    [anon_sym_DOT2] = ACTIONS(114),
    [sym__hashfn_reader_macro_char] = ACTIONS(117),
    [sym__quote_reader_macro_char] = ACTIONS(120),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(123),
    [sym__unquote_reader_macro_char] = ACTIONS(126),
  },
  [6] = {
    [sym__sexp] = STATE(10),
    [sym_hashfn_reader_macro] = STATE(10),
    [sym_quote_reader_macro] = STATE(10),
    [sym_quasi_quote_reader_macro] = STATE(10),
    [sym_unquote_reader_macro] = STATE(10),
    [sym__reader_macro] = STATE(10),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(10),
    [sym__special_override_symbol] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(131),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [7] = {
    [sym__sexp] = STATE(12),
    [sym_hashfn_reader_macro] = STATE(12),
    [sym_quote_reader_macro] = STATE(12),
    [sym_quasi_quote_reader_macro] = STATE(12),
    [sym_unquote_reader_macro] = STATE(12),
    [sym__reader_macro] = STATE(12),
    [sym__list_content] = STATE(59),
    [sym_list] = STATE(12),
    [sym_sequence] = STATE(12),
    [sym_table] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(12),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(12),
    [sym__special_override_symbol] = STATE(12),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(135),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [8] = {
    [sym__sexp] = STATE(46),
    [sym_hashfn_reader_macro] = STATE(46),
    [sym_quote_reader_macro] = STATE(46),
    [sym_quasi_quote_reader_macro] = STATE(46),
    [sym_unquote_reader_macro] = STATE(46),
    [sym__reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(46),
    [sym__special_override_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(11),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(139),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [9] = {
    [sym__sexp] = STATE(46),
    [sym_hashfn_reader_macro] = STATE(46),
    [sym_quote_reader_macro] = STATE(46),
    [sym_quasi_quote_reader_macro] = STATE(46),
    [sym_unquote_reader_macro] = STATE(46),
    [sym__reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(46),
    [sym__special_override_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(139),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [10] = {
    [sym__sexp] = STATE(10),
    [sym_hashfn_reader_macro] = STATE(10),
    [sym_quote_reader_macro] = STATE(10),
    [sym_quasi_quote_reader_macro] = STATE(10),
    [sym_unquote_reader_macro] = STATE(10),
    [sym__reader_macro] = STATE(10),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(10),
    [sym__special_override_symbol] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_symbol] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(154),
    [sym_nil] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [sym_number] = ACTIONS(157),
    [anon_sym_POUND2] = ACTIONS(169),
    [anon_sym_QMARK_DOT2] = ACTIONS(169),
    [anon_sym_TILDE_EQ2] = ACTIONS(169),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(169),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(169),
    [anon_sym_DOT_DOT2] = ACTIONS(172),
    [anon_sym_DOT2] = ACTIONS(172),
    [sym__hashfn_reader_macro_char] = ACTIONS(175),
    [sym__quote_reader_macro_char] = ACTIONS(178),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(181),
    [sym__unquote_reader_macro_char] = ACTIONS(184),
  },
  [11] = {
    [sym__sexp] = STATE(46),
    [sym_hashfn_reader_macro] = STATE(46),
    [sym_quote_reader_macro] = STATE(46),
    [sym_quasi_quote_reader_macro] = STATE(46),
    [sym_unquote_reader_macro] = STATE(46),
    [sym__reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(46),
    [sym__special_override_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(139),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [12] = {
    [sym__sexp] = STATE(46),
    [sym_hashfn_reader_macro] = STATE(46),
    [sym_quote_reader_macro] = STATE(46),
    [sym_quasi_quote_reader_macro] = STATE(46),
    [sym_unquote_reader_macro] = STATE(46),
    [sym__reader_macro] = STATE(46),
    [sym_list] = STATE(46),
    [sym_sequence] = STATE(46),
    [sym_table] = STATE(46),
    [sym__literal] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(46),
    [sym__special_override_symbol] = STATE(46),
    [aux_sym__list_content_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(139),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [13] = {
    [sym__sexp] = STATE(47),
    [sym_hashfn_reader_macro] = STATE(47),
    [sym_quote_reader_macro] = STATE(47),
    [sym_quasi_quote_reader_macro] = STATE(47),
    [sym_unquote_reader_macro] = STATE(47),
    [sym__reader_macro] = STATE(47),
    [sym_list] = STATE(47),
    [sym_sequence] = STATE(47),
    [sym_table] = STATE(47),
    [sym__literal] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(47),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(47),
    [sym__special_override_symbol] = STATE(47),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(191),
    [sym_nil] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(193),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_symbol] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(195),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_RBRACE] = ACTIONS(195),
    [sym_nil] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_nil] = ACTIONS(199),
    [anon_sym_true2] = ACTIONS(199),
    [anon_sym_false2] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(199),
    [anon_sym_QMARK_DOT] = ACTIONS(199),
    [anon_sym_TILDE_EQ] = ACTIONS(201),
    [anon_sym_COLON2] = ACTIONS(199),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(199),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(199),
    [anon_sym_DOT_DOT] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [aux_sym__colon_string_token1] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [sym_number] = ACTIONS(197),
    [anon_sym_POUND2] = ACTIONS(197),
    [anon_sym_QMARK_DOT2] = ACTIONS(197),
    [anon_sym_TILDE_EQ2] = ACTIONS(197),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(197),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(197),
    [anon_sym_DOT_DOT2] = ACTIONS(197),
    [anon_sym_DOT2] = ACTIONS(197),
    [sym__hashfn_reader_macro_char] = ACTIONS(195),
    [sym__quote_reader_macro_char] = ACTIONS(195),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(195),
    [sym__unquote_reader_macro_char] = ACTIONS(195),
    [sym___colon_string_start_mark] = ACTIONS(203),
  },
  [15] = {
    [sym__sexp] = STATE(44),
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
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(44),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(44),
    [sym__special_override_symbol] = STATE(44),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(205),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [16] = {
    [sym__sexp] = STATE(43),
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
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(43),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(43),
    [sym__special_override_symbol] = STATE(43),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(207),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [17] = {
    [sym__sexp] = STATE(41),
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
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(41),
    [sym__special_override_symbol] = STATE(41),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(209),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
  [18] = {
    [sym__sexp] = STATE(27),
    [sym_hashfn_reader_macro] = STATE(27),
    [sym_quote_reader_macro] = STATE(27),
    [sym_quasi_quote_reader_macro] = STATE(27),
    [sym_unquote_reader_macro] = STATE(27),
    [sym__reader_macro] = STATE(27),
    [sym_list] = STATE(27),
    [sym_sequence] = STATE(27),
    [sym_table] = STATE(27),
    [sym__literal] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym__colon_string] = STATE(38),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(27),
    [sym_multi_symbol] = STATE(24),
    [sym_multi_symbol_method] = STATE(27),
    [sym__special_override_symbol] = STATE(27),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(211),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(211),
    [anon_sym_POUND2] = ACTIONS(23),
    [anon_sym_QMARK_DOT2] = ACTIONS(23),
    [anon_sym_TILDE_EQ2] = ACTIONS(23),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(23),
    [anon_sym_DOT_DOT2] = ACTIONS(25),
    [anon_sym_DOT2] = ACTIONS(25),
    [sym__hashfn_reader_macro_char] = ACTIONS(27),
    [sym__quote_reader_macro_char] = ACTIONS(29),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(31),
    [sym__unquote_reader_macro_char] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(215), 8,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(213), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON2,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [40] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_COLON2,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(222), 8,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(220), 17,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [82] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(19), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(230), 8,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(228), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON2,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 9,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym_DOT,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(232), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON2,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym___colon_string_end_mark,
    ACTIONS(238), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(236), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COLON2,
    ACTIONS(222), 8,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(220), 17,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym___colon_string_end_mark,
    ACTIONS(246), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(244), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(250), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(254), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(258), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(262), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(266), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(270), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(195), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(274), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(278), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(282), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(286), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(290), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(294), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(298), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(302), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(306), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(310), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(314), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(318), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(322), 18,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(328), 16,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(332), 15,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
      sym_symbol,
    ACTIONS(336), 15,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_QMARK_DOT2,
      anon_sym_TILDE_EQ2,
      anon_sym_DOLLAR_DOT_DOT_DOT2,
      anon_sym_DOT_DOT_DOT2,
  [1016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(338), 11,
      anon_sym_nil,
      anon_sym_true2,
      anon_sym_false2,
      anon_sym_POUND,
      anon_sym_QMARK_DOT,
      anon_sym_COLON2,
      anon_sym_DOLLAR_DOT_DOT_DOT,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      aux_sym__colon_string_token1,
  [1036] = 5,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(348), 1,
      sym_escape_sequence,
    STATE(51), 1,
      aux_sym__double_quote_string_repeat1,
  [1052] = 5,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(355), 1,
      sym_escape_sequence,
    STATE(51), 1,
      aux_sym__double_quote_string_repeat1,
  [1068] = 5,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(348), 1,
      sym_escape_sequence,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym__double_quote_string_repeat1,
  [1084] = 2,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1093] = 2,
    ACTIONS(342), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_symbol_immediate,
  [1109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym_symbol_immediate,
  [1116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_symbol_immediate,
  [1123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [1130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 40,
  [SMALL_STATE(21)] = 82,
  [SMALL_STATE(22)] = 122,
  [SMALL_STATE(23)] = 157,
  [SMALL_STATE(24)] = 193,
  [SMALL_STATE(25)] = 229,
  [SMALL_STATE(26)] = 265,
  [SMALL_STATE(27)] = 298,
  [SMALL_STATE(28)] = 331,
  [SMALL_STATE(29)] = 364,
  [SMALL_STATE(30)] = 397,
  [SMALL_STATE(31)] = 430,
  [SMALL_STATE(32)] = 463,
  [SMALL_STATE(33)] = 496,
  [SMALL_STATE(34)] = 529,
  [SMALL_STATE(35)] = 562,
  [SMALL_STATE(36)] = 595,
  [SMALL_STATE(37)] = 628,
  [SMALL_STATE(38)] = 661,
  [SMALL_STATE(39)] = 694,
  [SMALL_STATE(40)] = 727,
  [SMALL_STATE(41)] = 760,
  [SMALL_STATE(42)] = 793,
  [SMALL_STATE(43)] = 826,
  [SMALL_STATE(44)] = 859,
  [SMALL_STATE(45)] = 892,
  [SMALL_STATE(46)] = 925,
  [SMALL_STATE(47)] = 956,
  [SMALL_STATE(48)] = 986,
  [SMALL_STATE(49)] = 1016,
  [SMALL_STATE(50)] = 1036,
  [SMALL_STATE(51)] = 1052,
  [SMALL_STATE(52)] = 1068,
  [SMALL_STATE(53)] = 1084,
  [SMALL_STATE(54)] = 1093,
  [SMALL_STATE(55)] = 1102,
  [SMALL_STATE(56)] = 1109,
  [SMALL_STATE(57)] = 1116,
  [SMALL_STATE(58)] = 1123,
  [SMALL_STATE(59)] = 1130,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(46),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(34),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(14),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(52),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(32),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(32),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(18),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(17),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(16),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(20),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(7),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(8),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(13),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(34),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(14),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(52),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(32),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(32),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(15),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(18),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(17),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(16),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 12),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 1, .production_id = 8),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbol, 1, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbol, 1, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 23),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 23),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 23), SHIFT_REPEAT(56),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 11),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 11),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 22),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 22),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 3, .production_id = 19),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 3, .production_id = 19),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 10),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 10),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 4, .production_id = 19),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 4, .production_id = 19),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -2, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -2, .production_id = 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 24),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 24),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 21),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 21),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 20),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 20),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 3, .production_id = 10),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 3, .production_id = 10),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 17),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 17),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -2, .production_id = 14),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -2, .production_id = 14),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 4),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 13),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 13),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(54),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(53),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [368] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__hashfn_reader_macro_char = 0,
  ts_external_token__quote_reader_macro_char = 1,
  ts_external_token__quasi_quote_reader_macro_char = 2,
  ts_external_token__unquote_reader_macro_char = 3,
  ts_external_token___reader_macro_count = 4,
  ts_external_token___colon_string_start_mark = 5,
  ts_external_token___colon_string_end_mark = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__hashfn_reader_macro_char] = sym__hashfn_reader_macro_char,
  [ts_external_token__quote_reader_macro_char] = sym__quote_reader_macro_char,
  [ts_external_token__quasi_quote_reader_macro_char] = sym__quasi_quote_reader_macro_char,
  [ts_external_token__unquote_reader_macro_char] = sym__unquote_reader_macro_char,
  [ts_external_token___reader_macro_count] = sym___reader_macro_count,
  [ts_external_token___colon_string_start_mark] = sym___colon_string_start_mark,
  [ts_external_token___colon_string_end_mark] = sym___colon_string_end_mark,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
    [ts_external_token___reader_macro_count] = true,
    [ts_external_token___colon_string_start_mark] = true,
    [ts_external_token___colon_string_end_mark] = true,
  },
  [2] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
  },
  [3] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
    [ts_external_token___colon_string_start_mark] = true,
  },
  [4] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
    [ts_external_token___colon_string_end_mark] = true,
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
