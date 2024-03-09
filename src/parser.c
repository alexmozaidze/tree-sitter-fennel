#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 23

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
  anon_sym_DQUOTE = 12,
  aux_sym__double_quote_string_token1 = 13,
  sym_escape_sequence = 14,
  sym_number = 15,
  anon_sym_DOT = 16,
  anon_sym_COLON = 17,
  sym_symbol_immediate = 18,
  sym__hashfn_reader_macro_char = 19,
  sym__quote_reader_macro_char = 20,
  sym__quasi_quote_reader_macro_char = 21,
  sym__unquote_reader_macro_char = 22,
  sym___reader_macro_count = 23,
  sym__colon_string_colon = 24,
  sym__colon_string_content = 25,
  sym_program = 26,
  sym__sexp = 27,
  sym_hashfn_reader_macro = 28,
  sym_quote_reader_macro = 29,
  sym_quasi_quote_reader_macro = 30,
  sym_unquote_reader_macro = 31,
  sym__reader_macro = 32,
  sym__list_content = 33,
  sym_list = 34,
  sym_sequence = 35,
  sym__table_pair = 36,
  sym_table = 37,
  sym__literal = 38,
  sym_boolean = 39,
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_symbol_immediate] = sym_symbol_immediate,
  [sym__hashfn_reader_macro_char] = sym__hashfn_reader_macro_char,
  [sym__quote_reader_macro_char] = sym__quote_reader_macro_char,
  [sym__quasi_quote_reader_macro_char] = sym__quasi_quote_reader_macro_char,
  [sym__unquote_reader_macro_char] = sym__unquote_reader_macro_char,
  [sym___reader_macro_count] = sym___reader_macro_count,
  [sym__colon_string_colon] = anon_sym_COLON,
  [sym__colon_string_content] = sym__colon_string_content,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(56);
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
      if (!sym_symbol_immediate_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 19:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(71);
      END_STATE();
    case 20:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(71);
      END_STATE();
    case 21:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(56);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(71);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == ':') ADVANCE(56);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`') ADVANCE(71);
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
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == ';') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(71);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(71);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(71);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(56);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(3);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (!sym_symbol_character_set_2(lookahead)) ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(37);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '{') ADVANCE(16);
      if (!sym_symbol_character_set_3(lookahead)) ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (!sym_symbol_character_set_4(lookahead)) ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol_immediate);
      if (!sym_symbol_character_set_1(lookahead)) ADVANCE(72);
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(15),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
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
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(43),
    [sym_nil] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [sym_number] = ACTIONS(45),
    [sym__hashfn_reader_macro_char] = ACTIONS(54),
    [sym__quote_reader_macro_char] = ACTIONS(57),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(60),
    [sym__unquote_reader_macro_char] = ACTIONS(63),
    [sym__colon_string_colon] = ACTIONS(66),
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
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_nil] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(71),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [4] = {
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
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(84),
    [sym_nil] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_number] = ACTIONS(87),
    [sym__hashfn_reader_macro_char] = ACTIONS(96),
    [sym__quote_reader_macro_char] = ACTIONS(99),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(102),
    [sym__unquote_reader_macro_char] = ACTIONS(105),
    [sym__colon_string_colon] = ACTIONS(108),
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
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym_nil] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(71),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [6] = {
    [sym__sexp] = STATE(12),
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
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(115),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [7] = {
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
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(119),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [8] = {
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
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(11),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(119),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [9] = {
    [sym__sexp] = STATE(8),
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
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(125),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [10] = {
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
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(7),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(119),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [11] = {
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
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(41),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(41),
    [aux_sym__list_content_repeat1] = STATE(4),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(119),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [12] = {
    [sym__sexp] = STATE(12),
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
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_symbol] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(142),
    [sym_nil] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(148),
    [anon_sym_false] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [sym_number] = ACTIONS(145),
    [sym__hashfn_reader_macro_char] = ACTIONS(154),
    [sym__quote_reader_macro_char] = ACTIONS(157),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(160),
    [sym__unquote_reader_macro_char] = ACTIONS(163),
    [sym__colon_string_colon] = ACTIONS(166),
  },
  [13] = {
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
    [sym__colon_string] = STATE(35),
    [sym__double_quote_string] = STATE(34),
    [sym_string] = STATE(42),
    [sym_multi_symbol] = STATE(22),
    [sym_multi_symbol_method] = STATE(42),
    [sym_symbol] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(169),
    [sym_nil] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(171),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [14] = {
    [sym__sexp] = STATE(28),
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
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(173),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [15] = {
    [sym__sexp] = STATE(33),
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
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(175),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [16] = {
    [sym__sexp] = STATE(30),
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
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(177),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
  [17] = {
    [sym__sexp] = STATE(31),
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
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [sym_nil] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(179),
    [sym__hashfn_reader_macro_char] = ACTIONS(21),
    [sym__quote_reader_macro_char] = ACTIONS(23),
    [sym__quasi_quote_reader_macro_char] = ACTIONS(25),
    [sym__unquote_reader_macro_char] = ACTIONS(27),
    [sym__colon_string_colon] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(183), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(181), 14,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [33] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DOT,
    ACTIONS(191), 1,
      anon_sym_COLON,
    STATE(18), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(189), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(187), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [68] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_multi_symbol_repeat1,
    ACTIONS(195), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(193), 14,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      anon_sym_DOT,
      sym_symbol,
    ACTIONS(200), 14,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_COLON,
  [129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(189), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(187), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(206), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(210), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(214), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(218), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(222), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(226), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(230), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(234), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(238), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(242), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(246), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(250), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(254), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(258), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(262), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(266), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(270), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(274), 13,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(280), 11,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
  [650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(284), 10,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      sym_nil,
      anon_sym_true,
      anon_sym_false,
      sym_number,
      sym_symbol,
    ACTIONS(288), 10,
      sym__hashfn_reader_macro_char,
      sym__quote_reader_macro_char,
      sym__quasi_quote_reader_macro_char,
      sym__unquote_reader_macro_char,
      sym__colon_string_colon,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [696] = 5,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(296), 1,
      sym_escape_sequence,
    STATE(45), 1,
      aux_sym__double_quote_string_repeat1,
  [712] = 5,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(303), 1,
      sym_escape_sequence,
    STATE(45), 1,
      aux_sym__double_quote_string_repeat1,
  [728] = 5,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__double_quote_string_token1,
    ACTIONS(296), 1,
      sym_escape_sequence,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym__double_quote_string_repeat1,
  [744] = 2,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(308), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [753] = 2,
    ACTIONS(290), 1,
      sym_comment,
    ACTIONS(308), 3,
      anon_sym_DQUOTE,
      aux_sym__double_quote_string_token1,
      sym_escape_sequence,
  [762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_symbol_immediate,
  [769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_symbol_immediate,
  [776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_symbol_immediate,
  [783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym__colon_string_content,
  [790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
  [797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 33,
  [SMALL_STATE(20)] = 68,
  [SMALL_STATE(21)] = 101,
  [SMALL_STATE(22)] = 129,
  [SMALL_STATE(23)] = 158,
  [SMALL_STATE(24)] = 184,
  [SMALL_STATE(25)] = 210,
  [SMALL_STATE(26)] = 236,
  [SMALL_STATE(27)] = 262,
  [SMALL_STATE(28)] = 288,
  [SMALL_STATE(29)] = 314,
  [SMALL_STATE(30)] = 340,
  [SMALL_STATE(31)] = 366,
  [SMALL_STATE(32)] = 392,
  [SMALL_STATE(33)] = 418,
  [SMALL_STATE(34)] = 444,
  [SMALL_STATE(35)] = 470,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 522,
  [SMALL_STATE(38)] = 548,
  [SMALL_STATE(39)] = 574,
  [SMALL_STATE(40)] = 600,
  [SMALL_STATE(41)] = 626,
  [SMALL_STATE(42)] = 650,
  [SMALL_STATE(43)] = 673,
  [SMALL_STATE(44)] = 696,
  [SMALL_STATE(45)] = 712,
  [SMALL_STATE(46)] = 728,
  [SMALL_STATE(47)] = 744,
  [SMALL_STATE(48)] = 753,
  [SMALL_STATE(49)] = 762,
  [SMALL_STATE(50)] = 769,
  [SMALL_STATE(51)] = 776,
  [SMALL_STATE(52)] = 783,
  [SMALL_STATE(53)] = 790,
  [SMALL_STATE(54)] = 797,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(19),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(9),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(10),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(13),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(23),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(46),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(15),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(16),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(14),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, .production_id = 17), SHIFT_REPEAT(52),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(19),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(3),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(41),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(23),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(46),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(15),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(17),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(16),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(14),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 2, .production_id = 14), SHIFT_REPEAT(52),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 1, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_content, 2, .production_id = 11),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(17),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(52),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 1, .production_id = 8),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol, 2, .dynamic_precedence = 3, .production_id = 10),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sexp, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sexp, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 21), SHIFT_REPEAT(49),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 19),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multi_symbol_repeat1, 2, .production_id = 19),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 5),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 22),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 2, .dynamic_precedence = -1, .production_id = 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon_string, 2, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_reader_macro, 2, .production_id = 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasi_quote_reader_macro, 2, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_reader_macro, 2, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 2, .production_id = 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashfn_reader_macro, 2, .production_id = 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 12),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 12),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 13),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 3, .dynamic_precedence = -1, .production_id = 13),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multi_symbol_method, 3, .production_id = 20),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 16),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 16),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3, .production_id = 18),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3, .production_id = 18),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_content_repeat1, 1, .production_id = 7),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_pair, 2, .production_id = 15),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_pair, 2, .production_id = 15),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, .production_id = 9),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(48),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 2), SHIFT_REPEAT(47),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_quote_string_repeat1, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [320] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
