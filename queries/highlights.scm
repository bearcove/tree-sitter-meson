(string_literal) @string

(boolean_literal) @constant.builtin
(integer_literal) @constant.builtin

(comment) @comment

(id_expression) @variable.parameter

"if" @keyword
"elif" @keyword
"else" @keyword
"endif" @keyword

"foreach" @keyword
"endforeach" @keyword
"break" @keyword
"continue" @keyword

"not" @operator
"in" @operator
"and" @operator
"or" @operator

"+" @operator
"-" @operator
"*" @operator
"/" @operator
"%" @operator

":" @punctuation.delimiter
"," @punctuation.delimiter

"(" @punctuation.bracket
")" @punctuation.bracket
"[" @punctuation.bracket
"]" @punctuation.bracket