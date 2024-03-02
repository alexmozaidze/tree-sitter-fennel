#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 36

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
  sym__gap = 30,
  sym__sexp = 31,
  sym__special_override_symbols = 32,
  sym__reader_macro_char = 33,
  sym_reader_macro = 34,
  sym__list_content = 35,
  sym_list = 36,
  sym__form_content = 37,
  sym__form = 38,
  sym_sequence = 39,
  sym__table_pair = 40,
  sym_table = 41,
  sym__literal = 42,
  sym__colon_string = 43,
  sym__double_quote_string = 44,
  sym_string = 45,
  sym_multi_symbol = 46,
  sym_multi_symbol_method = 47,
  aux_sym_program_repeat1 = 48,
  aux_sym__list_content_repeat1 = 49,
  aux_sym__list_content_repeat2 = 50,
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
  [sym__gap] = "_gap",
  [sym__sexp] = "_sexp",
  [sym__special_override_symbols] = "_special_override_symbols",
  [sym__reader_macro_char] = "_reader_macro_char",
  [sym_reader_macro] = "reader_macro",
  [sym__list_content] = "_list_content",
  [sym_list] = "list",
  [sym__form_content] = "_form_content",
  [sym__form] = "_form",
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
  [aux_sym__list_content_repeat2] = "_list_content_repeat2",
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
  [sym__gap] = sym__gap,
  [sym__sexp] = sym__sexp,
  [sym__special_override_symbols] = sym__special_override_symbols,
  [sym__reader_macro_char] = sym__reader_macro_char,
  [sym_reader_macro] = sym_reader_macro,
  [sym__list_content] = sym__list_content,
  [sym_list] = sym_list,
  [sym__form_content] = sym__form_content,
  [sym__form] = sym__form,
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
  [aux_sym__list_content_repeat2] = aux_sym__list_content_repeat2,
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
  [sym__form_content] = {
    .visible = false,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
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
  [aux_sym__list_content_repeat2] = {
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
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 1},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 3},
  [12] = {.index = 23, .length = 4},
  [13] = {.index = 27, .length = 2},
  [14] = {.index = 29, .length = 4},
  [15] = {.index = 33, .length = 4},
  [16] = {.index = 37, .length = 6},
  [17] = {.index = 43, .length = 6},
  [18] = {.index = 49, .length = 2},
  [19] = {.index = 51, .length = 4},
  [20] = {.index = 55, .length = 3},
  [21] = {.index = 58, .length = 1},
  [22] = {.index = 59, .length = 5},
  [23] = {.index = 64, .length = 6},
  [24] = {.index = 70, .length = 6},
  [25] = {.index = 76, .length = 8},
  [26] = {.index = 84, .length = 3},
  [27] = {.index = 87, .length = 1},
  [28] = {.index = 88, .length = 2},
  [29] = {.index = 90, .length = 2},
  [30] = {.index = 92, .length = 2},
  [31] = {.index = 90, .length = 2},
  [32] = {.index = 94, .length = 6},
  [33] = {.index = 100, .length = 4},
  [34] = {.index = 104, .length = 6},
  [35] = {.index = 110, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [2] =
    {field_content, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [4] =
    {field_close, 0, .inherited = true},
    {field_content, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [7] =
    {field_close, 1, .inherited = true},
    {field_open, 1, .inherited = true},
  [9] =
    {field_content, 1},
    {field_open, 0},
  [11] =
    {field_close, 1},
    {field_open, 0},
  [13] =
    {field_call, 0},
    {field_close, 0, .inherited = true},
    {field_open, 0, .inherited = true},
  [16] =
    {field_call, 0},
  [17] =
    {field_close, 0, .inherited = true},
    {field_item, 0},
    {field_open, 0, .inherited = true},
  [20] =
    {field_close, 0, .inherited = true},
    {field_key, 0},
    {field_open, 0, .inherited = true},
  [23] =
    {field_close, 0, .inherited = true},
    {field_key, 0, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [27] =
    {field_base, 0},
    {field_member, 1, .inherited = true},
  [29] =
    {field_close, 1, .inherited = true},
    {field_expression, 1},
    {field_macro, 0},
    {field_open, 1, .inherited = true},
  [33] =
    {field_close, 0, .inherited = true},
    {field_close, 1, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_open, 1, .inherited = true},
  [37] =
    {field_call, 0},
    {field_close, 0, .inherited = true},
    {field_close, 1, .inherited = true},
    {field_item, 1, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_open, 1, .inherited = true},
  [43] =
    {field_call, 1, .inherited = true},
    {field_close, 1, .inherited = true},
    {field_close, 2},
    {field_item, 1, .inherited = true},
    {field_open, 0},
    {field_open, 1, .inherited = true},
  [49] =
    {field_close, 2},
    {field_open, 0},
  [51] =
    {field_call, 0},
    {field_close, 1, .inherited = true},
    {field_item, 1, .inherited = true},
    {field_open, 1, .inherited = true},
  [55] =
    {field_call, 1},
    {field_close, 1, .inherited = true},
    {field_open, 1, .inherited = true},
  [58] =
    {field_call, 1},
  [59] =
    {field_close, 1, .inherited = true},
    {field_close, 2},
    {field_item, 1, .inherited = true},
    {field_open, 0},
    {field_open, 1, .inherited = true},
  [64] =
    {field_close, 0, .inherited = true},
    {field_close, 1, .inherited = true},
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_open, 1, .inherited = true},
  [70] =
    {field_close, 1, .inherited = true},
    {field_close, 2},
    {field_key, 1, .inherited = true},
    {field_open, 0},
    {field_open, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [76] =
    {field_close, 0, .inherited = true},
    {field_close, 1, .inherited = true},
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_open, 0, .inherited = true},
    {field_open, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [84] =
    {field_close, 2},
    {field_content, 1},
    {field_open, 0},
  [87] =
    {field_member, 1},
  [88] =
    {field_member, 0, .inherited = true},
    {field_member, 1, .inherited = true},
  [90] =
    {field_base, 0},
    {field_method, 2},
  [92] =
    {field_close, 3},
    {field_open, 0},
  [94] =
    {field_call, 1},
    {field_close, 1, .inherited = true},
    {field_close, 2, .inherited = true},
    {field_item, 2, .inherited = true},
    {field_open, 1, .inherited = true},
    {field_open, 2, .inherited = true},
  [100] =
    {field_call, 1},
    {field_close, 2, .inherited = true},
    {field_item, 2, .inherited = true},
    {field_open, 2, .inherited = true},
  [104] =
    {field_close, 0, .inherited = true},
    {field_close, 2, .inherited = true},
    {field_key, 0},
    {field_open, 0, .inherited = true},
    {field_open, 2, .inherited = true},
    {field_value, 2},
  [110] =
    {field_close, 4},
    {field_open, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_symbol,
  },
  [6] = {
    [1] = aux_sym__colon_string_token1,
  },
  [13] = {
    [0] = alias_sym_symbol_fragment,
  },
  [26] = {
    [1] = aux_sym__colon_string_token1,
  },
  [27] = {
    [1] = alias_sym_symbol_fragment,
  },
  [29] = {
    [0] = alias_sym_symbol_fragment,
    [2] = alias_sym_symbol_fragment,
  },
  [31] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 8,
  [11] = 5,
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
  [25] = 20,
  [26] = 12,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
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
  [56] = 32,
  [57] = 57,
  [58] = 34,
  [59] = 59,
  [60] = 60,
  [61] = 31,
  [62] = 33,
  [63] = 44,
  [64] = 47,
  [65] = 65,
  [66] = 48,
  [67] = 67,
  [68] = 50,
  [69] = 69,
  [70] = 70,
  [71] = 41,
  [72] = 52,
  [73] = 39,
  [74] = 35,
  [75] = 54,
  [76] = 40,
  [77] = 38,
  [78] = 42,
  [79] = 79,
  [80] = 49,
  [81] = 36,
  [82] = 43,
  [83] = 53,
  [84] = 84,
  [85] = 45,
  [86] = 46,
  [87] = 51,
  [88] = 37,
  [89] = 89,
  [90] = 55,
  [91] = 91,
  [92] = 92,
  [93] = 91,
  [94] = 94,
  [95] = 92,
  [96] = 89,
  [97] = 94,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 105,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 111,
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
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(28);
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
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(83);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
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
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(106);
      END_STATE();
    case 18:
      if (eof) ADVANCE(21);
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
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(100);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(106);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(27);
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
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(100);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(106);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
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
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == ']') ADVANCE(50);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '~') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(70);
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
      if (!aux_sym__colon_string_token1_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(23);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(39);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
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
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
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
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(37);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
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
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.') ADVANCE(59);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
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
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(81);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(77);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__colon_string_token1);
      if (!aux_sym__colon_string_token1_character_set_2(lookahead)) ADVANCE(81);
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
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
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
      if (lookahead == '.') ADVANCE(10);
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
      if (lookahead == '.') ADVANCE(12);
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
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 20},
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
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 19},
  [56] = {.lex_state = 20},
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
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
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
  },
  [1] = {
    [sym_program] = STATE(106),
    [sym__gap] = STATE(18),
    [sym__sexp] = STATE(69),
    [sym__special_override_symbols] = STATE(69),
    [sym__reader_macro_char] = STATE(29),
    [sym_reader_macro] = STATE(69),
    [sym_list] = STATE(69),
    [sym__form] = STATE(75),
    [sym_sequence] = STATE(69),
    [sym_table] = STATE(69),
    [sym__literal] = STATE(69),
    [sym__colon_string] = STATE(83),
    [sym__double_quote_string] = STATE(72),
    [sym_string] = STATE(69),
    [sym_multi_symbol] = STATE(69),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_symbol] = ACTIONS(5),
    [sym_shebang] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(9),
    [sym_comment] = ACTIONS(9),
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
    [sym__gap] = STATE(5),
    [sym__sexp] = STATE(23),
    [sym__special_override_symbols] = STATE(23),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(23),
    [sym__list_content] = STATE(105),
    [sym_list] = STATE(23),
    [sym__form_content] = STATE(96),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(23),
    [sym_table] = STATE(23),
    [sym__literal] = STATE(23),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(23),
    [sym_multi_symbol] = STATE(79),
    [sym_multi_symbol_method] = STATE(27),
    [aux_sym__list_content_repeat1] = STATE(5),
    [sym_symbol] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(57),
    [sym_boolean] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(57),
  },
  [3] = {
    [sym__gap] = STATE(11),
    [sym__sexp] = STATE(23),
    [sym__special_override_symbols] = STATE(23),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(23),
    [sym__list_content] = STATE(107),
    [sym_list] = STATE(23),
    [sym__form_content] = STATE(89),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(23),
    [sym_table] = STATE(23),
    [sym__literal] = STATE(23),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(23),
    [sym_multi_symbol] = STATE(79),
    [sym_multi_symbol_method] = STATE(27),
    [aux_sym__list_content_repeat1] = STATE(11),
    [sym_symbol] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(61),
    [sym_comment] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(57),
    [sym_boolean] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(57),
  },
  [4] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(59),
    [sym__special_override_symbols] = STATE(59),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(59),
    [sym_list] = STATE(59),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(59),
    [sym__table_pair] = STATE(84),
    [sym_table] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(59),
    [sym_multi_symbol] = STATE(59),
    [aux_sym_table_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(65),
    [sym__whitespace] = ACTIONS(68),
    [sym_comment] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_QMARK_DOT] = ACTIONS(74),
    [anon_sym_TILDE_EQ] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(74),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(74),
    [anon_sym_DOT_DOT] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_BQUOTE] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(98),
    [sym_nil] = ACTIONS(100),
    [sym_boolean] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [sym_number] = ACTIONS(100),
  },
  [5] = {
    [sym__gap] = STATE(55),
    [sym__sexp] = STATE(24),
    [sym__special_override_symbols] = STATE(24),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(24),
    [sym_list] = STATE(24),
    [sym__form_content] = STATE(95),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(24),
    [sym_table] = STATE(24),
    [sym__literal] = STATE(24),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(24),
    [sym_multi_symbol] = STATE(79),
    [sym_multi_symbol_method] = STATE(17),
    [aux_sym__list_content_repeat1] = STATE(55),
    [sym_symbol] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(108),
    [sym_boolean] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(108),
  },
  [6] = {
    [sym__gap] = STATE(6),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(6),
    [sym_symbol] = ACTIONS(110),
    [sym__whitespace] = ACTIONS(113),
    [sym_comment] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_QMARK_DOT] = ACTIONS(119),
    [anon_sym_TILDE_EQ] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(119),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(119),
    [anon_sym_DOT_DOT] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(142),
    [sym_nil] = ACTIONS(145),
    [sym_boolean] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [sym_number] = ACTIONS(145),
  },
  [7] = {
    [sym__gap] = STATE(10),
    [sym__sexp] = STATE(59),
    [sym__special_override_symbols] = STATE(59),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(59),
    [sym_list] = STATE(59),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(59),
    [sym__table_pair] = STATE(84),
    [sym_table] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(59),
    [sym_multi_symbol] = STATE(59),
    [aux_sym_table_repeat1] = STATE(10),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(153),
    [sym_comment] = ACTIONS(153),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(155),
    [sym_nil] = ACTIONS(157),
    [sym_boolean] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(157),
  },
  [8] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(59),
    [sym__special_override_symbols] = STATE(59),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(59),
    [sym_list] = STATE(59),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(59),
    [sym__table_pair] = STATE(84),
    [sym_table] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(59),
    [sym_multi_symbol] = STATE(59),
    [aux_sym_table_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(161),
    [sym_nil] = ACTIONS(157),
    [sym_boolean] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(157),
  },
  [9] = {
    [sym__gap] = STATE(8),
    [sym__sexp] = STATE(59),
    [sym__special_override_symbols] = STATE(59),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(59),
    [sym_list] = STATE(59),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(59),
    [sym__table_pair] = STATE(84),
    [sym_table] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(59),
    [sym_multi_symbol] = STATE(59),
    [aux_sym_table_repeat1] = STATE(8),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym_nil] = ACTIONS(157),
    [sym_boolean] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(157),
  },
  [10] = {
    [sym__gap] = STATE(4),
    [sym__sexp] = STATE(59),
    [sym__special_override_symbols] = STATE(59),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(59),
    [sym_list] = STATE(59),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(59),
    [sym__table_pair] = STATE(84),
    [sym_table] = STATE(59),
    [sym__literal] = STATE(59),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(59),
    [sym_multi_symbol] = STATE(59),
    [aux_sym_table_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(167),
    [sym_nil] = ACTIONS(157),
    [sym_boolean] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(157),
  },
  [11] = {
    [sym__gap] = STATE(55),
    [sym__sexp] = STATE(24),
    [sym__special_override_symbols] = STATE(24),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(24),
    [sym_list] = STATE(24),
    [sym__form_content] = STATE(92),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(24),
    [sym_table] = STATE(24),
    [sym__literal] = STATE(24),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(24),
    [sym_multi_symbol] = STATE(79),
    [sym_multi_symbol_method] = STATE(17),
    [aux_sym__list_content_repeat1] = STATE(55),
    [sym_symbol] = ACTIONS(33),
    [sym__whitespace] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(108),
    [sym_boolean] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(108),
  },
  [12] = {
    [sym__gap] = STATE(25),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(25),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(169),
    [sym_comment] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [13] = {
    [sym__gap] = STATE(19),
    [sym__sexp] = STATE(69),
    [sym__special_override_symbols] = STATE(69),
    [sym__reader_macro_char] = STATE(29),
    [sym_reader_macro] = STATE(69),
    [sym_list] = STATE(69),
    [sym__form] = STATE(75),
    [sym_sequence] = STATE(69),
    [sym_table] = STATE(69),
    [sym__literal] = STATE(69),
    [sym__colon_string] = STATE(83),
    [sym__double_quote_string] = STATE(72),
    [sym_string] = STATE(69),
    [sym_multi_symbol] = STATE(69),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_symbol] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(177),
    [sym_comment] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(179),
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
  [14] = {
    [sym__gap] = STATE(6),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(6),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [15] = {
    [sym__gap] = STATE(6),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(6),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [16] = {
    [sym__gap] = STATE(16),
    [sym__sexp] = STATE(69),
    [sym__special_override_symbols] = STATE(69),
    [sym__reader_macro_char] = STATE(29),
    [sym_reader_macro] = STATE(69),
    [sym_list] = STATE(69),
    [sym__form] = STATE(75),
    [sym_sequence] = STATE(69),
    [sym_table] = STATE(69),
    [sym__literal] = STATE(69),
    [sym__colon_string] = STATE(83),
    [sym__double_quote_string] = STATE(72),
    [sym_string] = STATE(69),
    [sym_multi_symbol] = STATE(69),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_symbol] = ACTIONS(189),
    [sym__whitespace] = ACTIONS(192),
    [sym_comment] = ACTIONS(192),
    [anon_sym_POUND] = ACTIONS(195),
    [anon_sym_QMARK_DOT] = ACTIONS(198),
    [anon_sym_TILDE_EQ] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(198),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(198),
    [anon_sym_DOT_DOT] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_BQUOTE] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(219),
    [sym_nil] = ACTIONS(222),
    [sym_boolean] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_number] = ACTIONS(222),
  },
  [17] = {
    [sym__gap] = STATE(14),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(14),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(228),
    [sym_comment] = ACTIONS(228),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [18] = {
    [sym__gap] = STATE(16),
    [sym__sexp] = STATE(69),
    [sym__special_override_symbols] = STATE(69),
    [sym__reader_macro_char] = STATE(29),
    [sym_reader_macro] = STATE(69),
    [sym_list] = STATE(69),
    [sym__form] = STATE(75),
    [sym_sequence] = STATE(69),
    [sym_table] = STATE(69),
    [sym__literal] = STATE(69),
    [sym__colon_string] = STATE(83),
    [sym__double_quote_string] = STATE(72),
    [sym_string] = STATE(69),
    [sym_multi_symbol] = STATE(69),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym_symbol] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(234),
    [sym_comment] = ACTIONS(234),
    [anon_sym_POUND] = ACTIONS(179),
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
  [19] = {
    [sym__gap] = STATE(16),
    [sym__sexp] = STATE(69),
    [sym__special_override_symbols] = STATE(69),
    [sym__reader_macro_char] = STATE(29),
    [sym_reader_macro] = STATE(69),
    [sym_list] = STATE(69),
    [sym__form] = STATE(75),
    [sym_sequence] = STATE(69),
    [sym_table] = STATE(69),
    [sym__literal] = STATE(69),
    [sym__colon_string] = STATE(83),
    [sym__double_quote_string] = STATE(72),
    [sym_string] = STATE(69),
    [sym_multi_symbol] = STATE(69),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(236),
    [sym_symbol] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(234),
    [sym_comment] = ACTIONS(234),
    [anon_sym_POUND] = ACTIONS(179),
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
  [20] = {
    [sym__gap] = STATE(6),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(6),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [21] = {
    [sym__gap] = STATE(6),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(6),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [22] = {
    [sym__gap] = STATE(6),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(6),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [23] = {
    [sym__gap] = STATE(21),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(21),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(244),
    [sym_comment] = ACTIONS(244),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [24] = {
    [sym__gap] = STATE(15),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(15),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(248),
    [sym_comment] = ACTIONS(248),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [25] = {
    [sym__gap] = STATE(6),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(6),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(181),
    [sym_comment] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [26] = {
    [sym__gap] = STATE(20),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(20),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(254),
    [sym_comment] = ACTIONS(254),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [27] = {
    [sym__gap] = STATE(22),
    [sym__sexp] = STATE(60),
    [sym__special_override_symbols] = STATE(60),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(60),
    [sym_list] = STATE(60),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(60),
    [sym_table] = STATE(60),
    [sym__literal] = STATE(60),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(60),
    [sym_multi_symbol] = STATE(60),
    [aux_sym__list_content_repeat2] = STATE(22),
    [sym_symbol] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(258),
    [sym_comment] = ACTIONS(258),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(173),
    [sym_boolean] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(173),
  },
  [28] = {
    [sym__sexp] = STATE(70),
    [sym__special_override_symbols] = STATE(70),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(70),
    [sym_list] = STATE(70),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(70),
    [sym_table] = STATE(70),
    [sym__literal] = STATE(70),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(70),
    [sym_multi_symbol] = STATE(70),
    [sym_symbol] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(262),
    [sym_boolean] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(262),
  },
  [29] = {
    [sym__sexp] = STATE(85),
    [sym__special_override_symbols] = STATE(85),
    [sym__reader_macro_char] = STATE(29),
    [sym_reader_macro] = STATE(85),
    [sym_list] = STATE(85),
    [sym__form] = STATE(75),
    [sym_sequence] = STATE(85),
    [sym_table] = STATE(85),
    [sym__literal] = STATE(85),
    [sym__colon_string] = STATE(83),
    [sym__double_quote_string] = STATE(72),
    [sym_string] = STATE(85),
    [sym_multi_symbol] = STATE(85),
    [sym_symbol] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(179),
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
    [sym_nil] = ACTIONS(264),
    [sym_boolean] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_number] = ACTIONS(264),
  },
  [30] = {
    [sym__sexp] = STATE(45),
    [sym__special_override_symbols] = STATE(45),
    [sym__reader_macro_char] = STATE(30),
    [sym_reader_macro] = STATE(45),
    [sym_list] = STATE(45),
    [sym__form] = STATE(54),
    [sym_sequence] = STATE(45),
    [sym_table] = STATE(45),
    [sym__literal] = STATE(45),
    [sym__colon_string] = STATE(53),
    [sym__double_quote_string] = STATE(52),
    [sym_string] = STATE(45),
    [sym_multi_symbol] = STATE(45),
    [sym_symbol] = ACTIONS(151),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_QMARK_DOT] = ACTIONS(39),
    [anon_sym_TILDE_EQ] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DOLLAR_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(39),
    [anon_sym_DOT_DOT] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_nil] = ACTIONS(266),
    [sym_boolean] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [sym_number] = ACTIONS(266),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(272), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(268), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(270), 18,
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
    ACTIONS(281), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(275), 2,
      sym_number,
      sym_symbol,
    ACTIONS(279), 10,
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
  [68] = 4,
    ACTIONS(287), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(283), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(285), 18,
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
    ACTIONS(294), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(290), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(292), 18,
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
    ACTIONS(296), 6,
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
  [165] = 2,
    ACTIONS(300), 6,
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
  [194] = 2,
    ACTIONS(304), 6,
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
  [223] = 3,
    ACTIONS(277), 5,
      sym__whitespace,
      sym_comment,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(308), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(310), 13,
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
  [254] = 2,
    ACTIONS(275), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(277), 18,
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
  [283] = 2,
    ACTIONS(312), 6,
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
  [312] = 2,
    ACTIONS(316), 6,
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
  [341] = 2,
    ACTIONS(320), 6,
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
  [370] = 2,
    ACTIONS(324), 6,
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
  [399] = 2,
    ACTIONS(328), 6,
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
  [428] = 2,
    ACTIONS(332), 6,
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
  [457] = 2,
    ACTIONS(336), 6,
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
  [486] = 2,
    ACTIONS(340), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(342), 18,
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
    ACTIONS(344), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(346), 18,
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
    ACTIONS(348), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(350), 18,
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
    ACTIONS(352), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(354), 18,
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
  [602] = 2,
    ACTIONS(356), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(358), 18,
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
  [631] = 2,
    ACTIONS(360), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(362), 18,
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
  [660] = 2,
    ACTIONS(364), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(366), 18,
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
  [689] = 2,
    ACTIONS(368), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(370), 18,
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
  [718] = 4,
    ACTIONS(374), 2,
      sym__whitespace,
      sym_comment,
    STATE(55), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
    ACTIONS(372), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(377), 13,
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
  [750] = 4,
    ACTIONS(381), 1,
      anon_sym_TILDE_EQ,
    ACTIONS(275), 2,
      sym_number,
      sym_symbol,
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
    ACTIONS(379), 10,
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
  [782] = 5,
    ACTIONS(287), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_COLON,
    STATE(34), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(283), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(285), 15,
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
  [816] = 4,
    ACTIONS(385), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(290), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(292), 16,
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
  [848] = 4,
    STATE(28), 1,
      sym__gap,
    ACTIONS(389), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(387), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(391), 14,
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
  [880] = 2,
    ACTIONS(393), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(395), 17,
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
      anon_sym_DQUOTE,
  [908] = 4,
    ACTIONS(397), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(268), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(270), 16,
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
  [940] = 4,
    ACTIONS(400), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(283), 5,
      anon_sym_DOT_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(285), 16,
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
  [972] = 2,
    ACTIONS(328), 6,
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
  [999] = 2,
    ACTIONS(340), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(342), 16,
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
  [1026] = 2,
    ACTIONS(403), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(405), 16,
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
  [1053] = 2,
    ACTIONS(344), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(346), 16,
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
  [1080] = 2,
    ACTIONS(407), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(409), 16,
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
  [1107] = 2,
    ACTIONS(352), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(354), 16,
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
  [1134] = 2,
    ACTIONS(413), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(411), 16,
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
  [1161] = 2,
    ACTIONS(415), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(417), 16,
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
  [1188] = 2,
    ACTIONS(316), 6,
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
  [1215] = 2,
    ACTIONS(360), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(362), 16,
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
  [1242] = 2,
    ACTIONS(275), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(277), 16,
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
  [1269] = 2,
    ACTIONS(296), 6,
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
  [1296] = 2,
    ACTIONS(368), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(370), 16,
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
  [1323] = 2,
    ACTIONS(312), 6,
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
  [1350] = 3,
    ACTIONS(277), 3,
      ts_builtin_sym_end,
      sym__whitespace,
      sym_comment,
    ACTIONS(308), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(310), 13,
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
  [1379] = 2,
    ACTIONS(320), 6,
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
  [1406] = 3,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(283), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(285), 15,
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
  [1435] = 2,
    ACTIONS(348), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(350), 16,
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
  [1462] = 2,
    ACTIONS(300), 6,
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
  [1489] = 2,
    ACTIONS(324), 6,
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
  [1516] = 2,
    ACTIONS(364), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(366), 16,
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
  [1543] = 2,
    ACTIONS(421), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(423), 16,
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
  [1570] = 2,
    ACTIONS(332), 6,
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
  [1597] = 2,
    ACTIONS(336), 6,
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
  [1624] = 2,
    ACTIONS(356), 6,
      anon_sym_DOT_DOT,
      anon_sym_DOT,
      sym_nil,
      sym_boolean,
      sym_number,
      sym_symbol,
    ACTIONS(358), 16,
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
  [1651] = 2,
    ACTIONS(304), 6,
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
  [1678] = 3,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 2,
      sym__whitespace,
      sym_comment,
    STATE(91), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
  [1690] = 3,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 2,
      sym__whitespace,
      sym_comment,
    STATE(90), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
  [1702] = 3,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(432), 2,
      sym__whitespace,
      sym_comment,
    STATE(90), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
  [1714] = 3,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    ACTIONS(436), 2,
      sym__whitespace,
      sym_comment,
    STATE(94), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
  [1726] = 3,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(432), 2,
      sym__whitespace,
      sym_comment,
    STATE(90), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
  [1738] = 3,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(432), 2,
      sym__whitespace,
      sym_comment,
    STATE(90), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
  [1750] = 3,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 2,
      sym__whitespace,
      sym_comment,
    STATE(97), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
  [1762] = 3,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(444), 2,
      sym__whitespace,
      sym_comment,
    STATE(93), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
  [1774] = 3,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(432), 2,
      sym__whitespace,
      sym_comment,
    STATE(90), 2,
      sym__gap,
      aux_sym__list_content_repeat1,
  [1786] = 4,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(452), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(454), 1,
      sym_escape_sequence,
    STATE(102), 1,
      aux_sym__double_quote_string_repeat1,
  [1799] = 4,
    ACTIONS(452), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(454), 1,
      sym_escape_sequence,
    ACTIONS(456), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym__double_quote_string_repeat1,
  [1812] = 4,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(463), 1,
      sym_escape_sequence,
    STATE(100), 1,
      aux_sym__double_quote_string_repeat1,
  [1825] = 4,
    ACTIONS(452), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(454), 1,
      sym_escape_sequence,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym__double_quote_string_repeat1,
  [1838] = 4,
    ACTIONS(452), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(454), 1,
      sym_escape_sequence,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym__double_quote_string_repeat1,
  [1851] = 1,
    ACTIONS(470), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1857] = 1,
    ACTIONS(470), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [1863] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [1867] = 1,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
  [1871] = 1,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [1875] = 1,
    ACTIONS(478), 1,
      sym_symbol,
  [1879] = 1,
    ACTIONS(480), 1,
      sym_symbol,
  [1883] = 1,
    ACTIONS(482), 1,
      sym_symbol,
  [1887] = 1,
    ACTIONS(484), 1,
      sym_symbol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(31)] = 0,
  [SMALL_STATE(32)] = 34,
  [SMALL_STATE(33)] = 68,
  [SMALL_STATE(34)] = 102,
  [SMALL_STATE(35)] = 136,
  [SMALL_STATE(36)] = 165,
  [SMALL_STATE(37)] = 194,
  [SMALL_STATE(38)] = 223,
  [SMALL_STATE(39)] = 254,
  [SMALL_STATE(40)] = 283,
  [SMALL_STATE(41)] = 312,
  [SMALL_STATE(42)] = 341,
  [SMALL_STATE(43)] = 370,
  [SMALL_STATE(44)] = 399,
  [SMALL_STATE(45)] = 428,
  [SMALL_STATE(46)] = 457,
  [SMALL_STATE(47)] = 486,
  [SMALL_STATE(48)] = 515,
  [SMALL_STATE(49)] = 544,
  [SMALL_STATE(50)] = 573,
  [SMALL_STATE(51)] = 602,
  [SMALL_STATE(52)] = 631,
  [SMALL_STATE(53)] = 660,
  [SMALL_STATE(54)] = 689,
  [SMALL_STATE(55)] = 718,
  [SMALL_STATE(56)] = 750,
  [SMALL_STATE(57)] = 782,
  [SMALL_STATE(58)] = 816,
  [SMALL_STATE(59)] = 848,
  [SMALL_STATE(60)] = 880,
  [SMALL_STATE(61)] = 908,
  [SMALL_STATE(62)] = 940,
  [SMALL_STATE(63)] = 972,
  [SMALL_STATE(64)] = 999,
  [SMALL_STATE(65)] = 1026,
  [SMALL_STATE(66)] = 1053,
  [SMALL_STATE(67)] = 1080,
  [SMALL_STATE(68)] = 1107,
  [SMALL_STATE(69)] = 1134,
  [SMALL_STATE(70)] = 1161,
  [SMALL_STATE(71)] = 1188,
  [SMALL_STATE(72)] = 1215,
  [SMALL_STATE(73)] = 1242,
  [SMALL_STATE(74)] = 1269,
  [SMALL_STATE(75)] = 1296,
  [SMALL_STATE(76)] = 1323,
  [SMALL_STATE(77)] = 1350,
  [SMALL_STATE(78)] = 1379,
  [SMALL_STATE(79)] = 1406,
  [SMALL_STATE(80)] = 1435,
  [SMALL_STATE(81)] = 1462,
  [SMALL_STATE(82)] = 1489,
  [SMALL_STATE(83)] = 1516,
  [SMALL_STATE(84)] = 1543,
  [SMALL_STATE(85)] = 1570,
  [SMALL_STATE(86)] = 1597,
  [SMALL_STATE(87)] = 1624,
  [SMALL_STATE(88)] = 1651,
  [SMALL_STATE(89)] = 1678,
  [SMALL_STATE(90)] = 1690,
  [SMALL_STATE(91)] = 1702,
  [SMALL_STATE(92)] = 1714,
  [SMALL_STATE(93)] = 1726,
  [SMALL_STATE(94)] = 1738,
  [SMALL_STATE(95)] = 1750,
  [SMALL_STATE(96)] = 1762,
  [SMALL_STATE(97)] = 1774,
  [SMALL_STATE(98)] = 1786,
  [SMALL_STATE(99)] = 1799,
  [SMALL_STATE(100)] = 1812,
  [SMALL_STATE(101)] = 1825,
  [SMALL_STATE(102)] = 1838,
  [SMALL_STATE(103)] = 1851,
  [SMALL_STATE(104)] = 1857,
  [SMALL_STATE(105)] = 1863,
  [SMALL_STATE(106)] = 1867,
  [SMALL_STATE(107)] = 1871,
  [SMALL_STATE(108)] = 1875,
  [SMALL_STATE(109)] = 1879,
  [SMALL_STATE(110)] = 1883,
  [SMALL_STATE(111)] = 1887,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(33),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(4),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(38),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(39),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(32),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(39),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(47),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(30),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(3),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(12),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(59),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 25), SHIFT_REPEAT(99),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(33),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(6),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(38),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(39),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(32),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(39),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(47),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(30),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(12),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(7),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(60),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 2, .production_id = 23), SHIFT_REPEAT(99),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 3, .production_id = 33),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 3, .production_id = 32),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(62),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(16),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(77),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(73),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(56),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(73),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(64),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(29),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(26),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(9),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(69),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, .production_id = 15), SHIFT_REPEAT(98),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 21),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, .production_id = 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 16),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 19),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 8),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 20),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 9),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 28),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 28),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 28), SHIFT_REPEAT(108),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(108),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 13),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 13),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 26),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 26),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 7),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 27),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 27),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__reader_macro_char, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reader_macro_char, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 24),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 24),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__form, 5, .dynamic_precedence = 10, .production_id = 35),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__form, 5, .dynamic_precedence = 10, .production_id = 35),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 22),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 22),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__form, 3, .dynamic_precedence = 10, .production_id = 18),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__form, 3, .dynamic_precedence = 10, .production_id = 18),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 17),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 17),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reader_macro, 2, .production_id = 14),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reader_macro, 2, .production_id = 14),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 7),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 7),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__special_override_symbols, 1, .dynamic_precedence = -1, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__form, 4, .dynamic_precedence = 10, .production_id = 30),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__form, 4, .dynamic_precedence = 10, .production_id = 30),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 7),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 7),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 7),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 7),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 6),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 6),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1, .production_id = 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1, .production_id = 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2), SHIFT_REPEAT(55),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 1, .production_id = 11),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 1, .production_id = 11),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat2, 1, .production_id = 10),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat2, 1, .production_id = 10),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 28), SHIFT_REPEAT(109),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__sexp, 1), SHIFT(109),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 29),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 29),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 31),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 31),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 3, .production_id = 34),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 3, .production_id = 34),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 12),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 12),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2), SHIFT_REPEAT(90),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(103),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(104),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [474] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_symbol,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
