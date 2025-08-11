<div align="center">

# Fennel Forms

Fennel built-in forms.

</div>

This is a list of all the forms supported by the parser.

This list contains general structure of forms represented with queries.

All forms are suffixed with `_form` in order to distinguish them from regular nodes.\
So `lambda` becomes `lambda_form` in the parse tree.

> [!NOTE]\
> <span>1.</span> `_binding` represents a wildcard for binding nodes\
> <span>2.</span> `_` represents a wildcard with non-binding nodes

## Symply Scoped forms

- `local`/`var`/`global` :: simple variable definition
```racket
([
  local_form
  var_form
  global_form
]
  call: (symbol)
  (binding_pair
    lhs: (_binding)
    rhs: (_)))
```
- `set` :: variable mutation
```racket
(set_form
  call: (symbol)
  lhs: (_)
  rhs: (_))
```
- `let_vars` :: variables portion of the `let` form
```racket
(let_vars
  (binding_pair)*)
```
- `let` :: let form
```racket
(let_form
  call: (symbol)
  vars: (let_vars)
  item: (_)*)
```
- `import_macros` :: `import-macros` form
```racket
(import_macros_form
  call: (symbol)
  imports: (_binding)
  module: (_))
```
- `hashfn` :: `hashfn` form
```racket
(hashfn_form
  call: (symbol)
  item: (_))
```
- `quote` :: `quote` form
```racket
(quote_form
  call: (symbol)
  item: (_))
```
- `unquote` :: `unquote` form
```racket
(unquote_form
  call: (symbol)
  item: (_))
```

## Function-like forms

- `sequence_arguments` :: an arguments portion `[arg1 arg2 ...]`
```racket
(sequence_arguments
  item: (_binding)*
  item: [
    (rest_binding)
    ((symbol_binding) @_vararg
      (#eq? @_vararg "..."))
  ])
```
- `docstring` :: aliased `string`
```racket
;; colon docstring
(docstring
  open: ":"
  content: (string_content))

;; double quote docstring
(docstring
  open: "\""
  content: (string_content
             (escape_sequence)*)
  close: "\"")
```
- `table_metadata_pair` :: metadata table pair
```racket
;; generic metadata pair
(table_metadata_pair
  key: (_)
  value: (_))

;; docstring metadata pair
(table_metadata_pair
  key: (string
         content: (string_content) @_str
         (#eq? @_str "fnl/docstring"))
  value: (docstring))

;; arglist metadata pair
(table_metadata_pair
  key: (string
         content: (string_content) @_str
         (#eq? @_str "fnl/arglist"))
  value: (sequence_arguments))
```
- `table_metadata` :: table metadata
```racket
(table_metadata
  item: (table_metadata_pair)*)
```
- `fn`/`lambda`/`macro` :: function-like forms
```racket
([
  fn_form
  lambda_form
  macro_form
]
  call: (symbol)
  name: [
    (symbol)
    (multi_symbol)
  ]
  args: (sequence_arguments)
  docstring: (docstring)?
  metadata: (table_metadata)?
  item: (_)*)
```

## Conditional forms

### `case`/`match`

- `case_guard_or_special` :: the `(or)` special used in `(where)` specials inside `case` expressions
```racket
(case_guard_or_special
  call: (symbol)
  item: (_binding)*)
```
- `case_guard` :: the `(where)` special inside `case` expressions
```racket
(case_guard
  call: (symbol)
  item: [
    (_binding)
    (case_guard_or_special)
  ]
  guard: (_)*)
```
- `case_pair` :: a pair in `case` expressions
```racket
(case_pair
  lhs: [
    (case_guard)
    (_binding)
  ]
  rhs: (_))
```
- `case`/`match` :: `case`/`match` form
```racket
([
  case_form
  match_form
]
  call: (symbol)
  item: (_)
  (case_pair)*)
```

### `case-try`/`match-try`

- `case_catch` :: `(catch)` case in `case-try`/`match-try`
```racket
(case_catch
  (case_pair)*)
```
- `case_try`/`match_try` :: `case-try`/`match-try` form
```racket
([
  case_try
  match_try
]
  call: (symbol)
  item: (_)
  (case_pair)*
  (case_catch)? .)
```

### `if`

- `if_pair` :: `condition => expression` pair
```racket
(if_pair
  condition: (_)
  expression: (_))
```
- `if` :: `if` form
```racket
(if_form
  (if_pair)*
  else: (_))
```

## Iterator forms

> [!NOTE]\
> Some iterator forms support legacy colon option syntax `:option value`. It was replaced with the new syntax `&option value`, however the old syntax is still parsed and supported, it just parses `:until`/`:into` as `(symbol_option)`.

- `iter_option` :: `&option value` inside `(iter_body)`
```racket
(iter_option
  option: (symbol_option)
  value: (_))
```
- Regular iterators
```racket
([
  each
  collect
  icollect
  accumulate
]
  iter_body: (iter_body
               binding: (_binding)+
               iterator: (_)
               option: (iter_option)*)
  item: (_)*)
```
- For iterators
```racket
([
  for
  fcollect
  faccumulate
]
  iter_body: (for_iter_body
               index: (_binding)
               from: (_)
               to: (_)
               step: (_)?
               option: (iter_option)*)
  item: (_)*)
```
