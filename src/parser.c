#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  sym__DECIMAL_NUMBER = 21,
  anon_sym_0o = 22,
  sym__OCTAL_NUMBER = 23,
  anon_sym_0x = 24,
  sym__HEX_NUMBER = 25,
  sym_escape_sequence = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_string_simple_token1 = 28,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 29,
  aux_sym_string_multiline_token1 = 30,
  anon_sym_SQUOTE_SQUOTE = 31,
  anon_sym_true = 32,
  anon_sym_false = 33,
  anon_sym_LBRACK = 34,
  anon_sym_COMMA = 35,
  anon_sym_RBRACK = 36,
  anon_sym_LF = 37,
  anon_sym_CR_LF = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  sym__IDENTIFIER = 41,
  sym_comment = 42,
  sym_source_file = 43,
  sym_build_definition = 44,
  sym_statement = 45,
  sym_selection_statement = 46,
  sym_iteration_statement = 47,
  sym_assignment_statement = 48,
  sym_assignment_operator = 49,
  sym_jump_statement = 50,
  sym_condition = 51,
  sym_expression = 52,
  sym_binary_expression = 53,
  sym_additive_operator = 54,
  sym_multiplicative_operator = 55,
  sym_literal = 56,
  sym_integer_literal = 57,
  sym_decimal_literal = 58,
  sym_octal_literal = 59,
  sym_hex_literal = 60,
  sym_string_literal = 61,
  sym_string_simple = 62,
  sym_string_multiline = 63,
  sym_boolean_literal = 64,
  sym_array_literal = 65,
  sym__NEWLINE = 66,
  sym_dictionary_literal = 67,
  sym_key_value_item = 68,
  sym_identifier_list = 69,
  sym_id_expression = 70,
  aux_sym_build_definition_repeat1 = 71,
  aux_sym_selection_statement_repeat1 = 72,
  aux_sym_iteration_statement_repeat1 = 73,
  aux_sym_string_simple_repeat1 = 74,
  aux_sym_string_multiline_repeat1 = 75,
  aux_sym_array_literal_repeat1 = 76,
  aux_sym_dictionary_literal_repeat1 = 77,
  aux_sym_identifier_list_repeat1 = 78,
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
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(11);
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
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(11);
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
      if (lookahead == '\\') ADVANCE(11);
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
      if (lookahead == '\\') ADVANCE(11);
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
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(70);
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
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
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
          lookahead == ' ') SKIP(30)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
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
      if (lookahead == 'e') ADVANCE(36);
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
      if (lookahead == 'e') ADVANCE(49);
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
      if (lookahead == 'f') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'f') ADVANCE(34);
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
      if (lookahead == 'f') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__IDENTIFIER);
      if (lookahead == 'h') ADVANCE(41);
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
      if (lookahead == 'k') ADVANCE(48);
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
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
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
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 30},
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
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 10},
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
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 20},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 21},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 13},
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
    [sym_source_file] = STATE(140),
    [sym_build_definition] = STATE(141),
    [sym_statement] = STATE(10),
    [sym_selection_statement] = STATE(126),
    [sym_iteration_statement] = STATE(126),
    [sym_assignment_statement] = STATE(126),
    [sym_expression] = STATE(34),
    [sym_binary_expression] = STATE(44),
    [sym_literal] = STATE(44),
    [sym_integer_literal] = STATE(60),
    [sym_decimal_literal] = STATE(61),
    [sym_octal_literal] = STATE(61),
    [sym_hex_literal] = STATE(61),
    [sym_string_literal] = STATE(60),
    [sym_string_simple] = STATE(62),
    [sym_string_multiline] = STATE(62),
    [sym_boolean_literal] = STATE(60),
    [sym_array_literal] = STATE(60),
    [sym_dictionary_literal] = STATE(60),
    [sym_id_expression] = STATE(44),
    [aux_sym_build_definition_repeat1] = STATE(10),
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
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(30), 1,
      anon_sym_foreach,
    ACTIONS(33), 1,
      anon_sym_endforeach,
    ACTIONS(38), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(41), 1,
      anon_sym_0o,
    ACTIONS(44), 1,
      anon_sym_0x,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      sym__IDENTIFIER,
    ACTIONS(65), 1,
      sym_comment,
    STATE(33), 1,
      sym_expression,
    ACTIONS(35), 2,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(53), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(2), 3,
      sym_statement,
      sym_jump_statement,
      aux_sym_iteration_statement_repeat1,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(110), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [79] = 23,
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
    ACTIONS(68), 1,
      anon_sym_elif,
    ACTIONS(70), 1,
      anon_sym_else,
    ACTIONS(72), 1,
      anon_sym_endif,
    ACTIONS(74), 1,
      sym_comment,
    STATE(35), 1,
      sym_expression,
    STATE(101), 1,
      aux_sym_selection_statement_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(123), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [162] = 23,
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
    ACTIONS(68), 1,
      anon_sym_elif,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_else,
    ACTIONS(78), 1,
      anon_sym_endif,
    STATE(35), 1,
      sym_expression,
    STATE(103), 1,
      aux_sym_selection_statement_repeat1,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(123), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [245] = 21,
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
      anon_sym_endforeach,
    ACTIONS(84), 1,
      sym_comment,
    STATE(33), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(2), 3,
      sym_statement,
      sym_jump_statement,
      aux_sym_iteration_statement_repeat1,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(110), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [324] = 21,
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
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_endforeach,
    STATE(33), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(82), 2,
      anon_sym_break,
      anon_sym_continue,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(5), 3,
      sym_statement,
      sym_jump_statement,
      aux_sym_iteration_statement_repeat1,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(110), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [403] = 20,
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
      sym_comment,
    STATE(35), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    ACTIONS(88), 3,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(123), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [479] = 20,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(101), 1,
      anon_sym_0o,
    ACTIONS(104), 1,
      anon_sym_0x,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym__IDENTIFIER,
    ACTIONS(125), 1,
      sym_comment,
    STATE(35), 1,
      sym_expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    ACTIONS(93), 3,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(123), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [555] = 20,
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
      sym_comment,
    STATE(35), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    ACTIONS(128), 3,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(123), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [631] = 20,
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
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(126), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [705] = 20,
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
      anon_sym_endif,
    ACTIONS(134), 1,
      sym_comment,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(111), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [779] = 20,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(101), 1,
      anon_sym_0o,
    ACTIONS(104), 1,
      anon_sym_0x,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym__IDENTIFIER,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      sym_comment,
    STATE(34), 1,
      sym_expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(126), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [853] = 20,
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
      anon_sym_endif,
    ACTIONS(134), 1,
      sym_comment,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(111), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [927] = 20,
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
    ACTIONS(134), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_endif,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(111), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1001] = 20,
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
    ACTIONS(134), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_endif,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(111), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1075] = 20,
    ACTIONS(90), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      anon_sym_endif,
    ACTIONS(95), 1,
      anon_sym_foreach,
    ACTIONS(98), 1,
      sym__DECIMAL_NUMBER,
    ACTIONS(101), 1,
      anon_sym_0o,
    ACTIONS(104), 1,
      anon_sym_0x,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym__IDENTIFIER,
    ACTIONS(145), 1,
      sym_comment,
    STATE(36), 1,
      sym_expression,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(111), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1149] = 20,
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
    ACTIONS(134), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_endif,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(111), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1223] = 20,
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
    ACTIONS(134), 1,
      sym_comment,
    STATE(36), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_statement,
      aux_sym_build_definition_repeat1,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(111), 3,
      sym_selection_statement,
      sym_iteration_statement,
      sym_assignment_statement,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1297] = 16,
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
    STATE(93), 1,
      sym_expression,
    STATE(112), 1,
      sym_key_value_item,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(76), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(78), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(77), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1356] = 16,
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
    STATE(93), 1,
      sym_expression,
    STATE(118), 1,
      sym_key_value_item,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(76), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(78), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(77), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1415] = 15,
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
    STATE(68), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(76), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(78), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(77), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1471] = 15,
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
    STATE(93), 1,
      sym_expression,
    STATE(132), 1,
      sym_key_value_item,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(76), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(78), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(77), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1527] = 15,
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
    STATE(80), 1,
      sym_expression,
    STATE(125), 1,
      sym_condition,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1583] = 15,
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
    STATE(80), 1,
      sym_expression,
    STATE(122), 1,
      sym_condition,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1639] = 15,
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
    STATE(66), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(76), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(78), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(77), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1695] = 14,
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
    STATE(87), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1748] = 14,
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
    STATE(74), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(76), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(78), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(77), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1801] = 14,
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
    STATE(63), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(76), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(78), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(77), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1854] = 14,
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
    STATE(72), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(76), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(78), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(77), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1907] = 14,
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
    STATE(40), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [1960] = 14,
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
    STATE(41), 1,
      sym_expression,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(62), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(44), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(61), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(60), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [2013] = 14,
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
    STATE(64), 1,
      sym_expression,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(75), 2,
      sym_string_simple,
      sym_string_multiline,
    STATE(76), 3,
      sym_decimal_literal,
      sym_octal_literal,
      sym_hex_literal,
    STATE(78), 3,
      sym_binary_expression,
      sym_literal,
      sym_id_expression,
    STATE(77), 5,
      sym_integer_literal,
      sym_string_literal,
      sym_boolean_literal,
      sym_array_literal,
      sym_dictionary_literal,
  [2066] = 8,
    STATE(26), 1,
      sym_assignment_operator,
    STATE(30), 1,
      sym_additive_operator,
    STATE(31), 1,
      sym_multiplicative_operator,
    STATE(37), 1,
      sym__NEWLINE,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(180), 2,
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
  [2100] = 8,
    STATE(26), 1,
      sym_assignment_operator,
    STATE(30), 1,
      sym_additive_operator,
    STATE(31), 1,
      sym_multiplicative_operator,
    STATE(43), 1,
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
  [2134] = 8,
    STATE(26), 1,
      sym_assignment_operator,
    STATE(30), 1,
      sym_additive_operator,
    STATE(31), 1,
      sym_multiplicative_operator,
    STATE(39), 1,
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
  [2168] = 8,
    STATE(26), 1,
      sym_assignment_operator,
    STATE(30), 1,
      sym_additive_operator,
    STATE(31), 1,
      sym_multiplicative_operator,
    STATE(42), 1,
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
  [2202] = 2,
    ACTIONS(190), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(188), 10,
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
  [2223] = 2,
    ACTIONS(194), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(192), 10,
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
  [2244] = 2,
    ACTIONS(190), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(188), 10,
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
  [2265] = 4,
    STATE(30), 1,
      sym_additive_operator,
    STATE(31), 1,
      sym_multiplicative_operator,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(196), 10,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LF,
      anon_sym_CR_LF,
  [2289] = 3,
    STATE(30), 1,
      sym_additive_operator,
    STATE(31), 1,
      sym_multiplicative_operator,
    ACTIONS(196), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2311] = 2,
    ACTIONS(190), 6,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
    ACTIONS(188), 8,
      anon_sym_if,
      anon_sym_endif,
      anon_sym_foreach,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
  [2330] = 2,
    ACTIONS(188), 7,
      anon_sym_if,
      anon_sym_foreach,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      sym_comment,
  [2349] = 1,
    ACTIONS(198), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2365] = 1,
    ACTIONS(200), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2381] = 1,
    ACTIONS(202), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2397] = 1,
    ACTIONS(204), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2413] = 1,
    ACTIONS(206), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2429] = 1,
    ACTIONS(208), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2445] = 1,
    ACTIONS(210), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2461] = 1,
    ACTIONS(212), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2477] = 1,
    ACTIONS(214), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2493] = 1,
    ACTIONS(216), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2509] = 1,
    ACTIONS(218), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2525] = 1,
    ACTIONS(220), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2541] = 1,
    ACTIONS(222), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2557] = 1,
    ACTIONS(224), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2573] = 1,
    ACTIONS(226), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2589] = 1,
    ACTIONS(228), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2605] = 1,
    ACTIONS(230), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2621] = 1,
    ACTIONS(232), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2637] = 1,
    ACTIONS(234), 13,
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
      anon_sym_LF,
      anon_sym_CR_LF,
  [2653] = 3,
    STATE(28), 1,
      sym_multiplicative_operator,
    STATE(32), 1,
      sym_additive_operator,
    ACTIONS(236), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2671] = 4,
    STATE(28), 1,
      sym_multiplicative_operator,
    STATE(32), 1,
      sym_additive_operator,
    ACTIONS(238), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(236), 6,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2691] = 2,
    ACTIONS(240), 5,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(242), 5,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [2706] = 7,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym_multiplicative_operator,
    STATE(32), 1,
      sym_additive_operator,
    STATE(116), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(244), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(238), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2731] = 2,
    ACTIONS(250), 5,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(252), 5,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [2746] = 7,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym_multiplicative_operator,
    STATE(32), 1,
      sym_additive_operator,
    STATE(115), 1,
      aux_sym_array_literal_repeat1,
    ACTIONS(244), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(238), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2771] = 2,
    ACTIONS(256), 5,
      sym__DECIMAL_NUMBER,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      sym__IDENTIFIER,
    ACTIONS(258), 5,
      anon_sym_0o,
      anon_sym_0x,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
  [2786] = 1,
    ACTIONS(260), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2798] = 1,
    ACTIONS(262), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2810] = 5,
    STATE(28), 1,
      sym_multiplicative_operator,
    STATE(32), 1,
      sym_additive_operator,
    ACTIONS(244), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(264), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(238), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2830] = 1,
    ACTIONS(266), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2842] = 5,
    STATE(28), 1,
      sym_multiplicative_operator,
    STATE(32), 1,
      sym_additive_operator,
    ACTIONS(244), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(238), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2862] = 1,
    ACTIONS(270), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2874] = 1,
    ACTIONS(272), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2886] = 1,
    ACTIONS(274), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2898] = 1,
    ACTIONS(276), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2910] = 1,
    ACTIONS(278), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2922] = 5,
    STATE(30), 1,
      sym_additive_operator,
    STATE(31), 1,
      sym_multiplicative_operator,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(280), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2942] = 1,
    ACTIONS(282), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2954] = 1,
    ACTIONS(284), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2966] = 1,
    ACTIONS(286), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2978] = 1,
    ACTIONS(288), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2990] = 1,
    ACTIONS(290), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3002] = 1,
    ACTIONS(292), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3014] = 5,
    STATE(30), 1,
      sym_additive_operator,
    STATE(31), 1,
      sym_multiplicative_operator,
    ACTIONS(176), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(294), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(178), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3034] = 1,
    ACTIONS(296), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3046] = 1,
    ACTIONS(298), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3058] = 1,
    ACTIONS(300), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3070] = 1,
    ACTIONS(302), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3082] = 1,
    ACTIONS(304), 9,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3094] = 5,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym_multiplicative_operator,
    STATE(32), 1,
      sym_additive_operator,
    ACTIONS(244), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(238), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3113] = 4,
    ACTIONS(310), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(312), 1,
      aux_sym_string_multiline_token1,
    STATE(95), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(308), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3128] = 4,
    ACTIONS(317), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(319), 1,
      aux_sym_string_multiline_token1,
    STATE(95), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(314), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3143] = 4,
    ACTIONS(324), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(326), 1,
      aux_sym_string_multiline_token1,
    STATE(98), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(322), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3158] = 4,
    ACTIONS(330), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(332), 1,
      aux_sym_string_multiline_token1,
    STATE(94), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(328), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3173] = 4,
    ACTIONS(312), 1,
      aux_sym_string_multiline_token1,
    ACTIONS(334), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(95), 1,
      aux_sym_string_multiline_repeat1,
    ACTIONS(308), 3,
      sym_escape_sequence,
      anon_sym_SQUOTE,
      anon_sym_SQUOTE_SQUOTE,
  [3188] = 4,
    ACTIONS(336), 1,
      sym_escape_sequence,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      aux_sym_string_simple_token1,
    STATE(99), 1,
      aux_sym_string_simple_repeat1,
  [3201] = 4,
    ACTIONS(344), 1,
      sym_escape_sequence,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      aux_sym_string_simple_token1,
    STATE(99), 1,
      aux_sym_string_simple_repeat1,
  [3214] = 4,
    ACTIONS(350), 1,
      anon_sym_elif,
    ACTIONS(352), 1,
      anon_sym_else,
    ACTIONS(354), 1,
      anon_sym_endif,
    STATE(102), 1,
      aux_sym_selection_statement_repeat1,
  [3227] = 3,
    ACTIONS(356), 1,
      anon_sym_elif,
    STATE(102), 1,
      aux_sym_selection_statement_repeat1,
    ACTIONS(359), 2,
      anon_sym_else,
      anon_sym_endif,
  [3238] = 4,
    ACTIONS(350), 1,
      anon_sym_elif,
    ACTIONS(361), 1,
      anon_sym_else,
    ACTIONS(363), 1,
      anon_sym_endif,
    STATE(102), 1,
      aux_sym_selection_statement_repeat1,
  [3251] = 4,
    ACTIONS(365), 1,
      sym_escape_sequence,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
    ACTIONS(369), 1,
      aux_sym_string_simple_token1,
    STATE(105), 1,
      aux_sym_string_simple_repeat1,
  [3264] = 4,
    ACTIONS(344), 1,
      sym_escape_sequence,
    ACTIONS(348), 1,
      aux_sym_string_simple_token1,
    ACTIONS(371), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym_string_simple_repeat1,
  [3277] = 4,
    ACTIONS(373), 1,
      sym_escape_sequence,
    ACTIONS(375), 1,
      anon_sym_SQUOTE,
    ACTIONS(377), 1,
      aux_sym_string_simple_token1,
    STATE(100), 1,
      aux_sym_string_simple_repeat1,
  [3290] = 2,
    STATE(38), 1,
      sym__NEWLINE,
    ACTIONS(379), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3298] = 3,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_dictionary_literal_repeat1,
  [3308] = 3,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_array_literal_repeat1,
  [3318] = 2,
    STATE(37), 1,
      sym__NEWLINE,
    ACTIONS(180), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3326] = 2,
    STATE(42), 1,
      sym__NEWLINE,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3334] = 3,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      aux_sym_dictionary_literal_repeat1,
  [3344] = 3,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_dictionary_literal_repeat1,
  [3354] = 3,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_identifier_list_repeat1,
  [3364] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_array_literal_repeat1,
  [3374] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_array_literal_repeat1,
  [3384] = 3,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_identifier_list_repeat1,
  [3394] = 3,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      aux_sym_dictionary_literal_repeat1,
  [3404] = 3,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_dictionary_literal_repeat1,
  [3414] = 3,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_COLON,
    STATE(114), 1,
      aux_sym_identifier_list_repeat1,
  [3424] = 3,
    ACTIONS(414), 1,
      sym__IDENTIFIER,
    STATE(120), 1,
      sym_id_expression,
    STATE(142), 1,
      sym_identifier_list,
  [3434] = 2,
    STATE(9), 1,
      sym__NEWLINE,
    ACTIONS(416), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3442] = 2,
    STATE(39), 1,
      sym__NEWLINE,
    ACTIONS(184), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3450] = 2,
    STATE(6), 1,
      sym__NEWLINE,
    ACTIONS(418), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3458] = 2,
    STATE(3), 1,
      sym__NEWLINE,
    ACTIONS(420), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3466] = 2,
    STATE(43), 1,
      sym__NEWLINE,
    ACTIONS(182), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3474] = 1,
    ACTIONS(403), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3479] = 1,
    ACTIONS(422), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3484] = 1,
    ACTIONS(424), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3489] = 1,
    ACTIONS(426), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3494] = 2,
    ACTIONS(428), 1,
      sym__IDENTIFIER,
    STATE(124), 1,
      sym_id_expression,
  [3501] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3506] = 1,
    ACTIONS(430), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3511] = 1,
    ACTIONS(432), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3516] = 1,
    ACTIONS(434), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3521] = 2,
    ACTIONS(414), 1,
      sym__IDENTIFIER,
    STATE(127), 1,
      sym_id_expression,
  [3528] = 1,
    ACTIONS(436), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [3533] = 1,
    ACTIONS(438), 1,
      sym__OCTAL_NUMBER,
  [3537] = 1,
    ACTIONS(440), 1,
      sym__HEX_NUMBER,
  [3541] = 1,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
  [3545] = 1,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
  [3549] = 1,
    ACTIONS(446), 1,
      anon_sym_COLON,
  [3553] = 1,
    ACTIONS(448), 1,
      sym__HEX_NUMBER,
  [3557] = 1,
    ACTIONS(450), 1,
      sym__OCTAL_NUMBER,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 245,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 403,
  [SMALL_STATE(8)] = 479,
  [SMALL_STATE(9)] = 555,
  [SMALL_STATE(10)] = 631,
  [SMALL_STATE(11)] = 705,
  [SMALL_STATE(12)] = 779,
  [SMALL_STATE(13)] = 853,
  [SMALL_STATE(14)] = 927,
  [SMALL_STATE(15)] = 1001,
  [SMALL_STATE(16)] = 1075,
  [SMALL_STATE(17)] = 1149,
  [SMALL_STATE(18)] = 1223,
  [SMALL_STATE(19)] = 1297,
  [SMALL_STATE(20)] = 1356,
  [SMALL_STATE(21)] = 1415,
  [SMALL_STATE(22)] = 1471,
  [SMALL_STATE(23)] = 1527,
  [SMALL_STATE(24)] = 1583,
  [SMALL_STATE(25)] = 1639,
  [SMALL_STATE(26)] = 1695,
  [SMALL_STATE(27)] = 1748,
  [SMALL_STATE(28)] = 1801,
  [SMALL_STATE(29)] = 1854,
  [SMALL_STATE(30)] = 1907,
  [SMALL_STATE(31)] = 1960,
  [SMALL_STATE(32)] = 2013,
  [SMALL_STATE(33)] = 2066,
  [SMALL_STATE(34)] = 2100,
  [SMALL_STATE(35)] = 2134,
  [SMALL_STATE(36)] = 2168,
  [SMALL_STATE(37)] = 2202,
  [SMALL_STATE(38)] = 2223,
  [SMALL_STATE(39)] = 2244,
  [SMALL_STATE(40)] = 2265,
  [SMALL_STATE(41)] = 2289,
  [SMALL_STATE(42)] = 2311,
  [SMALL_STATE(43)] = 2330,
  [SMALL_STATE(44)] = 2349,
  [SMALL_STATE(45)] = 2365,
  [SMALL_STATE(46)] = 2381,
  [SMALL_STATE(47)] = 2397,
  [SMALL_STATE(48)] = 2413,
  [SMALL_STATE(49)] = 2429,
  [SMALL_STATE(50)] = 2445,
  [SMALL_STATE(51)] = 2461,
  [SMALL_STATE(52)] = 2477,
  [SMALL_STATE(53)] = 2493,
  [SMALL_STATE(54)] = 2509,
  [SMALL_STATE(55)] = 2525,
  [SMALL_STATE(56)] = 2541,
  [SMALL_STATE(57)] = 2557,
  [SMALL_STATE(58)] = 2573,
  [SMALL_STATE(59)] = 2589,
  [SMALL_STATE(60)] = 2605,
  [SMALL_STATE(61)] = 2621,
  [SMALL_STATE(62)] = 2637,
  [SMALL_STATE(63)] = 2653,
  [SMALL_STATE(64)] = 2671,
  [SMALL_STATE(65)] = 2691,
  [SMALL_STATE(66)] = 2706,
  [SMALL_STATE(67)] = 2731,
  [SMALL_STATE(68)] = 2746,
  [SMALL_STATE(69)] = 2771,
  [SMALL_STATE(70)] = 2786,
  [SMALL_STATE(71)] = 2798,
  [SMALL_STATE(72)] = 2810,
  [SMALL_STATE(73)] = 2830,
  [SMALL_STATE(74)] = 2842,
  [SMALL_STATE(75)] = 2862,
  [SMALL_STATE(76)] = 2874,
  [SMALL_STATE(77)] = 2886,
  [SMALL_STATE(78)] = 2898,
  [SMALL_STATE(79)] = 2910,
  [SMALL_STATE(80)] = 2922,
  [SMALL_STATE(81)] = 2942,
  [SMALL_STATE(82)] = 2954,
  [SMALL_STATE(83)] = 2966,
  [SMALL_STATE(84)] = 2978,
  [SMALL_STATE(85)] = 2990,
  [SMALL_STATE(86)] = 3002,
  [SMALL_STATE(87)] = 3014,
  [SMALL_STATE(88)] = 3034,
  [SMALL_STATE(89)] = 3046,
  [SMALL_STATE(90)] = 3058,
  [SMALL_STATE(91)] = 3070,
  [SMALL_STATE(92)] = 3082,
  [SMALL_STATE(93)] = 3094,
  [SMALL_STATE(94)] = 3113,
  [SMALL_STATE(95)] = 3128,
  [SMALL_STATE(96)] = 3143,
  [SMALL_STATE(97)] = 3158,
  [SMALL_STATE(98)] = 3173,
  [SMALL_STATE(99)] = 3188,
  [SMALL_STATE(100)] = 3201,
  [SMALL_STATE(101)] = 3214,
  [SMALL_STATE(102)] = 3227,
  [SMALL_STATE(103)] = 3238,
  [SMALL_STATE(104)] = 3251,
  [SMALL_STATE(105)] = 3264,
  [SMALL_STATE(106)] = 3277,
  [SMALL_STATE(107)] = 3290,
  [SMALL_STATE(108)] = 3298,
  [SMALL_STATE(109)] = 3308,
  [SMALL_STATE(110)] = 3318,
  [SMALL_STATE(111)] = 3326,
  [SMALL_STATE(112)] = 3334,
  [SMALL_STATE(113)] = 3344,
  [SMALL_STATE(114)] = 3354,
  [SMALL_STATE(115)] = 3364,
  [SMALL_STATE(116)] = 3374,
  [SMALL_STATE(117)] = 3384,
  [SMALL_STATE(118)] = 3394,
  [SMALL_STATE(119)] = 3404,
  [SMALL_STATE(120)] = 3414,
  [SMALL_STATE(121)] = 3424,
  [SMALL_STATE(122)] = 3434,
  [SMALL_STATE(123)] = 3442,
  [SMALL_STATE(124)] = 3450,
  [SMALL_STATE(125)] = 3458,
  [SMALL_STATE(126)] = 3466,
  [SMALL_STATE(127)] = 3474,
  [SMALL_STATE(128)] = 3479,
  [SMALL_STATE(129)] = 3484,
  [SMALL_STATE(130)] = 3489,
  [SMALL_STATE(131)] = 3494,
  [SMALL_STATE(132)] = 3501,
  [SMALL_STATE(133)] = 3506,
  [SMALL_STATE(134)] = 3511,
  [SMALL_STATE(135)] = 3516,
  [SMALL_STATE(136)] = 3521,
  [SMALL_STATE(137)] = 3528,
  [SMALL_STATE(138)] = 3533,
  [SMALL_STATE(139)] = 3537,
  [SMALL_STATE(140)] = 3541,
  [SMALL_STATE(141)] = 3545,
  [SMALL_STATE(142)] = 3549,
  [SMALL_STATE(143)] = 3553,
  [SMALL_STATE(144)] = 3557,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(23),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(121),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(107),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(48),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(144),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(143),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(106),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(97),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(47),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(25),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(19),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(52),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_iteration_statement_repeat1, 2), SHIFT_REPEAT(110),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selection_statement_repeat1, 4),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(23),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(121),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(48),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(144),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(143),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(106),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(97),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(47),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(25),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(19),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(52),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(123),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selection_statement_repeat1, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_build_definition, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(126),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_build_definition_repeat1, 2), SHIFT_REPEAT(111),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_statement, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_statement, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_expression, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_multiline, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_simple, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_literal, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additive_operator, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additive_operator, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_operator, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_operator, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_item, 3, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_expression, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_multiline, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_simple, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_literal, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(95),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_multiline_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_multiline_repeat1, 2), SHIFT_REPEAT(95),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(99),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_simple_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_simple_repeat1, 2), SHIFT_REPEAT(99),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 2), SHIFT_REPEAT(24),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selection_statement_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2), SHIFT_REPEAT(22),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_literal_repeat1, 2),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(29),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(136),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 6),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration_statement, 6),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 7),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration_statement, 7),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection_statement, 8),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [442] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
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
