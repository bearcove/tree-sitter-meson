#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
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
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_SLASH = 19,
  anon_sym_PERCENT = 20,
  anon_sym_QMARK = 21,
  sym__DECIMAL_NUMBER = 22,
  anon_sym_0o = 23,
  sym__OCTAL_NUMBER = 24,
  anon_sym_0x = 25,
  sym__HEX_NUMBER = 26,
  sym_escape_sequence = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_string_simple_token1 = 29,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 30,
  aux_sym_string_multiline_token1 = 31,
  anon_sym_SQUOTE_SQUOTE = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  anon_sym_LBRACK = 35,
  anon_sym_COMMA = 36,
  anon_sym_RBRACK = 37,
  anon_sym_LF = 38,
  anon_sym_CR_LF = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  sym__IDENTIFIER = 42,
  sym_comment = 43,
  sym_source_file = 44,
  sym_build_definition = 45,
  sym_statement = 46,
  sym_selection_statement = 47,
  sym_iteration_statement = 48,
  sym_assignment_statement = 49,
  sym_assignment_operator = 50,
  sym_jump_statement = 51,
  sym_condition = 52,
  sym_expression = 53,
  sym_binary_expression = 54,
  sym_additive_operator = 55,
  sym_multiplicative_operator = 56,
  sym_conditional_expression = 57,
  sym_literal = 58,
  sym_integer_literal = 59,
  sym_decimal_literal = 60,
  sym_octal_literal = 61,
  sym_hex_literal = 62,
  sym_string_literal = 63,
  sym_string_simple = 64,
  sym_string_multiline = 65,
  sym_boolean_literal = 66,
  sym_array_literal = 67,
  sym__NEWLINE = 68,
  sym_dictionary_literal = 69,
  sym_key_value_item = 70,
  sym_identifier_list = 71,
  sym_id_expression = 72,
  aux_sym_build_definition_repeat1 = 73,
  aux_sym_selection_statement_repeat1 = 74,
  aux_sym_iteration_statement_repeat1 = 75,
  aux_sym_string_simple_repeat1 = 76,
  aux_sym_string_multiline_repeat1 = 77,
  aux_sym_array_literal_repeat1 = 78,
  aux_sym_dictionary_literal_repeat1 = 79,
  aux_sym_identifier_list_repeat1 = 80,
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
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_QMARK] = "\?",
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
  [sym_binary_expression] = "binary_expression",
  [sym_additive_operator] = "additive_operator",
  [sym_multiplicative_operator] = "multiplicative_operator",
  [sym_conditional_expression] = "conditional_expression",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [sym_binary_expression] = sym_binary_expression,
  [sym_additive_operator] = sym_additive_operator,
  [sym_multiplicative_operator] = sym_multiplicative_operator,
  [sym_conditional_expression] = sym_conditional_expression,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
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
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'd')) ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '}') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
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
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(63);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__DECIMAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__OCTAL_NUMBER);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'l') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__HEX_NUMBER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_simple_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_multiline_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(79);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'c') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'd') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 's') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'i') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'k') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'l') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'o') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'u') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 30},
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
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 5},
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
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 30},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 20},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 21},
  [152] = {.lex_state = 13},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
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
    [sym_source_file] = STATE(147),
    [sym_build_definition] = STATE(146),
    [sym_statement] = STATE(14),
    [sym_selection_statement] = STATE(116),
    [sym_iteration_statement] = STATE(116),
    [sym_assignment_statement] = STATE(116),
    [sym_expression] = STATE(40),
    [sym_binary_expression] = STATE(56),
    [sym_conditional_expression] = STATE(56),
    [sym_literal] = STATE(56),
    [sym_integer_literal] = STATE(53),
    [sym_decimal_literal] = STATE(51),
    [sym_octal_literal] = STATE(51),
    [sym_hex_literal] = STATE(51),
    [sym_string_literal] = STATE(53),
    [sym_string_simple] = STATE(47),
    [sym_string_multiline] = STATE(47),
    [sym_boolean_literal] = STATE(53),
    [sym_array_literal] = STATE(53),
    [sym_dictionary_literal] = STATE(53),
    [sym_id_expression] = STATE(56),
    [aux_sym_build_definition_repeat1] = STATE(14),
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
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(4), 3,
      sym_statement,
      sym_jump_statement,
      aux_sym_iteration_statement_repeat1,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(118), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [80] = 23,
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
    ACTIONS(33), 1,
      anon_sym_elif,
    ACTIONS(35), 1,
      anon_sym_else,
    ACTIONS(37), 1,
      anon_sym_endif,
    ACTIONS(39), 1,
      sym_comment,
    STATE(39), 1,
      sym_expression,
    STATE(108), 1,
      aux_sym_selection_statement_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(134), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [164] = 21,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_foreach,
    ACTIONS(47), 1,
      anon_sym_endforeach,
    ACTIONS(52), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(55), 1,
      anon_sym_0o,
    ACTIONS(58), 1,
      anon_sym_0x,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      sym__IDENTIFIER,
    ACTIONS(79), 1,
      sym_comment,
    STATE(37), 1,
      sym_expression,
    ACTIONS(49), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(4), 3,
      sym_statement,
      sym_jump_statement,
      aux_sym_iteration_statement_repeat1,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(118), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [244] = 23,
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
    ACTIONS(33), 1,
      anon_sym_elif,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_else,
    ACTIONS(84), 1,
      anon_sym_endif,
    STATE(39), 1,
      sym_expression,
    STATE(110), 1,
      aux_sym_selection_statement_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(134), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [328] = 21,
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
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(2), 3,
      sym_statement,
      sym_jump_statement,
      aux_sym_iteration_statement_repeat1,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(118), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [408] = 20,
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
    ACTIONS(39), 1,
      sym_comment,
    STATE(39), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    ACTIONS(88), 3,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(134), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [485] = 20,
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
    ACTIONS(39), 1,
      sym_comment,
    STATE(39), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    ACTIONS(90), 3,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(134), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [562] = 20,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_foreach,
    ACTIONS(100), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(103), 1,
      anon_sym_0o,
    ACTIONS(106), 1,
      anon_sym_0x,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      sym__IDENTIFIER,
    ACTIONS(127), 1,
      sym_comment,
    STATE(39), 1,
      sym_expression,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    ACTIONS(95), 3,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(134), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [639] = 20,
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
    STATE(38), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(120), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [714] = 20,
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
    STATE(38), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(120), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [789] = 20,
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
    STATE(38), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(120), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [864] = 20,
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
    ACTIONS(84), 1,
      anon_sym_endif,
    ACTIONS(132), 1,
      sym_comment,
    STATE(38), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(120), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [939] = 20,
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
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(116), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1014] = 20,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_endif,
    ACTIONS(97), 1,
      anon_sym_foreach,
    ACTIONS(100), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(103), 1,
      anon_sym_0o,
    ACTIONS(106), 1,
      anon_sym_0x,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      sym__IDENTIFIER,
    ACTIONS(138), 1,
      sym_comment,
    STATE(38), 1,
      sym_expression,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(120), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1089] = 20,
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
    ACTIONS(141), 1,
      anon_sym_endif,
    STATE(38), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(120), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1164] = 20,
    ACTIONS(92), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_foreach,
    ACTIONS(100), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(103), 1,
      anon_sym_0o,
    ACTIONS(106), 1,
      anon_sym_0x,
    ACTIONS(109), 1,
      anon_sym_SQUOTE,
    ACTIONS(112), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      sym__IDENTIFIER,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym_comment,
    STATE(40), 1,
      sym_expression,
    ACTIONS(115), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(116), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1239] = 20,
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
    ACTIONS(141), 1,
      anon_sym_endif,
    STATE(38), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(120), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1314] = 16,
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
    STATE(99), 1,
      sym_expression,
    STATE(119), 1,
      sym_key_value_item,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1374] = 16,
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
      sym_expression,
    STATE(127), 1,
      sym_key_value_item,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1434] = 15,
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
    STATE(83), 1,
      sym_expression,
    STATE(133), 1,
      sym_condition,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1491] = 15,
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
    STATE(72), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1548] = 15,
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
    STATE(71), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1605] = 15,
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
    STATE(99), 1,
      sym_expression,
    STATE(144), 1,
      sym_key_value_item,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1662] = 15,
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
    STATE(83), 1,
      sym_expression,
    STATE(132), 1,
      sym_condition,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1719] = 14,
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
    STATE(94), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1773] = 14,
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
    STATE(100), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1827] = 14,
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
    STATE(46), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1881] = 14,
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
    STATE(76), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1935] = 14,
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
    STATE(89), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1989] = 14,
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
    STATE(44), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [2043] = 14,
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
    STATE(68), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [2097] = 14,
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
    STATE(43), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(51), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(56), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(53), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [2151] = 14,
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
    STATE(69), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [2205] = 14,
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
    STATE(70), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [2259] = 14,
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
    STATE(101), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(81), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(82), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(85), 4,
      sym_binary_expression,
      sym_conditional_expression,
      sym_literal,
      sym_id_expression,
    STATE(84), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [2313] = 9,
    ACTIONS(180), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      sym_assignment_operator,
    STATE(31), 1,
      sym_additive_operator,
    STATE(33), 1,
      sym_multiplicative_operator,
    STATE(41), 1,
      sym__NEWLINE,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(182), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(174), 6,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [2350] = 9,
    ACTIONS(180), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      sym_assignment_operator,
    STATE(31), 1,
      sym_additive_operator,
    STATE(33), 1,
      sym_multiplicative_operator,
    STATE(60), 1,
      sym__NEWLINE,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(174), 6,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [2387] = 9,
    ACTIONS(180), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      sym_assignment_operator,
    STATE(31), 1,
      sym_additive_operator,
    STATE(33), 1,
      sym_multiplicative_operator,
    STATE(45), 1,
      sym__NEWLINE,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(174), 6,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [2424] = 9,
    ACTIONS(180), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      sym_assignment_operator,
    STATE(31), 1,
      sym_additive_operator,
    STATE(33), 1,
      sym_multiplicative_operator,
    STATE(64), 1,
      sym__NEWLINE,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(188), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(174), 6,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [2461] = 2,
    ACTIONS(192), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(190), 10,
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
  [2482] = 2,
    ACTIONS(196), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(194), 10,
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
  [2503] = 3,
    STATE(31), 1,
      sym_additive_operator,
    STATE(33), 1,
      sym_multiplicative_operator,
    ACTIONS(198), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2526] = 4,
    STATE(31), 1,
      sym_additive_operator,
    STATE(33), 1,
      sym_multiplicative_operator,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(198), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2551] = 2,
    ACTIONS(192), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(190), 10,
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
  [2572] = 4,
    STATE(31), 1,
      sym_additive_operator,
    STATE(33), 1,
      sym_multiplicative_operator,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(200), 11,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2597] = 1,
    ACTIONS(202), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2614] = 1,
    ACTIONS(204), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2631] = 1,
    ACTIONS(206), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2648] = 1,
    ACTIONS(208), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2665] = 1,
    ACTIONS(210), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2682] = 1,
    ACTIONS(212), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2699] = 1,
    ACTIONS(214), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2716] = 1,
    ACTIONS(216), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2733] = 1,
    ACTIONS(218), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2750] = 1,
    ACTIONS(220), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2767] = 1,
    ACTIONS(222), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2784] = 1,
    ACTIONS(224), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2801] = 1,
    ACTIONS(226), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2818] = 2,
    ACTIONS(192), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(190), 8,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_foreach,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
  [2837] = 1,
    ACTIONS(228), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2854] = 1,
    ACTIONS(230), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2871] = 1,
    ACTIONS(232), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2888] = 2,
    ACTIONS(190), 7,
      anon_sym_if,
      anon_sym_foreach,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
  [2907] = 1,
    ACTIONS(234), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2924] = 1,
    ACTIONS(236), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2941] = 1,
    ACTIONS(238), 14,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2958] = 3,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    ACTIONS(240), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2977] = 4,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    ACTIONS(242), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(240), 7,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2998] = 4,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    ACTIONS(242), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(244), 7,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3019] = 8,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    STATE(125), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(246), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(242), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3047] = 8,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    STATE(124), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(246), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(242), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3075] = 1,
    ACTIONS(256), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3088] = 1,
    ACTIONS(258), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3101] = 1,
    ACTIONS(260), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3114] = 6,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    ACTIONS(246), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(242), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3137] = 1,
    ACTIONS(264), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3150] = 1,
    ACTIONS(266), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3163] = 1,
    ACTIONS(268), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3176] = 1,
    ACTIONS(270), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3189] = 1,
    ACTIONS(272), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3202] = 1,
    ACTIONS(274), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3215] = 6,
    ACTIONS(180), 1,
      anon_sym_QMARK,
    STATE(31), 1,
      sym_additive_operator,
    STATE(33), 1,
      sym_multiplicative_operator,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(276), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3238] = 1,
    ACTIONS(278), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3251] = 1,
    ACTIONS(280), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3264] = 1,
    ACTIONS(282), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3277] = 2,
    ACTIONS(284), 5,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(286), 5,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [3292] = 1,
    ACTIONS(288), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3305] = 6,
    ACTIONS(180), 1,
      anon_sym_QMARK,
    STATE(31), 1,
      sym_additive_operator,
    STATE(33), 1,
      sym_multiplicative_operator,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(290), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3328] = 1,
    ACTIONS(292), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3341] = 1,
    ACTIONS(294), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3354] = 2,
    ACTIONS(296), 5,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(298), 5,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [3369] = 2,
    ACTIONS(300), 5,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(302), 5,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [3384] = 6,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    ACTIONS(246), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(242), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3407] = 1,
    ACTIONS(306), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3420] = 1,
    ACTIONS(308), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3433] = 1,
    ACTIONS(310), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3446] = 1,
    ACTIONS(312), 10,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3459] = 6,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    ACTIONS(314), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    ACTIONS(246), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(242), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3481] = 6,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    ACTIONS(316), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    ACTIONS(246), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(242), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3503] = 6,
    ACTIONS(248), 1,
      anon_sym_QMARK,
    ACTIONS(318), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym_multiplicative_operator,
    STATE(34), 1,
      sym_additive_operator,
    ACTIONS(246), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(242), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3525] = 4,
    ACTIONS(323), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(325), 1,
      aux_sym_string_multiline_token1,
    STATE(102), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(320), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3540] = 4,
    ACTIONS(330), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_string_multiline_token1,
    STATE(102), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(328), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3555] = 4,
    ACTIONS(336), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(338), 1,
      aux_sym_string_multiline_token1,
    STATE(105), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(334), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3570] = 4,
    ACTIONS(332), 1,
      aux_sym_string_multiline_token1,
    ACTIONS(340), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(102), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(328), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3585] = 4,
    ACTIONS(344), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(346), 1,
      aux_sym_string_multiline_token1,
    STATE(103), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(342), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3600] = 4,
    ACTIONS(348), 1,
      sym_escape_sequence,
    ACTIONS(351), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      aux_sym_string_simple_token1,
    STATE(107), 1,
      aux_sym_string_simple_repeat1,
  [3613] = 4,
    ACTIONS(356), 1,
      anon_sym_elif,
    ACTIONS(358), 1,
      anon_sym_else,
    ACTIONS(360), 1,
      anon_sym_endif,
    STATE(109), 1,
      aux_sym_selection_statement_repeat1,
  [3626] = 3,
    ACTIONS(362), 1,
      anon_sym_elif,
    STATE(109), 1,
      aux_sym_selection_statement_repeat1,
    ACTIONS(365), 2,
      anon_sym_else,
      anon_sym_endif,
  [3637] = 4,
    ACTIONS(356), 1,
      anon_sym_elif,
    ACTIONS(367), 1,
      anon_sym_else,
    ACTIONS(369), 1,
      anon_sym_endif,
    STATE(109), 1,
      aux_sym_selection_statement_repeat1,
  [3650] = 4,
    ACTIONS(371), 1,
      sym_escape_sequence,
    ACTIONS(373), 1,
      anon_sym_SQUOTE,
    ACTIONS(375), 1,
      aux_sym_string_simple_token1,
    STATE(107), 1,
      aux_sym_string_simple_repeat1,
  [3663] = 4,
    ACTIONS(377), 1,
      sym_escape_sequence,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    ACTIONS(381), 1,
      aux_sym_string_simple_token1,
    STATE(113), 1,
      aux_sym_string_simple_repeat1,
  [3676] = 4,
    ACTIONS(371), 1,
      sym_escape_sequence,
    ACTIONS(375), 1,
      aux_sym_string_simple_token1,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      aux_sym_string_simple_repeat1,
  [3689] = 4,
    ACTIONS(385), 1,
      sym_escape_sequence,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      aux_sym_string_simple_token1,
    STATE(111), 1,
      aux_sym_string_simple_repeat1,
  [3702] = 2,
    STATE(42), 1,
      sym__NEWLINE,
    ACTIONS(391), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3710] = 2,
    STATE(64), 1,
      sym__NEWLINE,
    ACTIONS(188), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3718] = 3,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_array_literal_repeat1,
  [3728] = 2,
    STATE(41), 1,
      sym__NEWLINE,
    ACTIONS(182), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3736] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_dictionary_literal_repeat1,
  [3746] = 2,
    STATE(60), 1,
      sym__NEWLINE,
    ACTIONS(184), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3754] = 3,
    ACTIONS(400), 1,
      sym__IDENTIFIER,
    STATE(129), 1,
      sym_id_expression,
    STATE(150), 1,
      sym_identifier_list,
  [3764] = 3,
    ACTIONS(402), 1,
      anon_sym_COLON,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_identifier_list_repeat1,
  [3774] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_dictionary_literal_repeat1,
  [3784] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym_array_literal_repeat1,
  [3794] = 3,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym_array_literal_repeat1,
  [3804] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_dictionary_literal_repeat1,
  [3814] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym_dictionary_literal_repeat1,
  [3824] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_dictionary_literal_repeat1,
  [3834] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_COLON,
    STATE(122), 1,
      aux_sym_identifier_list_repeat1,
  [3844] = 3,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_identifier_list_repeat1,
  [3854] = 2,
    STATE(6), 1,
      sym__NEWLINE,
    ACTIONS(428), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3862] = 2,
    STATE(3), 1,
      sym__NEWLINE,
    ACTIONS(430), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3870] = 2,
    STATE(8), 1,
      sym__NEWLINE,
    ACTIONS(432), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3878] = 2,
    STATE(45), 1,
      sym__NEWLINE,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3886] = 1,
    ACTIONS(434), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3891] = 1,
    ACTIONS(436), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3896] = 1,
    ACTIONS(423), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3901] = 1,
    ACTIONS(438), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3906] = 1,
    ACTIONS(440), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3911] = 1,
    ACTIONS(442), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3916] = 2,
    ACTIONS(444), 1,
      sym__IDENTIFIER,
    STATE(131), 1,
      sym_id_expression,
  [3923] = 1,
    ACTIONS(446), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3928] = 1,
    ACTIONS(448), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3933] = 1,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3938] = 2,
    ACTIONS(400), 1,
      sym__IDENTIFIER,
    STATE(137), 1,
      sym_id_expression,
  [3945] = 1,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
  [3949] = 1,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
  [3953] = 1,
    ACTIONS(454), 1,
      sym__HEX_NUMBER,
  [3957] = 1,
    ACTIONS(456), 1,
      sym__OCTAL_NUMBER,
  [3961] = 1,
    ACTIONS(458), 1,
      anon_sym_COLON,
  [3965] = 1,
    ACTIONS(460), 1,
      sym__HEX_NUMBER,
  [3969] = 1,
    ACTIONS(462), 1,
      sym__OCTAL_NUMBER,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 244,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 408,
  [SMALL_STATE(8)] = 485,
  [SMALL_STATE(9)] = 562,
  [SMALL_STATE(10)] = 639,
  [SMALL_STATE(11)] = 714,
  [SMALL_STATE(12)] = 789,
  [SMALL_STATE(13)] = 864,
  [SMALL_STATE(14)] = 939,
  [SMALL_STATE(15)] = 1014,
  [SMALL_STATE(16)] = 1089,
  [SMALL_STATE(17)] = 1164,
  [SMALL_STATE(18)] = 1239,
  [SMALL_STATE(19)] = 1314,
  [SMALL_STATE(20)] = 1374,
  [SMALL_STATE(21)] = 1434,
  [SMALL_STATE(22)] = 1491,
  [SMALL_STATE(23)] = 1548,
  [SMALL_STATE(24)] = 1605,
  [SMALL_STATE(25)] = 1662,
  [SMALL_STATE(26)] = 1719,
  [SMALL_STATE(27)] = 1773,
  [SMALL_STATE(28)] = 1827,
  [SMALL_STATE(29)] = 1881,
  [SMALL_STATE(30)] = 1935,
  [SMALL_STATE(31)] = 1989,
  [SMALL_STATE(32)] = 2043,
  [SMALL_STATE(33)] = 2097,
  [SMALL_STATE(34)] = 2151,
  [SMALL_STATE(35)] = 2205,
  [SMALL_STATE(36)] = 2259,
  [SMALL_STATE(37)] = 2313,
  [SMALL_STATE(38)] = 2350,
  [SMALL_STATE(39)] = 2387,
  [SMALL_STATE(40)] = 2424,
  [SMALL_STATE(41)] = 2461,
  [SMALL_STATE(42)] = 2482,
  [SMALL_STATE(43)] = 2503,
  [SMALL_STATE(44)] = 2526,
  [SMALL_STATE(45)] = 2551,
  [SMALL_STATE(46)] = 2572,
  [SMALL_STATE(47)] = 2597,
  [SMALL_STATE(48)] = 2614,
  [SMALL_STATE(49)] = 2631,
  [SMALL_STATE(50)] = 2648,
  [SMALL_STATE(51)] = 2665,
  [SMALL_STATE(52)] = 2682,
  [SMALL_STATE(53)] = 2699,
  [SMALL_STATE(54)] = 2716,
  [SMALL_STATE(55)] = 2733,
  [SMALL_STATE(56)] = 2750,
  [SMALL_STATE(57)] = 2767,
  [SMALL_STATE(58)] = 2784,
  [SMALL_STATE(59)] = 2801,
  [SMALL_STATE(60)] = 2818,
  [SMALL_STATE(61)] = 2837,
  [SMALL_STATE(62)] = 2854,
  [SMALL_STATE(63)] = 2871,
  [SMALL_STATE(64)] = 2888,
  [SMALL_STATE(65)] = 2907,
  [SMALL_STATE(66)] = 2924,
  [SMALL_STATE(67)] = 2941,
  [SMALL_STATE(68)] = 2958,
  [SMALL_STATE(69)] = 2977,
  [SMALL_STATE(70)] = 2998,
  [SMALL_STATE(71)] = 3019,
  [SMALL_STATE(72)] = 3047,
  [SMALL_STATE(73)] = 3075,
  [SMALL_STATE(74)] = 3088,
  [SMALL_STATE(75)] = 3101,
  [SMALL_STATE(76)] = 3114,
  [SMALL_STATE(77)] = 3137,
  [SMALL_STATE(78)] = 3150,
  [SMALL_STATE(79)] = 3163,
  [SMALL_STATE(80)] = 3176,
  [SMALL_STATE(81)] = 3189,
  [SMALL_STATE(82)] = 3202,
  [SMALL_STATE(83)] = 3215,
  [SMALL_STATE(84)] = 3238,
  [SMALL_STATE(85)] = 3251,
  [SMALL_STATE(86)] = 3264,
  [SMALL_STATE(87)] = 3277,
  [SMALL_STATE(88)] = 3292,
  [SMALL_STATE(89)] = 3305,
  [SMALL_STATE(90)] = 3328,
  [SMALL_STATE(91)] = 3341,
  [SMALL_STATE(92)] = 3354,
  [SMALL_STATE(93)] = 3369,
  [SMALL_STATE(94)] = 3384,
  [SMALL_STATE(95)] = 3407,
  [SMALL_STATE(96)] = 3420,
  [SMALL_STATE(97)] = 3433,
  [SMALL_STATE(98)] = 3446,
  [SMALL_STATE(99)] = 3459,
  [SMALL_STATE(100)] = 3481,
  [SMALL_STATE(101)] = 3503,
  [SMALL_STATE(102)] = 3525,
  [SMALL_STATE(103)] = 3540,
  [SMALL_STATE(104)] = 3555,
  [SMALL_STATE(105)] = 3570,
  [SMALL_STATE(106)] = 3585,
  [SMALL_STATE(107)] = 3600,
  [SMALL_STATE(108)] = 3613,
  [SMALL_STATE(109)] = 3626,
  [SMALL_STATE(110)] = 3637,
  [SMALL_STATE(111)] = 3650,
  [SMALL_STATE(112)] = 3663,
  [SMALL_STATE(113)] = 3676,
  [SMALL_STATE(114)] = 3689,
  [SMALL_STATE(115)] = 3702,
  [SMALL_STATE(116)] = 3710,
  [SMALL_STATE(117)] = 3718,
  [SMALL_STATE(118)] = 3728,
  [SMALL_STATE(119)] = 3736,
  [SMALL_STATE(120)] = 3746,
  [SMALL_STATE(121)] = 3754,
  [SMALL_STATE(122)] = 3764,
  [SMALL_STATE(123)] = 3774,
  [SMALL_STATE(124)] = 3784,
  [SMALL_STATE(125)] = 3794,
  [SMALL_STATE(126)] = 3804,
  [SMALL_STATE(127)] = 3814,
  [SMALL_STATE(128)] = 3824,
  [SMALL_STATE(129)] = 3834,
  [SMALL_STATE(130)] = 3844,
  [SMALL_STATE(131)] = 3854,
  [SMALL_STATE(132)] = 3862,
  [SMALL_STATE(133)] = 3870,
  [SMALL_STATE(134)] = 3878,
  [SMALL_STATE(135)] = 3886,
  [SMALL_STATE(136)] = 3891,
  [SMALL_STATE(137)] = 3896,
  [SMALL_STATE(138)] = 3901,
  [SMALL_STATE(139)] = 3906,
  [SMALL_STATE(140)] = 3911,
  [SMALL_STATE(141)] = 3916,
  [SMALL_STATE(142)] = 3923,
  [SMALL_STATE(143)] = 3928,
  [SMALL_STATE(144)] = 3933,
  [SMALL_STATE(145)] = 3938,
  [SMALL_STATE(146)] = 3945,
  [SMALL_STATE(147)] = 3949,
  [SMALL_STATE(148)] = 3953,
  [SMALL_STATE(149)] = 3957,
  [SMALL_STATE(150)] = 3961,
  [SMALL_STATE(151)] = 3965,
  [SMALL_STATE(152)] = 3969,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(25),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(121),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(115),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(66),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(152),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(151),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(114),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(106),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(65),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(22),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(19),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(61),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(118),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selection_statement_repeat1, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selection_statement_repeat1, 3),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(25),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(121),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(66),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(152),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(151),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(114),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(106),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(65),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(22),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(19),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(61),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(134),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_definition, 1),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(120),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(116),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_statement, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_statement, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_expression, 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_expression, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_item, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_expression, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_operator, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_operator, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additive_operator, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additive_operator, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(102),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(102),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(107),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(107),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 2), SHIFT_REPEAT(21),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(26),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2), SHIFT_REPEAT(24),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(145),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration_statement, 6),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 5),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 8),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 6),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 7),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration_statement, 7),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [452] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
