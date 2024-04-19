# Core Fennel Syntax

This is a list of all the most important core syntax items this parser produces.

This list contains explicit queries that describe where a syntax item may be used and also example queries.

> [!NOTE]\
> Some of the unimportant nodes were omitted for clarity purposes. Some nodes are also implied.

## Compounds

- `(list)` :: list literal `()`
```racket
(list
  item: (_)*)
```
- `(sequence)` :: sequence literal, otherwise known as sequential table `[]`
```racket
(sequence
  item: (_)*)
```
- `(table)` :: table literal `{}`
```racket
(table
  (table_pair
    key: (_)
    value: (_))*)
```

## Primitives

- `(string)` :: either colon string `:abc` or double quote string `"abc"`
```racket
;; colon string
(string
  ":"
  (string_content))

;; double quote string
(string
  "\""
  (string_content
    (escape_sequence)*)
  "\"")
```
- `(number)` :: any valid number
```racket
(number)
```
- `(nil)` :: just `nil`
```racket
(nil)
```
- `(boolean)` :: either `true` or `false`
```racket
(boolean)
```

## Symbols

- `(symbol)` :: anything that's not explicitly defined in the grammar is a symbol
```racket
(symbol)
```
- `(symbol_fragment)` :: same as `(symbol)`, but only used in multi-symbols
- `(multi_symbol)` :: a comma separated mush of symbols `a.b.c.d`
```racket
(multi_symbol
  base: (symbol_fragment)
  member: (symbol_fragment)+)
```
- `(multi_symbol_method)` :: method call `a.b.c:deeznuts`, note that it's only allowed to appear as the first item of `(list)`
```racket
(list
  .
  (multi_symbol_method
    base: (multi_symbol
            base: (symbol_fragment)
            member: (symbol_fragment)+)
    method: (symbol_fragment))
  (_)*)
```

## Reader macros

Every reader macro is to be queried like so:
```racket
(reader_macro
  macro: "#" ; put any other reader macro character here
  expression: (_))
```

For a full list of valid reader macros see [`READER_MACRO_CHARS`](/grammar.js#L27-L32) in the grammar file.

## Misc

- `(shebang)` :: if the very first line starts with `#!`, it matches that line
```racket
(shebang)
```

- `(comment)` :: comment node with distinct `colons` and `body` fields
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
  (symbol)
  (symbol))
```
