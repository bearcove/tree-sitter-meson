#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
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
  sym_source_file = 14,
  sym_literal = 15,
  sym_integer_literal = 16,
  sym_decimal_literal = 17,
  sym_octal_literal = 18,
  sym_hex_literal = 19,
  sym_string_literal = 20,
  sym_string_simple = 21,
  sym_string_multiline = 22,
  sym_boolean_literal = 23,
  aux_sym_string_simple_repeat1 = 24,
  aux_sym_string_multiline_repeat1 = 25,
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
  [sym_source_file] = "source_file",
  [sym_literal] = "literal",
  [sym_integer_literal] = "integer_literal",
  [sym_decimal_literal] = "decimal_literal",
  [sym_octal_literal] = "octal_literal",
  [sym_hex_literal] = "hex_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_simple] = "string_simple",
  [sym_string_multiline] = "string_multiline",
  [sym_boolean_literal] = "boolean_literal",
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
  [sym_source_file] = sym_source_file,
  [sym_literal] = sym_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_octal_literal] = sym_octal_literal,
  [sym_hex_literal] = sym_hex_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_simple] = sym_string_simple,
  [sym_string_multiline] = sym_string_multiline,
  [sym_boolean_literal] = sym_boolean_literal,
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
  [sym_source_file] = {
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
      if (eof) ADVANCE(25);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(33);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'a') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'l') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(3);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 16},
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
    [sym_source_file] = STATE(9),
    [sym_literal] = STATE(10),
    [sym_integer_literal] = STATE(8),
    [sym_decimal_literal] = STATE(11),
    [sym_octal_literal] = STATE(11),
    [sym_hex_literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_string_simple] = STATE(12),
    [sym_string_multiline] = STATE(12),
    [sym_boolean_literal] = STATE(8),
    [sym__DECIMAL_NUMBER] = ACTIONS(3),
    [anon_sym_0o] = ACTIONS(5),
    [anon_sym_0x] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(18), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(20), 1,
      aux_sym_string_multiline_token1,
    STATE(2), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(15), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [15] = 4,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(27), 1,
      aux_sym_string_multiline_token1,
    STATE(2), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(23), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [30] = 4,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_string_multiline_token1,
    STATE(3), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(29), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [45] = 4,
    ACTIONS(35), 1,
      sym_escape_sequence,
    ACTIONS(38), 1,
      anon_sym_SQUOTE,
    ACTIONS(40), 1,
      aux_sym_string_simple_token1,
    STATE(5), 1,
      aux_sym_string_simple_repeat1,
  [58] = 4,
    ACTIONS(43), 1,
      sym_escape_sequence,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_string_simple_token1,
    STATE(7), 1,
      aux_sym_string_simple_repeat1,
  [71] = 4,
    ACTIONS(49), 1,
      sym_escape_sequence,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_string_simple_token1,
    STATE(5), 1,
      aux_sym_string_simple_repeat1,
  [84] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [88] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [92] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [96] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [100] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [104] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [108] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [112] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [116] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [120] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [124] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [128] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [132] = 1,
    ACTIONS(79), 1,
      sym__HEX_NUMBER,
  [136] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [140] = 1,
    ACTIONS(83), 1,
      sym__OCTAL_NUMBER,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 108,
  [SMALL_STATE(15)] = 112,
  [SMALL_STATE(16)] = 116,
  [SMALL_STATE(17)] = 120,
  [SMALL_STATE(18)] = 124,
  [SMALL_STATE(19)] = 128,
  [SMALL_STATE(20)] = 132,
  [SMALL_STATE(21)] = 136,
  [SMALL_STATE(22)] = 140,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
