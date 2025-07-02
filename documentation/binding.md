<div align="center">

# Binding syntax items

Fennel core syntax items that are used in binding context (like destructuring).

</div>

This is a list of all the bindings supported by the parser.

The binding syntax items are just slightly more restricted/specialized ones that from core.

> [!NOTE]\
> `_` in the context of this file means "any *binding* node", **NOT** "any node".

## Compounds

- `list_binding` :: list binding `()`
```racket
(list_binding
  open: "("
  item: (_)*
  close: ")")
```
- `rest_binding` :: a rest binding `[& rest]`
```racket
(rest_binding
  ; lhs is always "&"
  lhs: (symbol_option)
  rhs: (_))
```
- `sequence_binding` :: sequence binding `[]`
```racket
(sequence_binding
  open: "["
  item: (_)*
  item: (rest_binding)?
  .
  close: "]")
```
- `table_binding` :: table binding `{}`
```racket
(table_binding
  open: "{"
  item: (table_binding_pair
          key: (_)
          value: (_))*
  close: "}")
```

## Symbols

- `symbol_binding` :: an aliased `symbol`
```racket
(symbol_binding)
```

## Primitives

- `string_binding` :: an aliased `string`
```racket
;; colon string binding
(string_binding
  open: ":"
  content: (string_content))

;; double quote string binding
(string_binding
  open: "\""
  content: (string_content
             (escape_sequence)*)
  close: "\"")
```
- `number_binding` :: an aliased `number`
```racket
(number_binding)
```
- `boolean_binding` :: an aliased `boolean`
```racket
(boolean_binding
  "true")

(boolean_binding
  "false")
```
- `nil_binding` :: an aliased `nil`
```racket
(nil_binding)
```

## Macros

- `unquote_macro_binding` :: an aliased `unquote_reader_macro`
```racket
(unquote_macro_binding
  macro: ","
  expression: (_)) ; exception: this match any node
```

## Misc

- `binding_pair` :: a pair of `binding => value`, mainly used by forms
```racket
;; NOTE: `lhs` is any binding node, while `rhs` is any non-binding node
(binding_pair
  lhs: (_)
  rhs: (_))
```
