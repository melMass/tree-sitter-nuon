[
  (true)
  (false)
] @boolean

(string) @string

(comment) @comment

(null) @constant.builtin

(number) @number

(binary) @string.special

(table_header
  (identifier) @property)

(date) @string.special
(filesize_unit) @string.special.symbol

[
  ","
  ":"
  ";"
] @punctuation.delimiter

[
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

("\"" @conceal
  (#set! conceal ""))

(escape_sequence) @string.escape

((escape_sequence) @conceal
  (#eq? @conceal "\\\"")
  (#set! conceal "\""))
