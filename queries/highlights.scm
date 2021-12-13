(string_literal) @string

(boolean_literal) @constant.builtin
(integer_literal) @constant.builtin

(comment) @comment
(function_id) @function
(keyword_arg_key) @property

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