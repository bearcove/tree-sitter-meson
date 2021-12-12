#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_if = 1,
  anon_sym_elif = 2,
  anon_sym_else = 3,
  anon_sym_endif = 4,
  sym__DECIMAL_NUMBER = 5,
  anon_sym_0o = 6,
  sym__OCTAL_NUMBER = 7,
  anon_sym_0x = 8,
  sym__HEX_NUMBER = 9,
  sym_escape_sequence = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_string_simple_token1 = 12,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 13,
  aux_sym_string_multiline_token1 = 14,
  anon_sym_SQUOTE_SQUOTE = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LF = 21,
  anon_sym_CR_LF = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_COLON = 25,
  sym_source_file = 26,
  sym_build_definition = 27,
  sym_statement = 28,
  sym_selection_statement = 29,
  sym_condition = 30,
  sym_expression = 31,
  sym_literal = 32,
  sym_integer_literal = 33,
  sym_decimal_literal = 34,
  sym_octal_literal = 35,
  sym_hex_literal = 36,
  sym_string_literal = 37,
  sym_string_simple = 38,
  sym_string_multiline = 39,
  sym_boolean_literal = 40,
  sym_array_literal = 41,
  sym__NEWLINE = 42,
  sym_dictionary_literal = 43,
  sym_key_value_item = 44,
  aux_sym_build_definition_repeat1 = 45,
  aux_sym_selection_statement_repeat1 = 46,
  aux_sym_string_simple_repeat1 = 47,
  aux_sym_string_multiline_repeat1 = 48,
  aux_sym_array_literal_repeat1 = 49,
  aux_sym_dictionary_literal_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [sym__DECIMAL_NUMBER] = "_DECIMAL_NUMBER",
  [anon_sym_0o] = "0o",
  [sym__OCTAL_NUMBER] = "_OCTAL_NUMBER",
  [anon_sym_0x] = "0x",
  [sym__HEX_NUMBER] = "_HEX_NUMBER",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_simple_token1] = "string_simple_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_string_multiline_token1] = "string_multiline_token1",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_source_file] = "source_file",
  [sym_build_definition] = "build_definition",
  [sym_statement] = "statement",
  [sym_selection_statement] = "selection_statement",
  [sym_condition] = "condition",
  [sym_expression] = "expression",
  [sym_literal] = "literal",
  [sym_integer_literal] = "integer_literal",
  [sym_decimal_literal] = "decimal_literal",
  [sym_octal_literal] = "octal_literal",
  [sym_hex_literal] = "hex_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_simple] = "string_simple",
  [sym_string_multiline] = "string_multiline",
  [sym_boolean_literal] = "boolean_literal",
  [sym_array_literal] = "array_literal",
  [sym__NEWLINE] = "_NEWLINE",
  [sym_dictionary_literal] = "dictionary_literal",
  [sym_key_value_item] = "key_value_item",
  [aux_sym_build_definition_repeat1] = "build_definition_repeat1",
  [aux_sym_selection_statement_repeat1] = "selection_statement_repeat1",
  [aux_sym_string_simple_repeat1] = "string_simple_repeat1",
  [aux_sym_string_multiline_repeat1] = "string_multiline_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_dictionary_literal_repeat1] = "dictionary_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [sym__DECIMAL_NUMBER] = sym__DECIMAL_NUMBER,
  [anon_sym_0o] = anon_sym_0o,
  [sym__OCTAL_NUMBER] = sym__OCTAL_NUMBER,
  [anon_sym_0x] = anon_sym_0x,
  [sym__HEX_NUMBER] = sym__HEX_NUMBER,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_simple_token1] = aux_sym_string_simple_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_string_multiline_token1] = aux_sym_string_multiline_token1,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_source_file] = sym_source_file,
  [sym_build_definition] = sym_build_definition,
  [sym_statement] = sym_statement,
  [sym_selection_statement] = sym_selection_statement,
  [sym_condition] = sym_condition,
  [sym_expression] = sym_expression,
  [sym_literal] = sym_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_octal_literal] = sym_octal_literal,
  [sym_hex_literal] = sym_hex_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_simple] = sym_string_simple,
  [sym_string_multiline] = sym_string_multiline,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_array_literal] = sym_array_literal,
  [sym__NEWLINE] = sym__NEWLINE,
  [sym_dictionary_literal] = sym_dictionary_literal,
  [sym_key_value_item] = sym_key_value_item,
  [aux_sym_build_definition_repeat1] = aux_sym_build_definition_repeat1,
  [aux_sym_selection_statement_repeat1] = aux_sym_selection_statement_repeat1,
  [aux_sym_string_simple_repeat1] = aux_sym_string_simple_repeat1,
  [aux_sym_string_multiline_repeat1] = aux_sym_string_multiline_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_dictionary_literal_repeat1] = aux_sym_dictionary_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [sym__DECIMAL_NUMBER] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [sym__OCTAL_NUMBER] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [sym__HEX_NUMBER] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_simple_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_multiline_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_build_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_selection_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_string_multiline] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_array_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__NEWLINE] = {
    .visible = false,
    .named = true,
  },
  [sym_dictionary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_item] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_build_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selection_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_simple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_multiline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == ']') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'a') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'l') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(59);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 24},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [sym__DECIMAL_NUMBER] = ACTIONS(1),
    [anon_sym_0o] = ACTIONS(1),
    [sym__OCTAL_NUMBER] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [sym__HEX_NUMBER] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym_build_definition] = STATE(100),
    [sym_statement] = STATE(9),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(9),
    [anon_sym_if] = ACTIONS(3),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_elif] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_endif] = ACTIONS(21),
    [sym__DECIMAL_NUMBER] = ACTIONS(26),
    [anon_sym_0o] = ACTIONS(29),
    [anon_sym_0x] = ACTIONS(32),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(47),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [aux_sym_selection_statement_repeat1] = STATE(61),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_elif] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(52),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [4] = {
    [sym_statement] = STATE(3),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(3),
    [aux_sym_selection_statement_repeat1] = STATE(66),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_elif] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(54),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [5] = {
    [sym_statement] = STATE(6),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(6),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_elif] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [6] = {
    [sym_statement] = STATE(2),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_elif] = ACTIONS(58),
    [anon_sym_else] = ACTIONS(58),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [7] = {
    [sym_statement] = STATE(2),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_endif] = ACTIONS(60),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [8] = {
    [sym_statement] = STATE(10),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(10),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_endif] = ACTIONS(62),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [9] = {
    [sym_statement] = STATE(2),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_if] = ACTIONS(3),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [10] = {
    [sym_statement] = STATE(2),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_endif] = ACTIONS(66),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [11] = {
    [sym_statement] = STATE(7),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(7),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_endif] = ACTIONS(66),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [12] = {
    [sym_statement] = STATE(2),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_endif] = ACTIONS(68),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [13] = {
    [sym_statement] = STATE(12),
    [sym_selection_statement] = STATE(67),
    [sym_expression] = STATE(67),
    [sym_literal] = STATE(85),
    [sym_integer_literal] = STATE(68),
    [sym_decimal_literal] = STATE(86),
    [sym_octal_literal] = STATE(86),
    [sym_hex_literal] = STATE(86),
    [sym_string_literal] = STATE(68),
    [sym_string_simple] = STATE(89),
    [sym_string_multiline] = STATE(89),
    [sym_boolean_literal] = STATE(68),
    [sym_array_literal] = STATE(68),
    [sym_dictionary_literal] = STATE(68),
    [aux_sym_build_definition_repeat1] = STATE(12),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_endif] = ACTIONS(60),
    [sym__DECIMAL_NUMBER] = ACTIONS(5),
    [anon_sym_0o] = ACTIONS(7),
    [anon_sym_0x] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(70), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(72), 1,
      anon_sym_0o,
    ACTIONS(74), 1,
      anon_sym_0x,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_literal,
    STATE(63), 1,
      sym_key_value_item,
    STATE(98), 1,
      sym_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(29), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [54] = 15,
    ACTIONS(70), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(72), 1,
      anon_sym_0o,
    ACTIONS(74), 1,
      anon_sym_0x,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_literal,
    STATE(58), 1,
      sym_key_value_item,
    STATE(98), 1,
      sym_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(29), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [108] = 14,
    ACTIONS(5), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(7), 1,
      anon_sym_0o,
    ACTIONS(9), 1,
      anon_sym_0x,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_condition,
    STATE(73), 1,
      sym_expression,
    STATE(85), 1,
      sym_literal,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(86), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(68), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [159] = 14,
    ACTIONS(70), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(72), 1,
      anon_sym_0o,
    ACTIONS(74), 1,
      anon_sym_0x,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      sym_literal,
    STATE(60), 1,
      sym_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(29), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [210] = 14,
    ACTIONS(70), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(72), 1,
      anon_sym_0o,
    ACTIONS(74), 1,
      anon_sym_0x,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_literal,
    STATE(77), 1,
      sym_key_value_item,
    STATE(98), 1,
      sym_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(29), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [261] = 14,
    ACTIONS(70), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(72), 1,
      anon_sym_0o,
    ACTIONS(74), 1,
      anon_sym_0x,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      sym_literal,
    STATE(59), 1,
      sym_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(29), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [312] = 14,
    ACTIONS(5), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(7), 1,
      anon_sym_0o,
    ACTIONS(9), 1,
      anon_sym_0x,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_condition,
    STATE(73), 1,
      sym_expression,
    STATE(85), 1,
      sym_literal,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(89), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(86), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(68), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [363] = 13,
    ACTIONS(70), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(72), 1,
      anon_sym_0o,
    ACTIONS(74), 1,
      anon_sym_0x,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_literal,
    STATE(79), 1,
      sym_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(29), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [411] = 13,
    ACTIONS(70), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(72), 1,
      anon_sym_0o,
    ACTIONS(74), 1,
      anon_sym_0x,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_literal,
    STATE(75), 1,
      sym_expression,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(29), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(49), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [459] = 2,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 13,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
      sym__DECIMAL_NUMBER,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [478] = 4,
    ACTIONS(100), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_string_multiline_token1,
    STATE(28), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(98), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [493] = 4,
    ACTIONS(106), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(108), 1,
      aux_sym_string_multiline_token1,
    STATE(26), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(104), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [508] = 4,
    ACTIONS(102), 1,
      aux_sym_string_multiline_token1,
    ACTIONS(110), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(28), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(98), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [523] = 4,
    ACTIONS(114), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(116), 1,
      aux_sym_string_multiline_token1,
    STATE(24), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(112), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [538] = 4,
    ACTIONS(121), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(123), 1,
      aux_sym_string_multiline_token1,
    STATE(28), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(118), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [553] = 1,
    ACTIONS(126), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [560] = 1,
    ACTIONS(128), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [567] = 4,
    ACTIONS(130), 1,
      sym_escape_sequence,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    ACTIONS(134), 1,
      aux_sym_string_simple_token1,
    STATE(43), 1,
      aux_sym_string_simple_repeat1,
  [580] = 4,
    ACTIONS(136), 1,
      sym_escape_sequence,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      aux_sym_string_simple_token1,
    STATE(35), 1,
      aux_sym_string_simple_repeat1,
  [593] = 4,
    ACTIONS(142), 1,
      sym_escape_sequence,
    ACTIONS(144), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      aux_sym_string_simple_token1,
    STATE(31), 1,
      aux_sym_string_simple_repeat1,
  [606] = 1,
    ACTIONS(148), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [613] = 4,
    ACTIONS(130), 1,
      sym_escape_sequence,
    ACTIONS(134), 1,
      aux_sym_string_simple_token1,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      aux_sym_string_simple_repeat1,
  [626] = 1,
    ACTIONS(152), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [633] = 1,
    ACTIONS(154), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [640] = 1,
    ACTIONS(156), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [647] = 1,
    ACTIONS(158), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [654] = 1,
    ACTIONS(160), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [661] = 1,
    ACTIONS(162), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [668] = 1,
    ACTIONS(164), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [675] = 4,
    ACTIONS(166), 1,
      sym_escape_sequence,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      aux_sym_string_simple_token1,
    STATE(43), 1,
      aux_sym_string_simple_repeat1,
  [688] = 1,
    ACTIONS(174), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [695] = 1,
    ACTIONS(176), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [702] = 1,
    ACTIONS(178), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [709] = 1,
    ACTIONS(180), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [716] = 1,
    ACTIONS(182), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [723] = 1,
    ACTIONS(184), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [730] = 1,
    ACTIONS(186), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [737] = 1,
    ACTIONS(188), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [744] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_dictionary_literal_repeat1,
  [754] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_array_literal_repeat1,
  [764] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_dictionary_literal_repeat1,
  [774] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_array_literal_repeat1,
  [784] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_dictionary_literal_repeat1,
  [794] = 2,
    STATE(5), 1,
      sym__NEWLINE,
    ACTIONS(210), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [802] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dictionary_literal_repeat1,
  [812] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_array_literal_repeat1,
  [822] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_array_literal_repeat1,
  [832] = 3,
    ACTIONS(50), 1,
      anon_sym_elif,
    ACTIONS(218), 1,
      anon_sym_else,
    STATE(62), 1,
      aux_sym_selection_statement_repeat1,
  [842] = 3,
    ACTIONS(220), 1,
      anon_sym_elif,
    ACTIONS(223), 1,
      anon_sym_else,
    STATE(62), 1,
      aux_sym_selection_statement_repeat1,
  [852] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_dictionary_literal_repeat1,
  [862] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_array_literal_repeat1,
  [872] = 2,
    STATE(4), 1,
      sym__NEWLINE,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [880] = 3,
    ACTIONS(50), 1,
      anon_sym_elif,
    ACTIONS(52), 1,
      anon_sym_else,
    STATE(62), 1,
      aux_sym_selection_statement_repeat1,
  [890] = 2,
    STATE(23), 1,
      sym__NEWLINE,
    ACTIONS(231), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [898] = 1,
    ACTIONS(233), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [903] = 1,
    ACTIONS(235), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [908] = 1,
    ACTIONS(237), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [913] = 1,
    ACTIONS(239), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [918] = 1,
    ACTIONS(241), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [923] = 1,
    ACTIONS(243), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [928] = 1,
    ACTIONS(245), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [933] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [938] = 1,
    ACTIONS(247), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [943] = 1,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [948] = 1,
    ACTIONS(249), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [953] = 1,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [958] = 1,
    ACTIONS(253), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [963] = 1,
    ACTIONS(255), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [968] = 1,
    ACTIONS(257), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [973] = 1,
    ACTIONS(259), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [978] = 1,
    ACTIONS(261), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [983] = 1,
    ACTIONS(263), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [988] = 1,
    ACTIONS(265), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [993] = 1,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [998] = 1,
    ACTIONS(269), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1003] = 1,
    ACTIONS(271), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1008] = 1,
    ACTIONS(273), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1013] = 1,
    ACTIONS(275), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1018] = 1,
    ACTIONS(277), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1023] = 1,
    ACTIONS(279), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [1028] = 1,
    ACTIONS(281), 1,
      sym__HEX_NUMBER,
  [1032] = 1,
    ACTIONS(283), 1,
      sym__HEX_NUMBER,
  [1036] = 1,
    ACTIONS(285), 1,
      sym__OCTAL_NUMBER,
  [1040] = 1,
    ACTIONS(287), 1,
      sym__OCTAL_NUMBER,
  [1044] = 1,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [1048] = 1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
  [1052] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 54,
  [SMALL_STATE(16)] = 108,
  [SMALL_STATE(17)] = 159,
  [SMALL_STATE(18)] = 210,
  [SMALL_STATE(19)] = 261,
  [SMALL_STATE(20)] = 312,
  [SMALL_STATE(21)] = 363,
  [SMALL_STATE(22)] = 411,
  [SMALL_STATE(23)] = 459,
  [SMALL_STATE(24)] = 478,
  [SMALL_STATE(25)] = 493,
  [SMALL_STATE(26)] = 508,
  [SMALL_STATE(27)] = 523,
  [SMALL_STATE(28)] = 538,
  [SMALL_STATE(29)] = 553,
  [SMALL_STATE(30)] = 560,
  [SMALL_STATE(31)] = 567,
  [SMALL_STATE(32)] = 580,
  [SMALL_STATE(33)] = 593,
  [SMALL_STATE(34)] = 606,
  [SMALL_STATE(35)] = 613,
  [SMALL_STATE(36)] = 626,
  [SMALL_STATE(37)] = 633,
  [SMALL_STATE(38)] = 640,
  [SMALL_STATE(39)] = 647,
  [SMALL_STATE(40)] = 654,
  [SMALL_STATE(41)] = 661,
  [SMALL_STATE(42)] = 668,
  [SMALL_STATE(43)] = 675,
  [SMALL_STATE(44)] = 688,
  [SMALL_STATE(45)] = 695,
  [SMALL_STATE(46)] = 702,
  [SMALL_STATE(47)] = 709,
  [SMALL_STATE(48)] = 716,
  [SMALL_STATE(49)] = 723,
  [SMALL_STATE(50)] = 730,
  [SMALL_STATE(51)] = 737,
  [SMALL_STATE(52)] = 744,
  [SMALL_STATE(53)] = 754,
  [SMALL_STATE(54)] = 764,
  [SMALL_STATE(55)] = 774,
  [SMALL_STATE(56)] = 784,
  [SMALL_STATE(57)] = 794,
  [SMALL_STATE(58)] = 802,
  [SMALL_STATE(59)] = 812,
  [SMALL_STATE(60)] = 822,
  [SMALL_STATE(61)] = 832,
  [SMALL_STATE(62)] = 842,
  [SMALL_STATE(63)] = 852,
  [SMALL_STATE(64)] = 862,
  [SMALL_STATE(65)] = 872,
  [SMALL_STATE(66)] = 880,
  [SMALL_STATE(67)] = 890,
  [SMALL_STATE(68)] = 898,
  [SMALL_STATE(69)] = 903,
  [SMALL_STATE(70)] = 908,
  [SMALL_STATE(71)] = 913,
  [SMALL_STATE(72)] = 918,
  [SMALL_STATE(73)] = 923,
  [SMALL_STATE(74)] = 928,
  [SMALL_STATE(75)] = 933,
  [SMALL_STATE(76)] = 938,
  [SMALL_STATE(77)] = 943,
  [SMALL_STATE(78)] = 948,
  [SMALL_STATE(79)] = 953,
  [SMALL_STATE(80)] = 958,
  [SMALL_STATE(81)] = 963,
  [SMALL_STATE(82)] = 968,
  [SMALL_STATE(83)] = 973,
  [SMALL_STATE(84)] = 978,
  [SMALL_STATE(85)] = 983,
  [SMALL_STATE(86)] = 988,
  [SMALL_STATE(87)] = 993,
  [SMALL_STATE(88)] = 998,
  [SMALL_STATE(89)] = 1003,
  [SMALL_STATE(90)] = 1008,
  [SMALL_STATE(91)] = 1013,
  [SMALL_STATE(92)] = 1018,
  [SMALL_STATE(93)] = 1023,
  [SMALL_STATE(94)] = 1028,
  [SMALL_STATE(95)] = 1032,
  [SMALL_STATE(96)] = 1036,
  [SMALL_STATE(97)] = 1040,
  [SMALL_STATE(98)] = 1044,
  [SMALL_STATE(99)] = 1048,
  [SMALL_STATE(100)] = 1052,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(16),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(84),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(96),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(94),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(32),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(92),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(17),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(14),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_definition, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(28),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(28),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(43),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(22),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2), SHIFT_REPEAT(18),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 2), SHIFT_REPEAT(20),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 7),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 8),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_item, 3, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 6),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [291] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_meson(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
