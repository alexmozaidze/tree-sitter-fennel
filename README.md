<div align="center">


# tree-sitter-fennel

[Fennel](https://fennel-lang.org) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter) focused on simplicity.


</div>

Very few forms are baked into the grammar, but even then they appear as `(symbol)` for ease of querying and less confusion.

For a full list of special symbols, see [`SPECIAL_OVERRIDE_SYMBOLS`](/grammar.js#L15-L24) at the top of the grammar file.

## Syntax items

This is a list of all the most important syntax items this parser produces

This list contains explicit queries that describe where a syntax item may be used and also example queries.

> [!NOTE]\
> Some of the unimportant anonymous nodes were omitted for clarity purposes.

### Compounds

- `(list)` :: list literal `()`
```racket
(list
  (_)*)
```
- `(sequence)` :: sequence literal, otherwise known as sequential table `[]`
```racket
(sequence
  (_)*)
```
- `(table)` :: table literal `{}`
```racket
(table
  (table_pair
    key: (_)
    value: (_))*)
```

### Primitives

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

### Symbols

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

### Reader macros

Every reader macro is to be queried like so:
```racket
(reader_macro
  macro: "#" ; put any other reader macro character here
  expression: (_))
```

For a full list of valid reader macros see [`READER_MACRO_CHARS`](/grammar.js#L26-L31) in the grammar file.

### Misc

- `(shebang)` :: if the very first line starts with `#!`, it matches that line
```racket
(shebang)
```

### Special cases

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

## References

- [Fennel language reference](https://fennel-lang.org/reference)
- [Original tree-sitter-fennel parser](https://github.com/TravonteD/tree-sitter-fennel)
