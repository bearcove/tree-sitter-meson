(string_literal) @string
(boolean_literal) @keyword
(integer_literal) @number

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

[
	"+"
	"-"
	"*"
	"/"
	"%"
] @operator

[
	":"
	","
] @punctuation.delimiter