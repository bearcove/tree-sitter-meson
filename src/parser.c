#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  anon_sym_LF = 14,
  anon_sym_CR_LF = 15,
  sym_source_file = 16,
  sym_build_definition = 17,
  sym_statement = 18,
  sym_expression = 19,
  sym_literal = 20,
  sym_integer_literal = 21,
  sym_decimal_literal = 22,
  sym_octal_literal = 23,
  sym_hex_literal = 24,
  sym_string_literal = 25,
  sym_string_simple = 26,
  sym_string_multiline = 27,
  sym_boolean_literal = 28,
  sym__NEWLINE = 29,
  aux_sym_build_definition_repeat1 = 30,
  aux_sym_string_simple_repeat1 = 31,
  aux_sym_string_multiline_repeat1 = 32,
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
  [sym__NEWLINE] = "_NEWLINE",
  [aux_sym_build_definition_repeat1] = "build_definition_repeat1",
  [aux_sym_string_simple_repeat1] = "string_simple_repeat1",
  [aux_sym_string_multiline_repeat1] = "string_multiline_repeat1",
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
  [sym__NEWLINE] = sym__NEWLINE,
  [aux_sym_build_definition_repeat1] = aux_sym_build_definition_repeat1,
  [aux_sym_string_simple_repeat1] = aux_sym_string_simple_repeat1,
  [aux_sym_string_multiline_repeat1] = aux_sym_string_multiline_repeat1,
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
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(6);
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
      if (lookahead == '\n') ADVANCE(52);
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
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(52);
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
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 16},
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
  },
  [1] = {
    [sym_source_file] = STATE(25),
    [sym_build_definition] = STATE(24),
    [sym_statement] = STATE(2),
    [sym_expression] = STATE(11),
    [sym_literal] = STATE(21),
    [sym_integer_literal] = STATE(19),
    [sym_decimal_literal] = STATE(13),
    [sym_octal_literal] = STATE(13),
    [sym_hex_literal] = STATE(13),
    [sym_string_literal] = STATE(19),
    [sym_string_simple] = STATE(14),
    [sym_string_multiline] = STATE(14),
    [sym_boolean_literal] = STATE(19),
    [aux_sym_build_definition_repeat1] = STATE(2),
    [sym__DECIMAL_NUMBER] = ACTIONS(3),
    [anon_sym_0o] = ACTIONS(5),
    [anon_sym_0x] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(11),
    [sym_literal] = STATE(21),
    [sym_integer_literal] = STATE(19),
    [sym_decimal_literal] = STATE(13),
    [sym_octal_literal] = STATE(13),
    [sym_hex_literal] = STATE(13),
    [sym_string_literal] = STATE(19),
    [sym_string_simple] = STATE(14),
    [sym_string_multiline] = STATE(14),
    [sym_boolean_literal] = STATE(19),
    [aux_sym_build_definition_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__DECIMAL_NUMBER] = ACTIONS(3),
    [anon_sym_0o] = ACTIONS(5),
    [anon_sym_0x] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_expression] = STATE(11),
    [sym_literal] = STATE(21),
    [sym_integer_literal] = STATE(19),
    [sym_decimal_literal] = STATE(13),
    [sym_octal_literal] = STATE(13),
    [sym_hex_literal] = STATE(13),
    [sym_string_literal] = STATE(19),
    [sym_string_simple] = STATE(14),
    [sym_string_multiline] = STATE(14),
    [sym_boolean_literal] = STATE(19),
    [aux_sym_build_definition_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__DECIMAL_NUMBER] = ACTIONS(19),
    [anon_sym_0o] = ACTIONS(22),
    [anon_sym_0x] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(34),
    [anon_sym_false] = ACTIONS(34),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      sym__DECIMAL_NUMBER,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_true,
      anon_sym_false,
  [13] = 4,
    ACTIONS(44), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(46), 1,
      aux_sym_string_multiline_token1,
    STATE(5), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(41), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [28] = 4,
    ACTIONS(51), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_string_multiline_token1,
    STATE(7), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(49), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [43] = 4,
    ACTIONS(57), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(59), 1,
      aux_sym_string_multiline_token1,
    STATE(5), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(55), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [58] = 4,
    ACTIONS(61), 1,
      sym_escape_sequence,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      aux_sym_string_simple_token1,
    STATE(8), 1,
      aux_sym_string_simple_repeat1,
  [71] = 4,
    ACTIONS(69), 1,
      sym_escape_sequence,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_string_simple_token1,
    STATE(10), 1,
      aux_sym_string_simple_repeat1,
  [84] = 4,
    ACTIONS(75), 1,
      sym_escape_sequence,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_string_simple_token1,
    STATE(8), 1,
      aux_sym_string_simple_repeat1,
  [97] = 2,
    STATE(4), 1,
      sym__NEWLINE,
    ACTIONS(81), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [105] = 1,
    ACTIONS(83), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [110] = 1,
    ACTIONS(85), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [115] = 1,
    ACTIONS(87), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [120] = 1,
    ACTIONS(89), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [125] = 1,
    ACTIONS(91), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [130] = 1,
    ACTIONS(93), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [135] = 1,
    ACTIONS(95), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [140] = 1,
    ACTIONS(97), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [145] = 1,
    ACTIONS(99), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [150] = 1,
    ACTIONS(101), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [155] = 1,
    ACTIONS(103), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [160] = 1,
    ACTIONS(105), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [165] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [169] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [173] = 1,
    ACTIONS(111), 1,
      sym__HEX_NUMBER,
  [177] = 1,
    ACTIONS(113), 1,
      sym__OCTAL_NUMBER,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 43,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 71,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 105,
  [SMALL_STATE(13)] = 110,
  [SMALL_STATE(14)] = 115,
  [SMALL_STATE(15)] = 120,
  [SMALL_STATE(16)] = 125,
  [SMALL_STATE(17)] = 130,
  [SMALL_STATE(18)] = 135,
  [SMALL_STATE(19)] = 140,
  [SMALL_STATE(20)] = 145,
  [SMALL_STATE(21)] = 150,
  [SMALL_STATE(22)] = 155,
  [SMALL_STATE(23)] = 160,
  [SMALL_STATE(24)] = 165,
  [SMALL_STATE(25)] = 169,
  [SMALL_STATE(26)] = 173,
  [SMALL_STATE(27)] = 177,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_definition, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(15),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(27),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(26),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(8),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(8),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
