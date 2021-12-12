#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

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
  sym_source_file = 19,
  sym_build_definition = 20,
  sym_statement = 21,
  sym_expression = 22,
  sym_literal = 23,
  sym_integer_literal = 24,
  sym_decimal_literal = 25,
  sym_octal_literal = 26,
  sym_hex_literal = 27,
  sym_string_literal = 28,
  sym_string_simple = 29,
  sym_string_multiline = 30,
  sym_boolean_literal = 31,
  sym_array_literal = 32,
  sym__NEWLINE = 33,
  aux_sym_build_definition_repeat1 = 34,
  aux_sym_string_simple_repeat1 = 35,
  aux_sym_string_multiline_repeat1 = 36,
  aux_sym_array_literal_repeat1 = 37,
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
  [aux_sym_build_definition_repeat1] = "build_definition_repeat1",
  [aux_sym_string_simple_repeat1] = "string_simple_repeat1",
  [aux_sym_string_multiline_repeat1] = "string_multiline_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
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
  [aux_sym_build_definition_repeat1] = aux_sym_build_definition_repeat1,
  [aux_sym_string_simple_repeat1] = aux_sym_string_simple_repeat1,
  [aux_sym_string_multiline_repeat1] = aux_sym_string_multiline_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
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
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 't') ADVANCE(12);
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
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 16},
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
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_build_definition] = STATE(56),
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(18),
    [sym_literal] = STATE(53),
    [sym_integer_literal] = STATE(54),
    [sym_decimal_literal] = STATE(24),
    [sym_octal_literal] = STATE(24),
    [sym_hex_literal] = STATE(24),
    [sym_string_literal] = STATE(54),
    [sym_string_simple] = STATE(36),
    [sym_string_multiline] = STATE(36),
    [sym_boolean_literal] = STATE(54),
    [sym_array_literal] = STATE(54),
    [aux_sym_build_definition_repeat1] = STATE(3),
    [sym__DECIMAL_NUMBER] = ACTIONS(3),
    [anon_sym_0o] = ACTIONS(5),
    [anon_sym_0x] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym_expression] = STATE(18),
    [sym_literal] = STATE(53),
    [sym_integer_literal] = STATE(54),
    [sym_decimal_literal] = STATE(24),
    [sym_octal_literal] = STATE(24),
    [sym_hex_literal] = STATE(24),
    [sym_string_literal] = STATE(54),
    [sym_string_simple] = STATE(36),
    [sym_string_multiline] = STATE(36),
    [sym_boolean_literal] = STATE(54),
    [sym_array_literal] = STATE(54),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__DECIMAL_NUMBER] = ACTIONS(19),
    [anon_sym_0o] = ACTIONS(22),
    [anon_sym_0x] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(34),
    [anon_sym_false] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(37),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym_expression] = STATE(18),
    [sym_literal] = STATE(53),
    [sym_integer_literal] = STATE(54),
    [sym_decimal_literal] = STATE(24),
    [sym_octal_literal] = STATE(24),
    [sym_hex_literal] = STATE(24),
    [sym_string_literal] = STATE(54),
    [sym_string_simple] = STATE(36),
    [sym_string_multiline] = STATE(36),
    [sym_boolean_literal] = STATE(54),
    [sym_array_literal] = STATE(54),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym__DECIMAL_NUMBER] = ACTIONS(3),
    [anon_sym_0o] = ACTIONS(5),
    [anon_sym_0x] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [4] = {
    [sym_expression] = STATE(22),
    [sym_literal] = STATE(39),
    [sym_integer_literal] = STATE(40),
    [sym_decimal_literal] = STATE(41),
    [sym_octal_literal] = STATE(41),
    [sym_hex_literal] = STATE(41),
    [sym_string_literal] = STATE(40),
    [sym_string_simple] = STATE(42),
    [sym_string_multiline] = STATE(42),
    [sym_boolean_literal] = STATE(40),
    [sym_array_literal] = STATE(40),
    [sym__DECIMAL_NUMBER] = ACTIONS(42),
    [anon_sym_0o] = ACTIONS(44),
    [anon_sym_0x] = ACTIONS(46),
    [anon_sym_SQUOTE] = ACTIONS(48),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(50),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(56),
  },
  [5] = {
    [sym_expression] = STATE(23),
    [sym_literal] = STATE(39),
    [sym_integer_literal] = STATE(40),
    [sym_decimal_literal] = STATE(41),
    [sym_octal_literal] = STATE(41),
    [sym_hex_literal] = STATE(41),
    [sym_string_literal] = STATE(40),
    [sym_string_simple] = STATE(42),
    [sym_string_multiline] = STATE(42),
    [sym_boolean_literal] = STATE(40),
    [sym_array_literal] = STATE(40),
    [sym__DECIMAL_NUMBER] = ACTIONS(42),
    [anon_sym_0o] = ACTIONS(44),
    [anon_sym_0x] = ACTIONS(46),
    [anon_sym_SQUOTE] = ACTIONS(48),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(50),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(58),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(42), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(44), 1,
      anon_sym_0o,
    ACTIONS(46), 1,
      anon_sym_0x,
    ACTIONS(48), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_expression,
    STATE(39), 1,
      sym_literal,
    ACTIONS(52), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(41), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(40), 4,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
  [44] = 2,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      sym__DECIMAL_NUMBER,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_LBRACK,
  [58] = 4,
    ACTIONS(66), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(68), 1,
      aux_sym_string_multiline_token1,
    STATE(12), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(64), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [73] = 4,
    ACTIONS(72), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(74), 1,
      aux_sym_string_multiline_token1,
    STATE(10), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(70), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [88] = 4,
    ACTIONS(78), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(80), 1,
      aux_sym_string_multiline_token1,
    STATE(11), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(76), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [103] = 4,
    ACTIONS(85), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(87), 1,
      aux_sym_string_multiline_token1,
    STATE(11), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(82), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [118] = 4,
    ACTIONS(80), 1,
      aux_sym_string_multiline_token1,
    ACTIONS(90), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(11), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(76), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [133] = 4,
    ACTIONS(92), 1,
      sym_escape_sequence,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      aux_sym_string_simple_token1,
    STATE(17), 1,
      aux_sym_string_simple_repeat1,
  [146] = 4,
    ACTIONS(98), 1,
      sym_escape_sequence,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_string_simple_token1,
    STATE(13), 1,
      aux_sym_string_simple_repeat1,
  [159] = 4,
    ACTIONS(104), 1,
      sym_escape_sequence,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      aux_sym_string_simple_token1,
    STATE(16), 1,
      aux_sym_string_simple_repeat1,
  [172] = 4,
    ACTIONS(92), 1,
      sym_escape_sequence,
    ACTIONS(96), 1,
      aux_sym_string_simple_token1,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym_string_simple_repeat1,
  [185] = 4,
    ACTIONS(112), 1,
      sym_escape_sequence,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      aux_sym_string_simple_token1,
    STATE(17), 1,
      aux_sym_string_simple_repeat1,
  [198] = 2,
    STATE(7), 1,
      sym__NEWLINE,
    ACTIONS(120), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [206] = 3,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_array_literal_repeat1,
  [216] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_array_literal_repeat1,
  [226] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_array_literal_repeat1,
  [236] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_literal_repeat1,
  [246] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_array_literal_repeat1,
  [256] = 1,
    ACTIONS(137), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [261] = 1,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [266] = 1,
    ACTIONS(141), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [271] = 1,
    ACTIONS(143), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [276] = 1,
    ACTIONS(145), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [281] = 1,
    ACTIONS(147), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [286] = 1,
    ACTIONS(149), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [291] = 1,
    ACTIONS(151), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [296] = 1,
    ACTIONS(153), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [301] = 1,
    ACTIONS(155), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [306] = 1,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [311] = 1,
    ACTIONS(157), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [316] = 1,
    ACTIONS(159), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [321] = 1,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [326] = 1,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [331] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [336] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [341] = 1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [346] = 1,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [351] = 1,
    ACTIONS(173), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [356] = 1,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [361] = 1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [366] = 1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [371] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [376] = 1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [381] = 1,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [386] = 1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [391] = 1,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [396] = 1,
    ACTIONS(191), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [401] = 1,
    ACTIONS(193), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [406] = 1,
    ACTIONS(195), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [411] = 1,
    ACTIONS(197), 1,
      sym__HEX_NUMBER,
  [415] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [419] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [423] = 1,
    ACTIONS(203), 1,
      sym__OCTAL_NUMBER,
  [427] = 1,
    ACTIONS(205), 1,
      sym__HEX_NUMBER,
  [431] = 1,
    ACTIONS(207), 1,
      sym__OCTAL_NUMBER,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 44,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 73,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 103,
  [SMALL_STATE(12)] = 118,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 159,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 185,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 206,
  [SMALL_STATE(20)] = 216,
  [SMALL_STATE(21)] = 226,
  [SMALL_STATE(22)] = 236,
  [SMALL_STATE(23)] = 246,
  [SMALL_STATE(24)] = 256,
  [SMALL_STATE(25)] = 261,
  [SMALL_STATE(26)] = 266,
  [SMALL_STATE(27)] = 271,
  [SMALL_STATE(28)] = 276,
  [SMALL_STATE(29)] = 281,
  [SMALL_STATE(30)] = 286,
  [SMALL_STATE(31)] = 291,
  [SMALL_STATE(32)] = 296,
  [SMALL_STATE(33)] = 301,
  [SMALL_STATE(34)] = 306,
  [SMALL_STATE(35)] = 311,
  [SMALL_STATE(36)] = 316,
  [SMALL_STATE(37)] = 321,
  [SMALL_STATE(38)] = 326,
  [SMALL_STATE(39)] = 331,
  [SMALL_STATE(40)] = 336,
  [SMALL_STATE(41)] = 341,
  [SMALL_STATE(42)] = 346,
  [SMALL_STATE(43)] = 351,
  [SMALL_STATE(44)] = 356,
  [SMALL_STATE(45)] = 361,
  [SMALL_STATE(46)] = 366,
  [SMALL_STATE(47)] = 371,
  [SMALL_STATE(48)] = 376,
  [SMALL_STATE(49)] = 381,
  [SMALL_STATE(50)] = 386,
  [SMALL_STATE(51)] = 391,
  [SMALL_STATE(52)] = 396,
  [SMALL_STATE(53)] = 401,
  [SMALL_STATE(54)] = 406,
  [SMALL_STATE(55)] = 411,
  [SMALL_STATE(56)] = 415,
  [SMALL_STATE(57)] = 419,
  [SMALL_STATE(58)] = 423,
  [SMALL_STATE(59)] = 427,
  [SMALL_STATE(60)] = 431,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(31),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(60),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(59),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(15),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(52),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_definition, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(11),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(11),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(17),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(17),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
