#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  sym__DECIMAL_NUMBER = 1,
  anon_sym_0o = 2,
  sym__OCTAL_NUMBER = 3,
  anon_sym_0x = 4,
  sym__HEX_NUMBER = 5,
  sym_escape_sequence = 6,
  anon_sym_SQUOTE = 7,
  aux_sym_string_simple_token1 = 8,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 9,
  aux_sym_string_multiline_token1 = 10,
  anon_sym_SQUOTE_SQUOTE = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  anon_sym_LBRACK = 14,
  anon_sym_COMMA = 15,
  anon_sym_RBRACK = 16,
  anon_sym_LF = 17,
  anon_sym_CR_LF = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_COLON = 21,
  sym_source_file = 22,
  sym_build_definition = 23,
  sym_statement = 24,
  sym_expression = 25,
  sym_literal = 26,
  sym_integer_literal = 27,
  sym_decimal_literal = 28,
  sym_octal_literal = 29,
  sym_hex_literal = 30,
  sym_string_literal = 31,
  sym_string_simple = 32,
  sym_string_multiline = 33,
  sym_boolean_literal = 34,
  sym_array_literal = 35,
  sym__NEWLINE = 36,
  sym_dictionary_literal = 37,
  sym_key_value_item = 38,
  aux_sym_build_definition_repeat1 = 39,
  aux_sym_string_simple_repeat1 = 40,
  aux_sym_string_multiline_repeat1 = 41,
  aux_sym_array_literal_repeat1 = 42,
  aux_sym_dictionary_literal_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym_string_simple_repeat1] = "string_simple_repeat1",
  [aux_sym_string_multiline_repeat1] = "string_multiline_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_dictionary_literal_repeat1] = "dictionary_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
      if (eof) ADVANCE(26);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(33);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'a') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'l') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(78),
    [sym_build_definition] = STATE(77),
    [sym_statement] = STATE(2),
    [sym_expression] = STATE(46),
    [sym_literal] = STATE(52),
    [sym_integer_literal] = STATE(70),
    [sym_decimal_literal] = STATE(69),
    [sym_octal_literal] = STATE(69),
    [sym_hex_literal] = STATE(69),
    [sym_string_literal] = STATE(70),
    [sym_string_simple] = STATE(67),
    [sym_string_multiline] = STATE(67),
    [sym_boolean_literal] = STATE(70),
    [sym_array_literal] = STATE(70),
    [sym_dictionary_literal] = STATE(70),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [sym__DECIMAL_NUMBER] = ACTIONS(3),
    [anon_sym_0o] = ACTIONS(5),
    [anon_sym_0x] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(46),
    [sym_literal] = STATE(52),
    [sym_integer_literal] = STATE(70),
    [sym_decimal_literal] = STATE(69),
    [sym_octal_literal] = STATE(69),
    [sym_hex_literal] = STATE(69),
    [sym_string_literal] = STATE(70),
    [sym_string_simple] = STATE(67),
    [sym_string_multiline] = STATE(67),
    [sym_boolean_literal] = STATE(70),
    [sym_array_literal] = STATE(70),
    [sym_dictionary_literal] = STATE(70),
    [aux_sym_build_definition_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__DECIMAL_NUMBER] = ACTIONS(3),
    [anon_sym_0o] = ACTIONS(5),
    [anon_sym_0x] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(46),
    [sym_literal] = STATE(52),
    [sym_integer_literal] = STATE(70),
    [sym_decimal_literal] = STATE(69),
    [sym_octal_literal] = STATE(69),
    [sym_hex_literal] = STATE(69),
    [sym_string_literal] = STATE(70),
    [sym_string_simple] = STATE(67),
    [sym_string_multiline] = STATE(67),
    [sym_boolean_literal] = STATE(70),
    [sym_array_literal] = STATE(70),
    [sym_dictionary_literal] = STATE(70),
    [aux_sym_build_definition_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__DECIMAL_NUMBER] = ACTIONS(23),
    [anon_sym_0o] = ACTIONS(26),
    [anon_sym_0x] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(38),
    [anon_sym_false] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(44),
  },
  [4] = {
    [sym_expression] = STATE(72),
    [sym_literal] = STATE(38),
    [sym_integer_literal] = STATE(37),
    [sym_decimal_literal] = STATE(36),
    [sym_octal_literal] = STATE(36),
    [sym_hex_literal] = STATE(36),
    [sym_string_literal] = STATE(37),
    [sym_string_simple] = STATE(35),
    [sym_string_multiline] = STATE(35),
    [sym_boolean_literal] = STATE(37),
    [sym_array_literal] = STATE(37),
    [sym_dictionary_literal] = STATE(37),
    [sym_key_value_item] = STATE(49),
    [sym__DECIMAL_NUMBER] = ACTIONS(47),
    [anon_sym_0o] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(63),
  },
  [5] = {
    [sym_expression] = STATE(72),
    [sym_literal] = STATE(38),
    [sym_integer_literal] = STATE(37),
    [sym_decimal_literal] = STATE(36),
    [sym_octal_literal] = STATE(36),
    [sym_hex_literal] = STATE(36),
    [sym_string_literal] = STATE(37),
    [sym_string_simple] = STATE(35),
    [sym_string_multiline] = STATE(35),
    [sym_boolean_literal] = STATE(37),
    [sym_array_literal] = STATE(37),
    [sym_dictionary_literal] = STATE(37),
    [sym_key_value_item] = STATE(40),
    [sym__DECIMAL_NUMBER] = ACTIONS(47),
    [anon_sym_0o] = ACTIONS(49),
    [anon_sym_0x] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(65),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(47), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_literal,
    STATE(42), 1,
      sym_expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(36), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(37), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [51] = 14,
    ACTIONS(47), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      sym_literal,
    STATE(43), 1,
      sym_expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(36), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(37), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [102] = 14,
    ACTIONS(47), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_literal,
    STATE(59), 1,
      sym_key_value_item,
    STATE(72), 1,
      sym_expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(36), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(37), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [153] = 13,
    ACTIONS(47), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_literal,
    STATE(61), 1,
      sym_expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(36), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(37), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [201] = 13,
    ACTIONS(47), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_literal,
    STATE(57), 1,
      sym_expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(36), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(37), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [249] = 2,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      sym__DECIMAL_NUMBER,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [264] = 4,
    ACTIONS(77), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_string_multiline_token1,
    STATE(16), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(75), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [279] = 4,
    ACTIONS(83), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(85), 1,
      aux_sym_string_multiline_token1,
    STATE(12), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(81), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [294] = 4,
    ACTIONS(89), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(91), 1,
      aux_sym_string_multiline_token1,
    STATE(15), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(87), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [309] = 4,
    ACTIONS(79), 1,
      aux_sym_string_multiline_token1,
    ACTIONS(93), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(16), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(75), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [324] = 4,
    ACTIONS(98), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(100), 1,
      aux_sym_string_multiline_token1,
    STATE(16), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(95), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [339] = 1,
    ACTIONS(103), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [346] = 1,
    ACTIONS(105), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [353] = 4,
    ACTIONS(107), 1,
      sym_escape_sequence,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_string_simple_token1,
    STATE(34), 1,
      aux_sym_string_simple_repeat1,
  [366] = 4,
    ACTIONS(113), 1,
      sym_escape_sequence,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      aux_sym_string_simple_token1,
    STATE(26), 1,
      aux_sym_string_simple_repeat1,
  [379] = 4,
    ACTIONS(119), 1,
      sym_escape_sequence,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      aux_sym_string_simple_token1,
    STATE(19), 1,
      aux_sym_string_simple_repeat1,
  [392] = 1,
    ACTIONS(125), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [399] = 1,
    ACTIONS(127), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [406] = 1,
    ACTIONS(129), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [413] = 1,
    ACTIONS(131), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [420] = 4,
    ACTIONS(107), 1,
      sym_escape_sequence,
    ACTIONS(111), 1,
      aux_sym_string_simple_token1,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      aux_sym_string_simple_repeat1,
  [433] = 1,
    ACTIONS(135), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [440] = 1,
    ACTIONS(137), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [447] = 1,
    ACTIONS(139), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [454] = 1,
    ACTIONS(141), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [461] = 1,
    ACTIONS(143), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [468] = 1,
    ACTIONS(145), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [475] = 1,
    ACTIONS(147), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [482] = 4,
    ACTIONS(149), 1,
      sym_escape_sequence,
    ACTIONS(152), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      aux_sym_string_simple_token1,
    STATE(34), 1,
      aux_sym_string_simple_repeat1,
  [495] = 1,
    ACTIONS(157), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [502] = 1,
    ACTIONS(159), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [509] = 1,
    ACTIONS(161), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [516] = 1,
    ACTIONS(163), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [523] = 1,
    ACTIONS(165), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [530] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_dictionary_literal_repeat1,
  [540] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_dictionary_literal_repeat1,
  [550] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_array_literal_repeat1,
  [560] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_array_literal_repeat1,
  [570] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_array_literal_repeat1,
  [580] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_dictionary_literal_repeat1,
  [590] = 2,
    STATE(11), 1,
      sym__NEWLINE,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [598] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_array_literal_repeat1,
  [608] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_dictionary_literal_repeat1,
  [618] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_dictionary_literal_repeat1,
  [628] = 3,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_array_literal_repeat1,
  [638] = 1,
    ACTIONS(199), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [643] = 1,
    ACTIONS(201), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [648] = 1,
    ACTIONS(203), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [653] = 1,
    ACTIONS(205), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [658] = 1,
    ACTIONS(207), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [663] = 1,
    ACTIONS(209), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [668] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [673] = 1,
    ACTIONS(211), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [678] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [683] = 1,
    ACTIONS(213), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [688] = 1,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [693] = 1,
    ACTIONS(217), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [698] = 1,
    ACTIONS(219), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [703] = 1,
    ACTIONS(221), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [708] = 1,
    ACTIONS(223), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [713] = 1,
    ACTIONS(225), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [718] = 1,
    ACTIONS(227), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [723] = 1,
    ACTIONS(229), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [728] = 1,
    ACTIONS(231), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [733] = 1,
    ACTIONS(233), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [738] = 1,
    ACTIONS(235), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [743] = 1,
    ACTIONS(237), 1,
      anon_sym_COLON,
  [747] = 1,
    ACTIONS(239), 1,
      sym__HEX_NUMBER,
  [751] = 1,
    ACTIONS(241), 1,
      sym__OCTAL_NUMBER,
  [755] = 1,
    ACTIONS(243), 1,
      sym__OCTAL_NUMBER,
  [759] = 1,
    ACTIONS(245), 1,
      sym__HEX_NUMBER,
  [763] = 1,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
  [767] = 1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 51,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 249,
  [SMALL_STATE(12)] = 264,
  [SMALL_STATE(13)] = 279,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 309,
  [SMALL_STATE(16)] = 324,
  [SMALL_STATE(17)] = 339,
  [SMALL_STATE(18)] = 346,
  [SMALL_STATE(19)] = 353,
  [SMALL_STATE(20)] = 366,
  [SMALL_STATE(21)] = 379,
  [SMALL_STATE(22)] = 392,
  [SMALL_STATE(23)] = 399,
  [SMALL_STATE(24)] = 406,
  [SMALL_STATE(25)] = 413,
  [SMALL_STATE(26)] = 420,
  [SMALL_STATE(27)] = 433,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 447,
  [SMALL_STATE(30)] = 454,
  [SMALL_STATE(31)] = 461,
  [SMALL_STATE(32)] = 468,
  [SMALL_STATE(33)] = 475,
  [SMALL_STATE(34)] = 482,
  [SMALL_STATE(35)] = 495,
  [SMALL_STATE(36)] = 502,
  [SMALL_STATE(37)] = 509,
  [SMALL_STATE(38)] = 516,
  [SMALL_STATE(39)] = 523,
  [SMALL_STATE(40)] = 530,
  [SMALL_STATE(41)] = 540,
  [SMALL_STATE(42)] = 550,
  [SMALL_STATE(43)] = 560,
  [SMALL_STATE(44)] = 570,
  [SMALL_STATE(45)] = 580,
  [SMALL_STATE(46)] = 590,
  [SMALL_STATE(47)] = 598,
  [SMALL_STATE(48)] = 608,
  [SMALL_STATE(49)] = 618,
  [SMALL_STATE(50)] = 628,
  [SMALL_STATE(51)] = 638,
  [SMALL_STATE(52)] = 643,
  [SMALL_STATE(53)] = 648,
  [SMALL_STATE(54)] = 653,
  [SMALL_STATE(55)] = 658,
  [SMALL_STATE(56)] = 663,
  [SMALL_STATE(57)] = 668,
  [SMALL_STATE(58)] = 673,
  [SMALL_STATE(59)] = 678,
  [SMALL_STATE(60)] = 683,
  [SMALL_STATE(61)] = 688,
  [SMALL_STATE(62)] = 693,
  [SMALL_STATE(63)] = 698,
  [SMALL_STATE(64)] = 703,
  [SMALL_STATE(65)] = 708,
  [SMALL_STATE(66)] = 713,
  [SMALL_STATE(67)] = 718,
  [SMALL_STATE(68)] = 723,
  [SMALL_STATE(69)] = 728,
  [SMALL_STATE(70)] = 733,
  [SMALL_STATE(71)] = 738,
  [SMALL_STATE(72)] = 743,
  [SMALL_STATE(73)] = 747,
  [SMALL_STATE(74)] = 751,
  [SMALL_STATE(75)] = 755,
  [SMALL_STATE(76)] = 759,
  [SMALL_STATE(77)] = 763,
  [SMALL_STATE(78)] = 767,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_definition, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(54),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(74),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(76),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(20),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(14),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(68),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(16),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(34),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(34),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(10),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2), SHIFT_REPEAT(8),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_item, 3, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [249] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
