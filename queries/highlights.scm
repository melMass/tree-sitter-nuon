(pair
  key: (_) @string.special.key)

(string) @string

(filesize unit: _ @variable.parameter)
(duration unit: _ @variable.parameter)

(table
  head:(_) @constant)

(number) @number
(date) @constant
[
  (null)
  (true)
  (false)
] @constant.builtin

(escape_sequence) @escape
[
    ","
    ";"
] @punctuation.delimiter
[":"] @punctuation.special

(comment) @comment
