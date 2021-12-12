module.exports = grammar({
  name: "meson",

  // Reference: <https://mesonbuild.com/Syntax.html>
  rules: {
    // this is tree-sitter's root file
    source_file: ($) => $.build_definition,

    //   // anything beyond that point directly references the meson grammar

    //   // additive_expression: multiplicative_expression | (additive_expression additive_operator multiplicative_expression)
    //   additive_expression: ($) =>
    //     choice(
    //       $.multiplicative_expression,
    //       seq(
    //         $.additive_expression,
    //         $.additive_operator,
    //         $.multiplicative_expression
    //       )
    //     ),

    //   // additive_operator: "+" | "-"
    //   additive_operator: ($) => choice("+", "-"),

    //   // argument_list: positional_arguments ["," keyword_arguments] | keyword_arguments
    //   argument_list: ($) =>
    //     choice(
    //       seq($.positional_arguments, optional(seq(",", $.keyword_arguments))),
    //       $.keyword_arguments
    //     ),

    //   // assignment_statement: expression asssignment_operator expression
    //   assignment_statement: ($) =>
    //     seq($.expression, $.assignment_operator, $.expression),

    //   // assignment_operator: "=" | "*=" | "/=" | "%=" | "+=" | "-="
    //   assignment_operator: ($) => choice("=", "*=", "/=", "%=", "+=", "-="),

    //   // conditional_expression: logical_or_expression | (logical_or_expression "?" expression ":" assignment_expression
    //   // (this is an error, there's no `assignment_expression` rule, since assignments
    //   // are not expressions in meson)
    //   conditional_expression: ($) =>
    //     choice(
    //       $.logical_or_expression,
    //       seq($.logical_or_expression, "?", $.expression, ":", $.expression)
    //     ),

    //   // equality_expression: relational_expression | (equality_expression equality_operator relational_expression)
    //   equality_expression: ($) =>
    //     choice(
    //       $.relational_expression,
    //       seq($.equality_expression, $.equality_operator, $.relational_expression)
    //     ),

    //   // equality_operator: "==" | "!="
    //   equality_operator: ($) => choice("==", "!="),

    //   // expression: conditional_expression | logical_or_expression
    //   expression: ($) =>
    //     choice($.conditional_expression, $.logical_or_expression),

    //   // expression_list: expression ("," expression)*
    //   expression_list: ($) => seq($.expression, repeat(seq(",", $.expression))),

    //   // expression_statement: expression
    //   expression_statement: ($) => $.expression,

    //   // function_expression: id_expression "(" [argument_list] ")"
    //   function_expression: ($) =>
    //     seq($.id_expression, "(", optional($.argument_list), ")"),

    //   // id_expression: IDENTIFIER
    //   id_expression: ($) => $.IDENTIFIER,

    //   // IDENTIFIER: /[a-zA-Z_][a-zA-Z_0-9]*/
    //   IDENTIFIER: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

    //   // identifier_list: id_expression ("," id_expression)*
    //   identifier_list: ($) =>
    //     seq($.id_expression, repeat(seq(",", $.id_expression))),

    //   // iteration_statement: "foreach" identifier_list ":" id_expression NEWLINE (statement | jump_statement)* "endforeach"
    //   iteration_statement: ($) =>
    //     seq(
    //       "foreach",
    //       $.identifier_list,
    //       ":",
    //       $.id_expression,
    //       $.NEWLINE,
    //       repeat(choice($.statement, $.jump_statement)),
    //       "endforeach"
    //     ),

    //   // jump_statement: ("break" | "continue") NEWLINE
    //   jump_statement: ($) => seq(choice("break", "continue"), $.NEWLINE),

    //   // key_value_item: expression ":" expression
    //   key_value_item: ($) => seq($.expression, ":", $.expression),

    //   // key_value_list: key_value_item ("," key_value_item)*
    //   key_value_list: ($) =>
    //     seq($.key_value_item, repeat(seq(",", $.key_value_item))),

    //   // keyword_item: id_expression ":" expression
    //   keyword_item: ($) => seq($.id_expression, ":", $.expression),

    //   // keyword_arguments: keyword_item ("," keyword_item)*
    //   keyword_arguments: ($) =>
    //     seq($.keyword_item, repeat(seq(",", $.keyword_item))),

    //   // logical_and_expression: equality_expression | (logical_and_expression "and" equality_expression)
    //   logical_and_expression: ($) =>
    //     choice(
    //       $.equality_expression,
    //       seq($.logical_and_expression, "and", $.equality_expression)
    //     ),

    //   // logical_or_expression: logical_and_expression | (logical_or_expression "or" logical_and_expression)
    //   logical_or_expression: ($) =>
    //     choice(
    //       $.logical_and_expression,
    //       seq($.logical_or_expression, "or", $.logical_and_expression)
    //     ),

    //   // method_expression: postfix_expression "." function_expression
    //   method_expression: ($) =>
    //     seq($.postfix_expression, ".", $.function_expression),

    //   // multiplicative_expression: unary_expression | (multiplicative_expression multiplicative_operator unary_expression)
    //   multiplicative_expression: ($) =>
    //     choice(
    //       $.unary_expression,
    //       seq(
    //         $.multiplicative_expression,
    //         $.multiplicative_operator,
    //         $.unary_expression
    //       )
    //     ),

    //   // multiplicative_operator: "*" | "/" | "%"
    //   multiplicative_operator: ($) => choice("*", "/", "%"),

    //   // positional_arguments: expression ("," expression)*
    //   positional_arguments: ($) =>
    //     seq($.expression, repeat(seq(",", $.expression))),

    //   // postfix_expression: primary_expression | subscript_expression | function_expression | method_expression
    //   postfix_expression: ($) =>
    //     choice(
    //       $.primary_expression,
    //       $.subscript_expression,
    //       $.function_expression,
    //       $.method_expression
    //     ),

    // primary_expression: literal | ("(" expression ")") | id_expression
    // primary_expression: ($) =>
    //   choice($.literal, seq("(", $.expression, ")"), $.id_expression),

    //   // relational_expression: additive_expression | (relational_expression relational_operator additive_expression)
    //   relational_expression: ($) =>
    //     choice(
    //       $.additive_expression,
    //       seq(
    //         $.relational_expression,
    //         $.relational_operator,
    //         $.additive_expression
    //       )
    //     ),

    //   // relational_operator: ">" | "<" | ">=" | "<=" | "in" | ("not" "in")
    //   relational_operator: ($) =>
    //     choice(">", "<", ">=", "<=", "in", seq("not", "in")),

    //   // selection_statement: "if" condition NEWLINE (statement)* ("elif" condition NEWLINE (statement)*)* ["else" (statement)*] "endif"
    //   selection_statement: ($) =>
    //     seq(
    //       "if",
    //       $.condition,
    //       $.NEWLINE,
    //       repeat($.statement),
    //       repeat(seq("elif", $.condition, $.NEWLINE, repeat($.statement))),
    //       seq("else", repeat($.statement)),
    //       "endif"
    //     ),

    //   // subscript_expression: postfix_expression "[" expression "]"
    //   subscript_expression: ($) =>
    //     seq($.postfix_expression, "[", $.expression, "]"),

    //   // unary_expression: postfix_expression | (unary_operator unary_expression)
    //   unary_expression: ($) =>
    //     choice($.postfix_expression, seq($.unary_operator, $.unary_expression)),

    //   // unary_operator: "not" | "+" | "-"
    //   unary_operator: ($) => choice("not", "+", "-"),

    // build_definition: (NEWLINE | statement)*
    build_definition: ($) => repeat1($.statement),

    // statement: (expression_statement | selection_statement | iteration_statement | assignment_statement) NEWLINE
    statement: ($) =>
      seq(
        choice(
          $.selection_statement,
          $.expression,
          // $.iteration_statement,
          // $.assignment_statement,
        ),
        $._NEWLINE,
      ),

    // selection_statement: "if" condition NEWLINE (statement)* ("elif" condition NEWLINE (statement)*)* ["else" (statement)*] "endif"
    selection_statement: ($) =>
      seq(
        "if",
        $.condition,
        $._NEWLINE,
        repeat($.statement),
        repeat(seq("elif", $.condition, $._NEWLINE, repeat($.statement))),
        seq("else", repeat($.statement)),
        "endif",
      ),

    // condition: expression
    condition: ($) => $.expression,

    expression: ($) => choice($.literal),

    // literal: integer_literal | string_literal | boolean_literal | array_literal | dictionary_literal
    literal: ($) =>
      choice(
        $.integer_literal,
        $.string_literal,
        $.boolean_literal,
        $.array_literal,
        $.dictionary_literal,
      ),

    // integer_literal: decimal_literal | octal_literal | hex_literal
    integer_literal: ($) =>
      choice($.decimal_literal, $.octal_literal, $.hex_literal),

    // decimal_literal: DECIMAL_NUMBER
    decimal_literal: ($) => $._DECIMAL_NUMBER,

    // DECIMAL_NUMBER: /[1-9][0-9]*/
    _DECIMAL_NUMBER: ($) => /[1-9][0-9]*/,

    // octal_literal: "0o" OCTAL_NUMBER
    octal_literal: ($) => seq("0o", $._OCTAL_NUMBER),

    // OCTAL_NUMBER: /[0-7]+/
    _OCTAL_NUMBER: ($) => /[0-7]+/,

    // hex_literal: "0x" HEX_NUMBER
    hex_literal: ($) => seq("0x", $._HEX_NUMBER),

    // HEX_NUMBER: /[a-fA-F0-9]+/
    _HEX_NUMBER: ($) => /[a-fA-F0-9]+/,

    // string_literal: ("'" STRING_SIMPLE_VALUE "'") | ("'''" STRING_MULTILINE_VALUE "'''")
    // STRING_MULTILINE_VALUE: \.*?(''')\
    // STRING_SIMPLE_VALUE: \.*?(?<!\\)(\\\\)*?'\
    string_literal: ($) => choice($.string_simple, $.string_multiline),

    // shamelessly stolen from <https://github.com/tree-sitter/tree-sitter-c/>
    escape_sequence: ($) =>
      token(
        prec(
          1,
          seq(
            "\\",
            choice(
              /[^xuU]/,
              /\d{2,3}/,
              /x[0-9a-fA-F]{2,}/,
              /u[0-9a-fA-F]{4}/,
              /U[0-9a-fA-F]{8}/,
            ),
          ),
        ),
      ),

    string_simple: ($) =>
      seq(
        "'",
        repeat(
          choice(token.immediate(prec(1, /[^\\'\n]+/)), $.escape_sequence),
        ),
        "'",
      ),

    string_multiline: ($) =>
      seq(
        "'''",
        repeat(
          choice(
            token.immediate(prec(1, /[^\\']+/)),
            "''",
            "'",
            $.escape_sequence,
          ),
        ),
        "'''",
      ),

    // boolean_literal: "true" | "false"
    boolean_literal: ($) => choice("true", "false"),

    // array_literal: "[" [expression_list] "]"
    array_literal: ($) =>
      seq(
        "[",
        optional(seq($.expression, repeat(seq(",", $.expression)))),
        "]",
      ),

    _NEWLINE: ($) => choice("\n", "\r\n"),

    // dictionary_literal: "{" [key_value_list] "}"
    dictionary_literal: ($) =>
      seq(
        "{",
        optional(seq($.key_value_item, repeat(seq(",", $.key_value_item)))),
        "}",
      ),

    // key_value_item: expression ":" expression
    key_value_item: ($) =>
      seq(field("key", $.expression), ":", field("value", $.expression)),
  },
});
