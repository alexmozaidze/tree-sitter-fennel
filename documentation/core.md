<div align="center">

# Core Fennel Syntax

This is a list of all the most important core syntax items this parser produces.

</div>

This list contains general structure of the nodes represented with queries.

> [!NOTE]\
> Some of the nodes were omitted for clarity purposes.

## Compounds

- `list` :: list literal `()`
```racket
(list
  open: "("
  call: (_)?
  item: (_)*
  close: ")")
```
- `sequence` :: sequence literal, otherwise known as sequential table `[]`
```racket
(sequence
  open: "["
  item: (_)*
  close: "]")
```
- `table` :: table literal `{}`
```racket
(table
  open: "{"
  item: (table_pair
          key: (_)
          value: (_))*
  close: "}")
```

## Primitives

- `string` :: either colon string `:abc` or double quote string `"abc"`
```racket
;; colon string
(string
  open: ":"
  content: (string_content))

;; double quote string
(string
  open: "\""
  content: (string_content
             (escape_sequence)*)
  close: "\"")
```
- `number` :: any valid number
```racket
(number)
```
- `nil` :: just `nil`
```racket
(nil)
```
- `boolean` :: either `true` or `false`
```racket
(boolean
  "true")

(boolean
  "false")
```

## Symbols

- `symbol` :: anything that's not explicitly defined in the grammar is a symbol
```racket
(symbol)
```
- `symbol_option` :: a symbol that starts with `&`
```racket
(symbol_option)
```

### Multi-symbols

- `symbol_fragment` :: same as `symbol`, but only used in multi-symbols
```racket
(symbol_fragment)
```
- `multi_symbol` :: a comma separated mush of symbols `a.b.c.d`
```racket
(multi_symbol
  base: (symbol_fragment)
  ("."
   .
   member: (symbol_fragment))+)
```
- `multi_symbol_method` :: method call `a.b.c:deeznuts`
```racket
(multi_symbol_method
  base: [
    (symbol_fragment)
    (multi_symbol)
  ]
  ":"
  method: (symbol_fragment))
```

## Reader macros

All reader macros do is wrap an S-expression, so their structure is identical.

- `hashfn_reader_macro` :: `#expr`
```racket
(hashfn_reader_macro
  macro: "#"
  expression: (_))
```
- `quote_reader_macro` :: `'expr`
```racket
(quote_reader_macro
  macro: "'"
  expression: (_))
```
- `quasi_quote_reader_macro` :: <code>`expr</code>
```racket
(quasi_quote_reader_macro
  macro: "`"
  expression: (_))
```
- `unquote_reader_macro` :: `,expr`
```racket
(unquote_reader_macro
  macro: ","
  expression: (_))
```

## Misc

- `shebang` :: matches `#!` if it's the very first parsed node
```racket
(shebang)
```
- `comment` :: a comment `; comment`
```racket
(comment
  colons: ";"
  body: (comment_body))
```

## Special cases

- `#` :: `#` is recognized as a reader macro if it's immediately followed by an expression, and a symbol otherwise
```racket
;; #hello
(reader_macro
  macro: "#"
  expression: (symbol))

;; (# my-table)
(list
  call: (symbol)
  item: (symbol))
```
