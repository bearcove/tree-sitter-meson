#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_if = 1,
  anon_sym_elif = 2,
  anon_sym_else = 3,
  anon_sym_endif = 4,
  anon_sym_foreach = 5,
  anon_sym_COLON = 6,
  anon_sym_endforeach = 7,
  anon_sym_EQ = 8,
  anon_sym_STAR_EQ = 9,
  anon_sym_SLASH_EQ = 10,
  anon_sym_PERCENT_EQ = 11,
  anon_sym_PLUS_EQ = 12,
  anon_sym_DASH_EQ = 13,
  anon_sym_break = 14,
  anon_sym_continue = 15,
  sym__DECIMAL_NUMBER = 16,
  anon_sym_0o = 17,
  sym__OCTAL_NUMBER = 18,
  anon_sym_0x = 19,
  sym__HEX_NUMBER = 20,
  sym_escape_sequence = 21,
  anon_sym_SQUOTE = 22,
  aux_sym_string_simple_token1 = 23,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 24,
  aux_sym_string_multiline_token1 = 25,
  anon_sym_SQUOTE_SQUOTE = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  anon_sym_LBRACK = 29,
  anon_sym_COMMA = 30,
  anon_sym_RBRACK = 31,
  anon_sym_LF = 32,
  anon_sym_CR_LF = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  sym__IDENTIFIER = 36,
  sym_comment = 37,
  sym_source_file = 38,
  sym_build_definition = 39,
  sym_statement = 40,
  sym_selection_statement = 41,
  sym_iteration_statement = 42,
  sym_assignment_statement = 43,
  sym_assignment_operator = 44,
  sym_jump_statement = 45,
  sym_condition = 46,
  sym_expression = 47,
  sym_literal = 48,
  sym_integer_literal = 49,
  sym_decimal_literal = 50,
  sym_octal_literal = 51,
  sym_hex_literal = 52,
  sym_string_literal = 53,
  sym_string_simple = 54,
  sym_string_multiline = 55,
  sym_boolean_literal = 56,
  sym_array_literal = 57,
  sym__NEWLINE = 58,
  sym_dictionary_literal = 59,
  sym_key_value_item = 60,
  sym_identifier_list = 61,
  sym_id_expression = 62,
  aux_sym_build_definition_repeat1 = 63,
  aux_sym_selection_statement_repeat1 = 64,
  aux_sym_iteration_statement_repeat1 = 65,
  aux_sym_string_simple_repeat1 = 66,
  aux_sym_string_multiline_repeat1 = 67,
  aux_sym_array_literal_repeat1 = 68,
  aux_sym_dictionary_literal_repeat1 = 69,
  aux_sym_identifier_list_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [anon_sym_foreach] = "foreach",
  [anon_sym_COLON] = ":",
  [anon_sym_endforeach] = "endforeach",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
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
  [sym__IDENTIFIER] = "_IDENTIFIER",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_build_definition] = "build_definition",
  [sym_statement] = "statement",
  [sym_selection_statement] = "selection_statement",
  [sym_iteration_statement] = "iteration_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_assignment_operator] = "assignment_operator",
  [sym_jump_statement] = "jump_statement",
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
  [sym_identifier_list] = "identifier_list",
  [sym_id_expression] = "id_expression",
  [aux_sym_build_definition_repeat1] = "build_definition_repeat1",
  [aux_sym_selection_statement_repeat1] = "selection_statement_repeat1",
  [aux_sym_iteration_statement_repeat1] = "iteration_statement_repeat1",
  [aux_sym_string_simple_repeat1] = "string_simple_repeat1",
  [aux_sym_string_multiline_repeat1] = "string_multiline_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [aux_sym_dictionary_literal_repeat1] = "dictionary_literal_repeat1",
  [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_endforeach] = anon_sym_endforeach,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
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
  [sym__IDENTIFIER] = sym__IDENTIFIER,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_build_definition] = sym_build_definition,
  [sym_statement] = sym_statement,
  [sym_selection_statement] = sym_selection_statement,
  [sym_iteration_statement] = sym_iteration_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_jump_statement] = sym_jump_statement,
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
  [sym_identifier_list] = sym_identifier_list,
  [sym_id_expression] = sym_id_expression,
  [aux_sym_build_definition_repeat1] = aux_sym_build_definition_repeat1,
  [aux_sym_selection_statement_repeat1] = aux_sym_selection_statement_repeat1,
  [aux_sym_iteration_statement_repeat1] = aux_sym_iteration_statement_repeat1,
  [aux_sym_string_simple_repeat1] = aux_sym_string_simple_repeat1,
  [aux_sym_string_multiline_repeat1] = aux_sym_string_multiline_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [aux_sym_dictionary_literal_repeat1] = aux_sym_dictionary_literal_repeat1,
  [aux_sym_identifier_list_repeat1] = aux_sym_identifier_list_repeat1,
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
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endforeach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
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
  [sym__IDENTIFIER] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [sym_iteration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_statement] = {
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
  [sym_identifier_list] = {
    .visible = true,
    .named = true,
  },
  [sym_id_expression] = {
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
  [aux_sym_iteration_statement_repeat1] = {
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
  [aux_sym_identifier_list_repeat1] = {
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
      if (eof) ADVANCE(36);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'k') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 18},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 25},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 26},
  [131] = {.lex_state = 18},
  [132] = {.lex_state = 26},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 18},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_endforeach] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
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
    [sym__IDENTIFIER] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(127),
    [sym_build_definition] = STATE(128),
    [sym_statement] = STATE(17),
    [sym_selection_statement] = STATE(104),
    [sym_iteration_statement] = STATE(104),
    [sym_assignment_statement] = STATE(104),
    [sym_expression] = STATE(34),
    [sym_literal] = STATE(51),
    [sym_integer_literal] = STATE(39),
    [sym_decimal_literal] = STATE(46),
    [sym_octal_literal] = STATE(46),
    [sym_hex_literal] = STATE(46),
    [sym_string_literal] = STATE(39),
    [sym_string_simple] = STATE(44),
    [sym_string_multiline] = STATE(44),
    [sym_boolean_literal] = STATE(39),
    [sym_array_literal] = STATE(39),
    [sym_dictionary_literal] = STATE(39),
    [sym_id_expression] = STATE(51),
    [aux_sym_build_definition_repeat1] = STATE(17),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_foreach] = ACTIONS(5),
    [sym__DECIMAL_NUMBER] = ACTIONS(7),
    [anon_sym_0o] = ACTIONS(9),
    [anon_sym_0x] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [sym__IDENTIFIER] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(27), 1,
      anon_sym_endforeach,
    ACTIONS(31), 1,
      sym_comment,
    STATE(37), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(3), 3,
      sym_statement,
      sym_jump_statement,
      aux_sym_iteration_statement_repeat1,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(92), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [78] = 21,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(36), 1,
      anon_sym_foreach,
    ACTIONS(39), 1,
      anon_sym_endforeach,
    ACTIONS(44), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(47), 1,
      anon_sym_0o,
    ACTIONS(50), 1,
      anon_sym_0x,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      sym__IDENTIFIER,
    ACTIONS(71), 1,
      sym_comment,
    STATE(37), 1,
      sym_expression,
    ACTIONS(41), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(3), 3,
      sym_statement,
      sym_jump_statement,
      aux_sym_iteration_statement_repeat1,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(92), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [156] = 23,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(74), 1,
      anon_sym_elif,
    ACTIONS(76), 1,
      anon_sym_else,
    ACTIONS(78), 1,
      anon_sym_endif,
    ACTIONS(80), 1,
      sym_comment,
    STATE(35), 1,
      sym_expression,
    STATE(76), 1,
      aux_sym_selection_statement_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(105), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [238] = 23,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(74), 1,
      anon_sym_elif,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_else,
    ACTIONS(84), 1,
      anon_sym_endif,
    STATE(35), 1,
      sym_expression,
    STATE(75), 1,
      aux_sym_selection_statement_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(105), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [320] = 21,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_endforeach,
    STATE(37), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(2), 3,
      sym_statement,
      sym_jump_statement,
      aux_sym_iteration_statement_repeat1,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(92), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [398] = 20,
    ACTIONS(88), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(96), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(99), 1,
      anon_sym_0o,
    ACTIONS(102), 1,
      anon_sym_0x,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      sym__IDENTIFIER,
    ACTIONS(123), 1,
      sym_comment,
    STATE(35), 1,
      sym_expression,
    ACTIONS(111), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    ACTIONS(91), 3,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(105), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [473] = 20,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(80), 1,
      sym_comment,
    STATE(35), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    ACTIONS(126), 3,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(105), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [548] = 20,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(80), 1,
      sym_comment,
    STATE(35), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    ACTIONS(128), 3,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(105), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [623] = 20,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(130), 1,
      anon_sym_endif,
    ACTIONS(132), 1,
      sym_comment,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(93), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [696] = 20,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_endif,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(93), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [769] = 20,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_endif,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(93), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [842] = 20,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_endif,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(93), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [915] = 20,
    ACTIONS(88), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(96), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(99), 1,
      anon_sym_0o,
    ACTIONS(102), 1,
      anon_sym_0x,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      sym__IDENTIFIER,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      sym_comment,
    STATE(34), 1,
      sym_expression,
    ACTIONS(111), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(104), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [988] = 20,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(78), 1,
      anon_sym_endif,
    ACTIONS(132), 1,
      sym_comment,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(93), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1061] = 20,
    ACTIONS(88), 1,
      anon_sym_if,
    ACTIONS(91), 1,
      anon_sym_endif,
    ACTIONS(93), 1,
      anon_sym_foreach,
    ACTIONS(96), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(99), 1,
      anon_sym_0o,
    ACTIONS(102), 1,
      anon_sym_0x,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      sym__IDENTIFIER,
    ACTIONS(143), 1,
      sym_comment,
    STATE(36), 1,
      sym_expression,
    ACTIONS(111), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(93), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1134] = 20,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(104), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1207] = 20,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(5), 1,
      anon_sym_foreach,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    ACTIONS(130), 1,
      anon_sym_endif,
    ACTIONS(132), 1,
      sym_comment,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(93), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1280] = 16,
    ACTIONS(148), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(150), 1,
      anon_sym_0o,
    ACTIONS(152), 1,
      anon_sym_0x,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      sym__IDENTIFIER,
    STATE(94), 1,
      sym_key_value_item,
    STATE(129), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(87), 2,
      sym_literal,
      sym_id_expression,
    STATE(84), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(86), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1338] = 16,
    ACTIONS(148), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(150), 1,
      anon_sym_0o,
    ACTIONS(152), 1,
      anon_sym_0x,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym__IDENTIFIER,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      sym_key_value_item,
    STATE(129), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(87), 2,
      sym_literal,
      sym_id_expression,
    STATE(84), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(86), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1396] = 15,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    STATE(107), 1,
      sym_condition,
    STATE(116), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1451] = 15,
    ACTIONS(148), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(150), 1,
      anon_sym_0o,
    ACTIONS(152), 1,
      anon_sym_0x,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym__IDENTIFIER,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(87), 2,
      sym_literal,
      sym_id_expression,
    STATE(84), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(86), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1506] = 15,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    STATE(110), 1,
      sym_condition,
    STATE(116), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1561] = 15,
    ACTIONS(148), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(150), 1,
      anon_sym_0o,
    ACTIONS(152), 1,
      anon_sym_0x,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym__IDENTIFIER,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(87), 2,
      sym_literal,
      sym_id_expression,
    STATE(84), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(86), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1616] = 15,
    ACTIONS(148), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(150), 1,
      anon_sym_0o,
    ACTIONS(152), 1,
      anon_sym_0x,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym__IDENTIFIER,
    STATE(121), 1,
      sym_key_value_item,
    STATE(129), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(87), 2,
      sym_literal,
      sym_id_expression,
    STATE(84), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(86), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1671] = 14,
    ACTIONS(148), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(150), 1,
      anon_sym_0o,
    ACTIONS(152), 1,
      anon_sym_0x,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym__IDENTIFIER,
    STATE(126), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(87), 2,
      sym_literal,
      sym_id_expression,
    STATE(84), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(86), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1723] = 14,
    ACTIONS(148), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(150), 1,
      anon_sym_0o,
    ACTIONS(152), 1,
      anon_sym_0x,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym__IDENTIFIER,
    STATE(119), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(87), 2,
      sym_literal,
      sym_id_expression,
    STATE(84), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(86), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1775] = 14,
    ACTIONS(7), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(9), 1,
      anon_sym_0o,
    ACTIONS(11), 1,
      anon_sym_0x,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym__IDENTIFIER,
    STATE(124), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 2,
      sym_literal,
      sym_id_expression,
    STATE(46), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(39), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1827] = 2,
    ACTIONS(176), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(174), 10,
      anon_sym_if,
      anon_sym_foreach,
      anon_sym_endforeach,
      anon_sym_break,
      anon_sym_continue,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
  [1848] = 2,
    ACTIONS(180), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(178), 10,
      anon_sym_if,
      anon_sym_foreach,
      anon_sym_endforeach,
      anon_sym_break,
      anon_sym_continue,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
  [1869] = 2,
    ACTIONS(176), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(174), 10,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
      anon_sym_foreach,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
  [1890] = 2,
    ACTIONS(176), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(174), 8,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_foreach,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
  [1909] = 2,
    ACTIONS(174), 7,
      anon_sym_if,
      anon_sym_foreach,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
  [1928] = 4,
    STATE(28), 1,
      sym_assignment_operator,
    STATE(33), 1,
      sym__NEWLINE,
    ACTIONS(184), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(182), 6,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [1947] = 4,
    STATE(28), 1,
      sym_assignment_operator,
    STATE(31), 1,
      sym__NEWLINE,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(182), 6,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [1966] = 4,
    STATE(28), 1,
      sym_assignment_operator,
    STATE(32), 1,
      sym__NEWLINE,
    ACTIONS(188), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(182), 6,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [1985] = 4,
    STATE(28), 1,
      sym_assignment_operator,
    STATE(29), 1,
      sym__NEWLINE,
    ACTIONS(190), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(182), 6,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [2004] = 2,
    ACTIONS(192), 5,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(194), 5,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [2019] = 1,
    ACTIONS(196), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2030] = 1,
    ACTIONS(198), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2041] = 1,
    ACTIONS(200), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2052] = 1,
    ACTIONS(202), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2063] = 1,
    ACTIONS(204), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2074] = 1,
    ACTIONS(206), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2085] = 1,
    ACTIONS(208), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2096] = 1,
    ACTIONS(210), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2107] = 1,
    ACTIONS(212), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2118] = 1,
    ACTIONS(214), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2129] = 1,
    ACTIONS(216), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2140] = 1,
    ACTIONS(218), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2151] = 1,
    ACTIONS(220), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2162] = 1,
    ACTIONS(222), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2173] = 1,
    ACTIONS(224), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2184] = 1,
    ACTIONS(226), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2195] = 1,
    ACTIONS(228), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2206] = 1,
    ACTIONS(230), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2217] = 1,
    ACTIONS(232), 8,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2228] = 4,
    ACTIONS(236), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(238), 1,
      aux_sym_string_multiline_token1,
    STATE(60), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(234), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [2243] = 4,
    ACTIONS(242), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_multiline_token1,
    STATE(62), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(240), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [2258] = 4,
    ACTIONS(244), 1,
      aux_sym_string_multiline_token1,
    ACTIONS(246), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(62), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(240), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [2273] = 4,
    ACTIONS(250), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(252), 1,
      aux_sym_string_multiline_token1,
    STATE(59), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(248), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [2288] = 4,
    ACTIONS(257), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(259), 1,
      aux_sym_string_multiline_token1,
    STATE(62), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(254), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [2303] = 1,
    ACTIONS(262), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2310] = 1,
    ACTIONS(264), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2317] = 4,
    ACTIONS(266), 1,
      sym_escape_sequence,
    ACTIONS(268), 1,
      anon_sym_SQUOTE,
    ACTIONS(270), 1,
      aux_sym_string_simple_token1,
    STATE(74), 1,
      aux_sym_string_simple_repeat1,
  [2330] = 4,
    ACTIONS(272), 1,
      sym_escape_sequence,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_simple_token1,
    STATE(85), 1,
      aux_sym_string_simple_repeat1,
  [2343] = 4,
    ACTIONS(278), 1,
      sym_escape_sequence,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
    ACTIONS(282), 1,
      aux_sym_string_simple_token1,
    STATE(66), 1,
      aux_sym_string_simple_repeat1,
  [2356] = 1,
    ACTIONS(284), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2363] = 1,
    ACTIONS(286), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2370] = 1,
    ACTIONS(288), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2377] = 1,
    ACTIONS(290), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2384] = 1,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2391] = 1,
    ACTIONS(294), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2398] = 4,
    ACTIONS(272), 1,
      sym_escape_sequence,
    ACTIONS(276), 1,
      aux_sym_string_simple_token1,
    ACTIONS(296), 1,
      anon_sym_SQUOTE,
    STATE(85), 1,
      aux_sym_string_simple_repeat1,
  [2411] = 4,
    ACTIONS(298), 1,
      anon_sym_elif,
    ACTIONS(300), 1,
      anon_sym_else,
    ACTIONS(302), 1,
      anon_sym_endif,
    STATE(77), 1,
      aux_sym_selection_statement_repeat1,
  [2424] = 4,
    ACTIONS(298), 1,
      anon_sym_elif,
    ACTIONS(304), 1,
      anon_sym_else,
    ACTIONS(306), 1,
      anon_sym_endif,
    STATE(77), 1,
      aux_sym_selection_statement_repeat1,
  [2437] = 3,
    ACTIONS(308), 1,
      anon_sym_elif,
    STATE(77), 1,
      aux_sym_selection_statement_repeat1,
    ACTIONS(311), 2,
      anon_sym_else,
      anon_sym_endif,
  [2448] = 1,
    ACTIONS(313), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2455] = 1,
    ACTIONS(315), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2462] = 1,
    ACTIONS(317), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2469] = 1,
    ACTIONS(319), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2476] = 1,
    ACTIONS(321), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2483] = 1,
    ACTIONS(323), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2490] = 1,
    ACTIONS(325), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2497] = 4,
    ACTIONS(327), 1,
      sym_escape_sequence,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_string_simple_token1,
    STATE(85), 1,
      aux_sym_string_simple_repeat1,
  [2510] = 1,
    ACTIONS(335), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2517] = 1,
    ACTIONS(337), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2524] = 1,
    ACTIONS(339), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2531] = 1,
    ACTIONS(341), 4,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2538] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_literal_repeat1,
  [2548] = 3,
    ACTIONS(347), 1,
      sym__IDENTIFIER,
    STATE(109), 1,
      sym_id_expression,
    STATE(133), 1,
      sym_identifier_list,
  [2558] = 2,
    STATE(29), 1,
      sym__NEWLINE,
    ACTIONS(190), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2566] = 2,
    STATE(32), 1,
      sym__NEWLINE,
    ACTIONS(188), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2574] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_dictionary_literal_repeat1,
  [2584] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_dictionary_literal_repeat1,
  [2594] = 3,
    ACTIONS(355), 1,
      anon_sym_COLON,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_identifier_list_repeat1,
  [2604] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_literal_repeat1,
  [2614] = 3,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_identifier_list_repeat1,
  [2624] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_dictionary_literal_repeat1,
  [2634] = 2,
    STATE(30), 1,
      sym__NEWLINE,
    ACTIONS(368), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2642] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      aux_sym_array_literal_repeat1,
  [2652] = 3,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_array_literal_repeat1,
  [2662] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_dictionary_literal_repeat1,
  [2672] = 2,
    STATE(33), 1,
      sym__NEWLINE,
    ACTIONS(184), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2680] = 2,
    STATE(31), 1,
      sym__NEWLINE,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2688] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_array_literal_repeat1,
  [2698] = 2,
    STATE(5), 1,
      sym__NEWLINE,
    ACTIONS(381), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2706] = 2,
    STATE(6), 1,
      sym__NEWLINE,
    ACTIONS(383), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2714] = 3,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_COLON,
    STATE(98), 1,
      aux_sym_identifier_list_repeat1,
  [2724] = 2,
    STATE(9), 1,
      sym__NEWLINE,
    ACTIONS(387), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2732] = 3,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_dictionary_literal_repeat1,
  [2742] = 1,
    ACTIONS(355), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [2747] = 1,
    ACTIONS(394), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2752] = 2,
    ACTIONS(396), 1,
      sym__IDENTIFIER,
    STATE(108), 1,
      sym_id_expression,
  [2759] = 1,
    ACTIONS(398), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2764] = 1,
    ACTIONS(400), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2769] = 1,
    ACTIONS(402), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2774] = 1,
    ACTIONS(404), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2779] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2784] = 1,
    ACTIONS(408), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2789] = 1,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2794] = 2,
    ACTIONS(347), 1,
      sym__IDENTIFIER,
    STATE(112), 1,
      sym_id_expression,
  [2801] = 1,
    ACTIONS(410), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2806] = 1,
    ACTIONS(412), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2811] = 1,
    ACTIONS(414), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2816] = 1,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2821] = 1,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
  [2825] = 1,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
  [2829] = 1,
    ACTIONS(420), 1,
      anon_sym_COLON,
  [2833] = 1,
    ACTIONS(422), 1,
      sym__HEX_NUMBER,
  [2837] = 1,
    ACTIONS(424), 1,
      sym__OCTAL_NUMBER,
  [2841] = 1,
    ACTIONS(426), 1,
      sym__HEX_NUMBER,
  [2845] = 1,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [2849] = 1,
    ACTIONS(430), 1,
      sym__OCTAL_NUMBER,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 238,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 398,
  [SMALL_STATE(8)] = 473,
  [SMALL_STATE(9)] = 548,
  [SMALL_STATE(10)] = 623,
  [SMALL_STATE(11)] = 696,
  [SMALL_STATE(12)] = 769,
  [SMALL_STATE(13)] = 842,
  [SMALL_STATE(14)] = 915,
  [SMALL_STATE(15)] = 988,
  [SMALL_STATE(16)] = 1061,
  [SMALL_STATE(17)] = 1134,
  [SMALL_STATE(18)] = 1207,
  [SMALL_STATE(19)] = 1280,
  [SMALL_STATE(20)] = 1338,
  [SMALL_STATE(21)] = 1396,
  [SMALL_STATE(22)] = 1451,
  [SMALL_STATE(23)] = 1506,
  [SMALL_STATE(24)] = 1561,
  [SMALL_STATE(25)] = 1616,
  [SMALL_STATE(26)] = 1671,
  [SMALL_STATE(27)] = 1723,
  [SMALL_STATE(28)] = 1775,
  [SMALL_STATE(29)] = 1827,
  [SMALL_STATE(30)] = 1848,
  [SMALL_STATE(31)] = 1869,
  [SMALL_STATE(32)] = 1890,
  [SMALL_STATE(33)] = 1909,
  [SMALL_STATE(34)] = 1928,
  [SMALL_STATE(35)] = 1947,
  [SMALL_STATE(36)] = 1966,
  [SMALL_STATE(37)] = 1985,
  [SMALL_STATE(38)] = 2004,
  [SMALL_STATE(39)] = 2019,
  [SMALL_STATE(40)] = 2030,
  [SMALL_STATE(41)] = 2041,
  [SMALL_STATE(42)] = 2052,
  [SMALL_STATE(43)] = 2063,
  [SMALL_STATE(44)] = 2074,
  [SMALL_STATE(45)] = 2085,
  [SMALL_STATE(46)] = 2096,
  [SMALL_STATE(47)] = 2107,
  [SMALL_STATE(48)] = 2118,
  [SMALL_STATE(49)] = 2129,
  [SMALL_STATE(50)] = 2140,
  [SMALL_STATE(51)] = 2151,
  [SMALL_STATE(52)] = 2162,
  [SMALL_STATE(53)] = 2173,
  [SMALL_STATE(54)] = 2184,
  [SMALL_STATE(55)] = 2195,
  [SMALL_STATE(56)] = 2206,
  [SMALL_STATE(57)] = 2217,
  [SMALL_STATE(58)] = 2228,
  [SMALL_STATE(59)] = 2243,
  [SMALL_STATE(60)] = 2258,
  [SMALL_STATE(61)] = 2273,
  [SMALL_STATE(62)] = 2288,
  [SMALL_STATE(63)] = 2303,
  [SMALL_STATE(64)] = 2310,
  [SMALL_STATE(65)] = 2317,
  [SMALL_STATE(66)] = 2330,
  [SMALL_STATE(67)] = 2343,
  [SMALL_STATE(68)] = 2356,
  [SMALL_STATE(69)] = 2363,
  [SMALL_STATE(70)] = 2370,
  [SMALL_STATE(71)] = 2377,
  [SMALL_STATE(72)] = 2384,
  [SMALL_STATE(73)] = 2391,
  [SMALL_STATE(74)] = 2398,
  [SMALL_STATE(75)] = 2411,
  [SMALL_STATE(76)] = 2424,
  [SMALL_STATE(77)] = 2437,
  [SMALL_STATE(78)] = 2448,
  [SMALL_STATE(79)] = 2455,
  [SMALL_STATE(80)] = 2462,
  [SMALL_STATE(81)] = 2469,
  [SMALL_STATE(82)] = 2476,
  [SMALL_STATE(83)] = 2483,
  [SMALL_STATE(84)] = 2490,
  [SMALL_STATE(85)] = 2497,
  [SMALL_STATE(86)] = 2510,
  [SMALL_STATE(87)] = 2517,
  [SMALL_STATE(88)] = 2524,
  [SMALL_STATE(89)] = 2531,
  [SMALL_STATE(90)] = 2538,
  [SMALL_STATE(91)] = 2548,
  [SMALL_STATE(92)] = 2558,
  [SMALL_STATE(93)] = 2566,
  [SMALL_STATE(94)] = 2574,
  [SMALL_STATE(95)] = 2584,
  [SMALL_STATE(96)] = 2594,
  [SMALL_STATE(97)] = 2604,
  [SMALL_STATE(98)] = 2614,
  [SMALL_STATE(99)] = 2624,
  [SMALL_STATE(100)] = 2634,
  [SMALL_STATE(101)] = 2642,
  [SMALL_STATE(102)] = 2652,
  [SMALL_STATE(103)] = 2662,
  [SMALL_STATE(104)] = 2672,
  [SMALL_STATE(105)] = 2680,
  [SMALL_STATE(106)] = 2688,
  [SMALL_STATE(107)] = 2698,
  [SMALL_STATE(108)] = 2706,
  [SMALL_STATE(109)] = 2714,
  [SMALL_STATE(110)] = 2724,
  [SMALL_STATE(111)] = 2732,
  [SMALL_STATE(112)] = 2742,
  [SMALL_STATE(113)] = 2747,
  [SMALL_STATE(114)] = 2752,
  [SMALL_STATE(115)] = 2759,
  [SMALL_STATE(116)] = 2764,
  [SMALL_STATE(117)] = 2769,
  [SMALL_STATE(118)] = 2774,
  [SMALL_STATE(119)] = 2779,
  [SMALL_STATE(120)] = 2784,
  [SMALL_STATE(121)] = 2789,
  [SMALL_STATE(122)] = 2794,
  [SMALL_STATE(123)] = 2801,
  [SMALL_STATE(124)] = 2806,
  [SMALL_STATE(125)] = 2811,
  [SMALL_STATE(126)] = 2816,
  [SMALL_STATE(127)] = 2821,
  [SMALL_STATE(128)] = 2825,
  [SMALL_STATE(129)] = 2829,
  [SMALL_STATE(130)] = 2833,
  [SMALL_STATE(131)] = 2837,
  [SMALL_STATE(132)] = 2841,
  [SMALL_STATE(133)] = 2845,
  [SMALL_STATE(134)] = 2849,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(21),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(91),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(100),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(53),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(134),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(132),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(65),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(58),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(56),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(22),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(19),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(55),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(92),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(21),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(91),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(53),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(134),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(132),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(65),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(58),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(56),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(22),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(19),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(55),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(105),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selection_statement_repeat1, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selection_statement_repeat1, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(104),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(93),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_definition, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_statement, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_statement, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_expression, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(62),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(62),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 2), SHIFT_REPEAT(23),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(85),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(85),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_expression, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(122),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(26),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2), SHIFT_REPEAT(25),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration_statement, 6),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration_statement, 7),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 8),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_item, 3, .production_id = 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 5),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 6),
  [416] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
