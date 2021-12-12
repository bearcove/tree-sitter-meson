(string_literal) @string
(boolean_literal) @keyword
(integer_literal) @number

(id_expression) @variable.parameter

"if" @keyword
"elif" @keyword
"else" @keyword
"endif" @keyword

"foreach" @keyword
"endforeach" @keyword
"break" @keyword
"continue" @keyword

[
	":"
	","
] @punctuation.delimiter