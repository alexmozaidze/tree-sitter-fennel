#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 8
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
  anon_sym_local = 7,
  anon_sym_var = 8,
  anon_sym_set = 9,
  anon_sym_global = 10,
  anon_sym_let = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym_nil = 14,
  anon_sym_true = 15,
  anon_sym_false = 16,
  anon_sym_COLON = 17,
  anon_sym_nil = 18,
  anon_sym_true2 = 19,
  anon_sym_false2 = 20,
  anon_sym_POUND = 21,
  anon_sym_QMARK_DOT = 22,
  anon_sym_TILDE_EQ = 23,
  anon_sym_COLON2 = 24,
  anon_sym_DOLLAR_DOT_DOT_DOT = 25,
  anon_sym_DOT_DOT_DOT = 26,
  anon_sym_DOT_DOT = 27,
  anon_sym_DOT = 28,
  aux_sym__colon_string_token1 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym__double_quote_string_token1 = 31,
  sym_escape_sequence = 32,
  sym_number = 33,
  sym_symbol_option = 34,
  aux_sym__multi_symbol_fragment_token1 = 35,
  anon_sym_POUND2 = 36,
  anon_sym_QMARK_DOT2 = 37,
  anon_sym_TILDE_EQ2 = 38,
  anon_sym_DOLLAR_DOT_DOT_DOT2 = 39,
  anon_sym_DOT_DOT_DOT2 = 40,
  anon_sym_DOT_DOT2 = 41,
  anon_sym_DOT2 = 42,
  sym__hashfn_reader_macro_char = 43,
  sym__quote_reader_macro_char = 44,
  sym__quasi_quote_reader_macro_char = 45,
  sym__unquote_reader_macro_char = 46,
  sym___reader_macro_count = 47,
  sym___colon_string_start_mark = 48,
  sym___colon_string_end_mark = 49,
  sym_shebang = 50,
  sym_program = 51,
  sym__sexp = 52,
  sym_hashfn_reader_macro = 53,
  sym_quote_reader_macro = 54,
  sym_quasi_quote_reader_macro = 55,
  sym_unquote_reader_macro = 56,
  sym__reader_macro = 57,
  sym__list_content = 58,
  sym_list = 59,
  sym_sequence = 60,
  sym__table_pair = 61,
  sym_table = 62,
  sym__literal = 63,
  sym_boolean = 64,
  sym__colon_string = 65,
  sym__double_quote_string = 66,
  sym_string = 67,
  sym_multi_symbol = 68,
  sym_multi_symbol_method = 69,
  sym__multi_symbol_fragment = 70,
  sym__special_override_symbol = 71,
  aux_sym_program_repeat1 = 72,
  aux_sym__list_content_repeat1 = 73,
  aux_sym_table_repeat1 = 74,
  aux_sym__double_quote_string_repeat1 = 75,
  aux_sym_multi_symbol_repeat1 = 76,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_local] = "local",
  [anon_sym_var] = "var",
  [anon_sym_set] = "set",
  [anon_sym_global] = "global",
  [anon_sym_let] = "symbol",
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
  [sym_symbol_option] = "symbol_option",
  [aux_sym__multi_symbol_fragment_token1] = "symbol_fragment",
  [anon_sym_POUND2] = "symbol",
  [anon_sym_QMARK_DOT2] = "symbol",
  [anon_sym_TILDE_EQ2] = "symbol",
  [anon_sym_DOLLAR_DOT_DOT_DOT2] = "symbol",
  [anon_sym_DOT_DOT_DOT2] = "symbol",
  [anon_sym_DOT_DOT2] = "symbol",
  [anon_sym_DOT2] = "symbol",
  [sym__hashfn_reader_macro_char] = "#",
  [sym__quote_reader_macro_char] = "'",
  [sym__quasi_quote_reader_macro_char] = "`",
  [sym__unquote_reader_macro_char] = ",",
  [sym___reader_macro_count] = "__reader_macro_count",
  [sym___colon_string_start_mark] = "__colon_string_start_mark",
  [sym___colon_string_end_mark] = "__colon_string_end_mark",
  [sym_shebang] = "shebang",
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
  [sym__multi_symbol_fragment] = "_multi_symbol_fragment",
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
  [anon_sym_local] = anon_sym_local,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_let] = sym_symbol,
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
  [sym_symbol_option] = sym_symbol_option,
  [aux_sym__multi_symbol_fragment_token1] = aux_sym__multi_symbol_fragment_token1,
  [anon_sym_POUND2] = sym_symbol,
  [anon_sym_QMARK_DOT2] = sym_symbol,
  [anon_sym_TILDE_EQ2] = sym_symbol,
  [anon_sym_DOLLAR_DOT_DOT_DOT2] = sym_symbol,
  [anon_sym_DOT_DOT_DOT2] = sym_symbol,
  [anon_sym_DOT_DOT2] = sym_symbol,
  [anon_sym_DOT2] = sym_symbol,
  [sym__hashfn_reader_macro_char] = sym__hashfn_reader_macro_char,
  [sym__quote_reader_macro_char] = sym__quote_reader_macro_char,
  [sym__quasi_quote_reader_macro_char] = sym__quasi_quote_reader_macro_char,
  [sym__unquote_reader_macro_char] = sym__unquote_reader_macro_char,
  [sym___reader_macro_count] = sym___reader_macro_count,
  [sym___colon_string_start_mark] = sym___colon_string_start_mark,
  [sym___colon_string_end_mark] = sym___colon_string_end_mark,
  [sym_shebang] = sym_shebang,
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
  [sym__multi_symbol_fragment] = sym__multi_symbol_fragment,
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
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = true,
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
  [sym_symbol_option] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__multi_symbol_fragment_token1] = {
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
  [sym_shebang] = {
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
  [sym__multi_symbol_fragment] = {
    .visible = false,
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
    [0] = aux_sym__multi_symbol_fragment_token1,
  },
  [19] = {
    [2] = anon_sym_nil,
  },
  [20] = {
    [1] = anon_sym_nil,
  },
  [21] = {
    [0] = aux_sym__multi_symbol_fragment_token1,
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
  [60] = 60,
  [61] = 61,
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

static inline bool aux_sym__multi_symbol_fragment_token1_character_set_1(int32_t c) {
  return (c < '@'
    ? (c < ','
      ? (c < '"'
        ? c == 0
        : (c <= '"' || (c >= '\'' && c <= ')')))
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
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '?') ADVANCE(141);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '~') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(176);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (!aux_sym__multi_symbol_fragment_token1_character_set_1(lookahead)) ADVANCE(172);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 23:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(144);
      if (lookahead == '&') ADVANCE(138);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(171);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(144);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(171);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(144);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(171);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '$') ADVANCE(144);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(171);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '~') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(106);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(120);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_nil);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_nil);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_nil);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_true2);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true2);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true2);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_false2);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false2);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false2);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON2);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(62);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(64);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(79);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == ':') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(73);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(55);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'a') ADVANCE(90);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(48);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'e') ADVANCE(51);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'i') ADVANCE(91);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(95);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'l') ADVANCE(45);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'r') ADVANCE(97);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 's') ADVANCE(85);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'u') ADVANCE(84);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(104);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(103);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(117);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(108);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(113);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == ';') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_symbol_option);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(5);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(127);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(54);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(174);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(6);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(153);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(156);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(47);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(50);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(40);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(41);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(154);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(155);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(159);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(44);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(39);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(160);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(162);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(163);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(148);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(150);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(164);
      if (lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(121);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(147);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(149);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(20);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__multi_symbol_fragment_token1);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ2);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOT_DOT2);
      if (lookahead == '.') ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (lookahead == '.') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
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
      if (lookahead == 'g') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead == 'v') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 25, .external_lex_state = 2},
  [2] = {.lex_state = 25, .external_lex_state = 3},
  [3] = {.lex_state = 25, .external_lex_state = 3},
  [4] = {.lex_state = 25, .external_lex_state = 3},
  [5] = {.lex_state = 25, .external_lex_state = 3},
  [6] = {.lex_state = 25, .external_lex_state = 3},
  [7] = {.lex_state = 25, .external_lex_state = 3},
  [8] = {.lex_state = 25, .external_lex_state = 3},
  [9] = {.lex_state = 25, .external_lex_state = 3},
  [10] = {.lex_state = 25, .external_lex_state = 3},
  [11] = {.lex_state = 25, .external_lex_state = 3},
  [12] = {.lex_state = 25, .external_lex_state = 3},
  [13] = {.lex_state = 25, .external_lex_state = 3},
  [14] = {.lex_state = 25, .external_lex_state = 3},
  [15] = {.lex_state = 25, .external_lex_state = 3},
  [16] = {.lex_state = 25, .external_lex_state = 3},
  [17] = {.lex_state = 27, .external_lex_state = 4},
  [18] = {.lex_state = 25, .external_lex_state = 3},
  [19] = {.lex_state = 25, .external_lex_state = 3},
  [20] = {.lex_state = 25, .external_lex_state = 3},
  [21] = {.lex_state = 26, .external_lex_state = 3},
  [22] = {.lex_state = 26, .external_lex_state = 3},
  [23] = {.lex_state = 26, .external_lex_state = 3},
  [24] = {.lex_state = 26, .external_lex_state = 3},
  [25] = {.lex_state = 25, .external_lex_state = 5},
  [26] = {.lex_state = 24, .external_lex_state = 3},
  [27] = {.lex_state = 25, .external_lex_state = 5},
  [28] = {.lex_state = 25, .external_lex_state = 3},
  [29] = {.lex_state = 25, .external_lex_state = 3},
  [30] = {.lex_state = 25, .external_lex_state = 3},
  [31] = {.lex_state = 25, .external_lex_state = 3},
  [32] = {.lex_state = 25, .external_lex_state = 3},
  [33] = {.lex_state = 25, .external_lex_state = 3},
  [34] = {.lex_state = 25, .external_lex_state = 3},
  [35] = {.lex_state = 25, .external_lex_state = 3},
  [36] = {.lex_state = 25, .external_lex_state = 3},
  [37] = {.lex_state = 25, .external_lex_state = 3},
  [38] = {.lex_state = 25, .external_lex_state = 3},
  [39] = {.lex_state = 25, .external_lex_state = 3},
  [40] = {.lex_state = 25, .external_lex_state = 3},
  [41] = {.lex_state = 25, .external_lex_state = 3},
  [42] = {.lex_state = 25, .external_lex_state = 3},
  [43] = {.lex_state = 25, .external_lex_state = 3},
  [44] = {.lex_state = 25, .external_lex_state = 3},
  [45] = {.lex_state = 25, .external_lex_state = 3},
  [46] = {.lex_state = 25, .external_lex_state = 3},
  [47] = {.lex_state = 25, .external_lex_state = 3},
  [48] = {.lex_state = 25, .external_lex_state = 3},
  [49] = {.lex_state = 25, .external_lex_state = 3},
  [50] = {.lex_state = 25, .external_lex_state = 3},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
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
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_symbol_option] = ACTIONS(1),
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
    [sym_shebang] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(60),
    [sym__sexp] = STATE(13),
    [sym_hashfn_reader_macro] = STATE(13),
    [sym_quote_reader_macro] = STATE(13),
    [sym_quasi_quote_reader_macro] = STATE(13),
    [sym_unquote_reader_macro] = STATE(13),
    [sym__reader_macro] = STATE(13),
    [sym_list] = STATE(13),
    [sym_sequence] = STATE(13),
    [sym_table] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(13),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(13),
    [sym__special_override_symbol] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
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
    [sym_shebang] = ACTIONS(35),
  },
  [2] = {
    [sym__sexp] = STATE(15),
    [sym_hashfn_reader_macro] = STATE(15),
    [sym_quote_reader_macro] = STATE(15),
    [sym_quasi_quote_reader_macro] = STATE(15),
    [sym_unquote_reader_macro] = STATE(15),
    [sym__reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym__table_pair] = STATE(50),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(15),
    [sym__special_override_symbol] = STATE(15),
    [aux_sym_table_repeat1] = STATE(3),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(37),
    [sym_nil] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(39),
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
    [sym__sexp] = STATE(15),
    [sym_hashfn_reader_macro] = STATE(15),
    [sym_quote_reader_macro] = STATE(15),
    [sym_quasi_quote_reader_macro] = STATE(15),
    [sym_unquote_reader_macro] = STATE(15),
    [sym__reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym__table_pair] = STATE(50),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(15),
    [sym__special_override_symbol] = STATE(15),
    [aux_sym_table_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(41),
    [sym_nil] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(39),
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
    [sym__sexp] = STATE(48),
    [sym_hashfn_reader_macro] = STATE(48),
    [sym_quote_reader_macro] = STATE(48),
    [sym_quasi_quote_reader_macro] = STATE(48),
    [sym_unquote_reader_macro] = STATE(48),
    [sym__reader_macro] = STATE(48),
    [sym_list] = STATE(48),
    [sym_sequence] = STATE(48),
    [sym_table] = STATE(48),
    [sym__literal] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(48),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(48),
    [sym__special_override_symbol] = STATE(48),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(54),
    [sym_nil] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(60),
    [anon_sym_false] = ACTIONS(60),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(66),
    [sym_number] = ACTIONS(57),
    [anon_sym_POUND2] = ACTIONS(69),
    [anon_sym_QMARK_DOT2] = ACTIONS(69),
    [anon_sym_TILDE_EQ2] = ACTIONS(69),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(69),
    [anon_sym_DOT_DOT2] = ACTIONS(72),
    [anon_sym_DOT2] = ACTIONS(72),
    [sym__hashfn_reader_macro_char] = ACTIONS(75),
    [sym__quote_reader_macro_char] = ACTIONS(78),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(81),
    [sym__unquote_reader_macro_char] = ACTIONS(84),
  },
  [5] = {
    [sym__sexp] = STATE(15),
    [sym_hashfn_reader_macro] = STATE(15),
    [sym_quote_reader_macro] = STATE(15),
    [sym_quasi_quote_reader_macro] = STATE(15),
    [sym_unquote_reader_macro] = STATE(15),
    [sym__reader_macro] = STATE(15),
    [sym_list] = STATE(15),
    [sym_sequence] = STATE(15),
    [sym__table_pair] = STATE(50),
    [sym_table] = STATE(15),
    [sym__literal] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(15),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(15),
    [sym__special_override_symbol] = STATE(15),
    [aux_sym_table_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym_nil] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(101),
    [anon_sym_POUND2] = ACTIONS(113),
    [anon_sym_QMARK_DOT2] = ACTIONS(113),
    [anon_sym_TILDE_EQ2] = ACTIONS(113),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(113),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(113),
    [anon_sym_DOT_DOT2] = ACTIONS(116),
    [anon_sym_DOT2] = ACTIONS(116),
    [sym__hashfn_reader_macro_char] = ACTIONS(119),
    [sym__quote_reader_macro_char] = ACTIONS(122),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(125),
    [sym__unquote_reader_macro_char] = ACTIONS(128),
  },
  [6] = {
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
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(6),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(6),
    [sym__special_override_symbol] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_symbol] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(142),
    [sym_nil] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(148),
    [anon_sym_false] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [sym_number] = ACTIONS(145),
    [anon_sym_POUND2] = ACTIONS(157),
    [anon_sym_QMARK_DOT2] = ACTIONS(157),
    [anon_sym_TILDE_EQ2] = ACTIONS(157),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(157),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(157),
    [anon_sym_DOT_DOT2] = ACTIONS(160),
    [anon_sym_DOT2] = ACTIONS(160),
    [sym__hashfn_reader_macro_char] = ACTIONS(163),
    [sym__quote_reader_macro_char] = ACTIONS(166),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(169),
    [sym__unquote_reader_macro_char] = ACTIONS(172),
  },
  [7] = {
    [sym__sexp] = STATE(10),
    [sym_hashfn_reader_macro] = STATE(10),
    [sym_quote_reader_macro] = STATE(10),
    [sym_quasi_quote_reader_macro] = STATE(10),
    [sym_unquote_reader_macro] = STATE(10),
    [sym__reader_macro] = STATE(10),
    [sym__list_content] = STATE(61),
    [sym_list] = STATE(10),
    [sym_sequence] = STATE(10),
    [sym_table] = STATE(10),
    [sym__literal] = STATE(10),
    [sym_boolean] = STATE(10),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(10),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(10),
    [sym__special_override_symbol] = STATE(10),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(177),
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
    [sym__sexp] = STATE(48),
    [sym_hashfn_reader_macro] = STATE(48),
    [sym_quote_reader_macro] = STATE(48),
    [sym_quasi_quote_reader_macro] = STATE(48),
    [sym_unquote_reader_macro] = STATE(48),
    [sym__reader_macro] = STATE(48),
    [sym_list] = STATE(48),
    [sym_sequence] = STATE(48),
    [sym_table] = STATE(48),
    [sym__literal] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(48),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(48),
    [sym__special_override_symbol] = STATE(48),
    [aux_sym__list_content_repeat1] = STATE(9),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(181),
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
    [sym__sexp] = STATE(48),
    [sym_hashfn_reader_macro] = STATE(48),
    [sym_quote_reader_macro] = STATE(48),
    [sym_quasi_quote_reader_macro] = STATE(48),
    [sym_unquote_reader_macro] = STATE(48),
    [sym__reader_macro] = STATE(48),
    [sym_list] = STATE(48),
    [sym_sequence] = STATE(48),
    [sym_table] = STATE(48),
    [sym__literal] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(48),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(48),
    [sym__special_override_symbol] = STATE(48),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(181),
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
    [sym__sexp] = STATE(48),
    [sym_hashfn_reader_macro] = STATE(48),
    [sym_quote_reader_macro] = STATE(48),
    [sym_quasi_quote_reader_macro] = STATE(48),
    [sym_unquote_reader_macro] = STATE(48),
    [sym__reader_macro] = STATE(48),
    [sym_list] = STATE(48),
    [sym_sequence] = STATE(48),
    [sym_table] = STATE(48),
    [sym__literal] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(48),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(48),
    [sym__special_override_symbol] = STATE(48),
    [aux_sym__list_content_repeat1] = STATE(14),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(181),
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
  [11] = {
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
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(6),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(6),
    [sym__special_override_symbol] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(189),
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
    [sym__sexp] = STATE(11),
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
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(11),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(11),
    [sym__special_override_symbol] = STATE(11),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
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
  [13] = {
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
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(6),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(6),
    [sym__special_override_symbol] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(189),
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
    [sym__sexp] = STATE(48),
    [sym_hashfn_reader_macro] = STATE(48),
    [sym_quote_reader_macro] = STATE(48),
    [sym_quasi_quote_reader_macro] = STATE(48),
    [sym_unquote_reader_macro] = STATE(48),
    [sym__reader_macro] = STATE(48),
    [sym_list] = STATE(48),
    [sym_sequence] = STATE(48),
    [sym_table] = STATE(48),
    [sym__literal] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(48),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(48),
    [sym__special_override_symbol] = STATE(48),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(181),
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
  [15] = {
    [sym__sexp] = STATE(49),
    [sym_hashfn_reader_macro] = STATE(49),
    [sym_quote_reader_macro] = STATE(49),
    [sym_quasi_quote_reader_macro] = STATE(49),
    [sym_unquote_reader_macro] = STATE(49),
    [sym__reader_macro] = STATE(49),
    [sym_list] = STATE(49),
    [sym_sequence] = STATE(49),
    [sym_table] = STATE(49),
    [sym__literal] = STATE(49),
    [sym_boolean] = STATE(49),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(49),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(49),
    [sym__special_override_symbol] = STATE(49),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym_nil] = ACTIONS(199),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(199),
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
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(46),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(46),
    [sym__special_override_symbol] = STATE(46),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(201),
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
    [ts_builtin_sym_end] = ACTIONS(203),
    [sym_symbol] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [sym_nil] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(205),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_nil] = ACTIONS(207),
    [anon_sym_true2] = ACTIONS(207),
    [anon_sym_false2] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(207),
    [anon_sym_QMARK_DOT] = ACTIONS(207),
    [anon_sym_TILDE_EQ] = ACTIONS(209),
    [anon_sym_COLON2] = ACTIONS(207),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [aux_sym__colon_string_token1] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [sym_number] = ACTIONS(205),
    [anon_sym_POUND2] = ACTIONS(205),
    [anon_sym_QMARK_DOT2] = ACTIONS(205),
    [anon_sym_TILDE_EQ2] = ACTIONS(205),
    [anon_sym_DOLLAR_DOT_DOT_DOT2] = ACTIONS(205),
    [anon_sym_DOT_DOT_DOT2] = ACTIONS(205),
    [anon_sym_DOT_DOT2] = ACTIONS(205),
    [anon_sym_DOT2] = ACTIONS(205),
    [sym__hashfn_reader_macro_char] = ACTIONS(203),
    [sym__quote_reader_macro_char] = ACTIONS(203),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(203),
    [sym__unquote_reader_macro_char] = ACTIONS(203),
    [sym___colon_string_start_mark] = ACTIONS(211),
  },
  [18] = {
    [sym__sexp] = STATE(42),
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
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(42),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(42),
    [sym__special_override_symbol] = STATE(42),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(213),
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
  [19] = {
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
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(43),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(43),
    [sym__special_override_symbol] = STATE(43),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(215),
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
  [20] = {
    [sym__sexp] = STATE(29),
    [sym_hashfn_reader_macro] = STATE(29),
    [sym_quote_reader_macro] = STATE(29),
    [sym_quasi_quote_reader_macro] = STATE(29),
    [sym_unquote_reader_macro] = STATE(29),
    [sym__reader_macro] = STATE(29),
    [sym_list] = STATE(29),
    [sym_sequence] = STATE(29),
    [sym_table] = STATE(29),
    [sym__literal] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym__colon_string] = STATE(28),
    [sym__double_quote_string] = STATE(40),
    [sym_string] = STATE(29),
    [sym_multi_symbol] = STATE(26),
    [sym_multi_symbol_method] = STATE(29),
    [sym__special_override_symbol] = STATE(29),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(217),
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
    ACTIONS(223), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(221), 8,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(219), 18,
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
  [40] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(227), 8,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(225), 18,
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
  [80] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_COLON2,
    STATE(21), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(234), 8,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(232), 17,
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
  [122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 9,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      anon_sym_DOT,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(238), 18,
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
    ACTIONS(246), 1,
      sym___colon_string_end_mark,
    ACTIONS(244), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(242), 18,
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
    ACTIONS(248), 1,
      anon_sym_COLON2,
    ACTIONS(234), 8,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_COLON,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(232), 17,
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
    ACTIONS(254), 1,
      sym___colon_string_end_mark,
    ACTIONS(252), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
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
  [265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(256), 18,
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
    ACTIONS(262), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(260), 18,
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
    ACTIONS(266), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(264), 18,
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
    ACTIONS(270), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(268), 18,
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
    ACTIONS(274), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(272), 18,
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
    ACTIONS(278), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(276), 18,
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
    ACTIONS(205), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(203), 18,
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
    ACTIONS(282), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(280), 18,
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
    ACTIONS(286), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(284), 18,
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
    ACTIONS(290), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(288), 18,
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
    ACTIONS(294), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(292), 18,
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
    ACTIONS(298), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(296), 18,
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
    ACTIONS(302), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(300), 18,
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
    ACTIONS(306), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(304), 18,
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
    ACTIONS(310), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(308), 18,
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
    ACTIONS(314), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(312), 18,
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
    ACTIONS(318), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(316), 18,
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
    ACTIONS(322), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(320), 18,
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
    ACTIONS(326), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(324), 18,
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
    ACTIONS(330), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(328), 18,
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
    ACTIONS(332), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(334), 16,
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
    ACTIONS(336), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(338), 15,
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
    ACTIONS(340), 7,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
      anon_sym_DOT_DOT2,
      anon_sym_DOT2,
    ACTIONS(342), 15,
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
    ACTIONS(346), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(344), 11,
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
    ACTIONS(348), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(354), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym__double_quote_string_repeat1,
  [1052] = 5,
    ACTIONS(348), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(361), 1,
      sym_escape_sequence,
    STATE(53), 1,
      aux_sym__double_quote_string_repeat1,
  [1068] = 5,
    ACTIONS(348), 1,
      sym_comment,
    ACTIONS(352), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(354), 1,
      sym_escape_sequence,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym__double_quote_string_repeat1,
  [1084] = 2,
    ACTIONS(348), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1093] = 2,
    ACTIONS(348), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__multi_symbol_fragment_token1,
    STATE(32), 1,
      sym__multi_symbol_fragment,
  [1112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym__multi_symbol_fragment_token1,
    STATE(24), 1,
      sym__multi_symbol_fragment,
  [1122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym__multi_symbol_fragment_token1,
    STATE(35), 1,
      sym__multi_symbol_fragment,
  [1132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 40,
  [SMALL_STATE(23)] = 80,
  [SMALL_STATE(24)] = 122,
  [SMALL_STATE(25)] = 157,
  [SMALL_STATE(26)] = 193,
  [SMALL_STATE(27)] = 229,
  [SMALL_STATE(28)] = 265,
  [SMALL_STATE(29)] = 298,
  [SMALL_STATE(30)] = 331,
  [SMALL_STATE(31)] = 364,
  [SMALL_STATE(32)] = 397,
  [SMALL_STATE(33)] = 430,
  [SMALL_STATE(34)] = 463,
  [SMALL_STATE(35)] = 496,
  [SMALL_STATE(36)] = 529,
  [SMALL_STATE(37)] = 562,
  [SMALL_STATE(38)] = 595,
  [SMALL_STATE(39)] = 628,
  [SMALL_STATE(40)] = 661,
  [SMALL_STATE(41)] = 694,
  [SMALL_STATE(42)] = 727,
  [SMALL_STATE(43)] = 760,
  [SMALL_STATE(44)] = 793,
  [SMALL_STATE(45)] = 826,
  [SMALL_STATE(46)] = 859,
  [SMALL_STATE(47)] = 892,
  [SMALL_STATE(48)] = 925,
  [SMALL_STATE(49)] = 956,
  [SMALL_STATE(50)] = 986,
  [SMALL_STATE(51)] = 1016,
  [SMALL_STATE(52)] = 1036,
  [SMALL_STATE(53)] = 1052,
  [SMALL_STATE(54)] = 1068,
  [SMALL_STATE(55)] = 1084,
  [SMALL_STATE(56)] = 1093,
  [SMALL_STATE(57)] = 1102,
  [SMALL_STATE(58)] = 1112,
  [SMALL_STATE(59)] = 1122,
  [SMALL_STATE(60)] = 1132,
  [SMALL_STATE(61)] = 1139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(23),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(8),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(48),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(36),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(17),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(54),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(34),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(34),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(18),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(16),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(20),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 15), SHIFT_REPEAT(19),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(23),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(7),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(8),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(15),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(36),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(17),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(54),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(34),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(34),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(18),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(16),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(20),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 18), SHIFT_REPEAT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(54),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 12),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 1, .production_id = 8),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbol, 1, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbol, 1, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 11),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 11),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 23),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 23),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 23), SHIFT_REPEAT(58),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 22),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 22),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 10),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 10),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 3, .production_id = 19),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 3, .production_id = 19),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 4, .production_id = 19),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 4, .production_id = 19),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -2, .production_id = 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -2, .production_id = 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 24),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 24),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 21),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 21),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 20),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 20),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 3, .production_id = 10),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 3, .production_id = 10),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 17),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 17),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -2, .production_id = 14),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -2, .production_id = 14),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 13),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 13),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 2, .production_id = 16),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(56),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(55),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [374] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__hashfn_reader_macro_char = 0,
  ts_external_token__quote_reader_macro_char = 1,
  ts_external_token__quasi_quote_reader_macro_char = 2,
  ts_external_token__unquote_reader_macro_char = 3,
  ts_external_token___reader_macro_count = 4,
  ts_external_token___colon_string_start_mark = 5,
  ts_external_token___colon_string_end_mark = 6,
  ts_external_token_shebang = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__hashfn_reader_macro_char] = sym__hashfn_reader_macro_char,
  [ts_external_token__quote_reader_macro_char] = sym__quote_reader_macro_char,
  [ts_external_token__quasi_quote_reader_macro_char] = sym__quasi_quote_reader_macro_char,
  [ts_external_token__unquote_reader_macro_char] = sym__unquote_reader_macro_char,
  [ts_external_token___reader_macro_count] = sym___reader_macro_count,
  [ts_external_token___colon_string_start_mark] = sym___colon_string_start_mark,
  [ts_external_token___colon_string_end_mark] = sym___colon_string_end_mark,
  [ts_external_token_shebang] = sym_shebang,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
    [ts_external_token___reader_macro_count] = true,
    [ts_external_token___colon_string_start_mark] = true,
    [ts_external_token___colon_string_end_mark] = true,
    [ts_external_token_shebang] = true,
  },
  [2] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
    [ts_external_token_shebang] = true,
  },
  [3] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
  },
  [4] = {
    [ts_external_token__hashfn_reader_macro_char] = true,
    [ts_external_token__quote_reader_macro_char] = true,
    [ts_external_token__quasi_quote_reader_macro_char] = true,
    [ts_external_token__unquote_reader_macro_char] = true,
    [ts_external_token___colon_string_start_mark] = true,
  },
  [5] = {
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
