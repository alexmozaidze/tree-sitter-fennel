# Hacking The Grammar

The entire introduction section can be [skipped](#adding-new-formsmacros), in case you're impatient.

## Introduction

Lisp is a very simple language: You open a brace, put shit in there and then close the brace. That's the entire language, speaking in basic form (pun intended). Making a parser for Lisp is incredibly easy, which is also the case in Tree-sitter, the bare syntax portion is self-contained in the [`grammar.js`](grammar.js) file; you can just use the core grammar and none of the extensions, and it will work wonders, if you just want to parse the Fennel syntax.

This repo defines grammar for Fennel's forms as extensions. These extend the core syntax by parsing custom structures like `let`, `each` and `match` and assigning custom nodes and fields to match on. However you might be asking...

### Why bake forms/macros into the grammar?

There is a reason why some of the forms are baked into the grammar. Say you've only compiled the parser with only the *core* and want to select every condition in an `if`. You are unable to use scripting (say, you're integrating into a text editor) and have to use queries to match it out, so you do something like this:
```racket
(list
  call: (symbol) @_form
  (#eq? @_form "if")
  .
  ((_) @condition
   .
   (_) @_branch)*)
```

This seems rather uncomplicated... And after testing it out - it works! *But* that is only if there aren't any comments in the way.
```fennel
(if tuesday?
    ;; This branch leagalizes nuclear bombs, but only for Tuesdays
    (legalize-nuclear-bombs))
```

Now, your query doesn't match a darn thing! But you don't lose hope, and instead decide to *fix* your query:
```racket
(list
  call: (symbol) @_form
  (#eq? @_form "if")
  .
  (comment)*
  .
  ((_) @condition
   .
   (comment)*
   .
   (_) @_branch)*)
```
Ok, **now** it should work. And, lo and behold, now it parses the code successfuly!

However, you now encounter 2 more problems:
1. Your query is now matching garbage comment nodes that are there as an ugly fix, and...
2. Your query is **extremely** slow. You cannot use it in places where speed is important, like highlighting (or any other task Tree-sitter was designed to do).

> [!NOTE]\
> There is currently an [open issue](https://github.com/tree-sitter/tree-sitter/issues/1454) on fixing both of the problems above, but until it is resolved as completed, it is off the table.

### What's the solution?

Although, it is bulky, the only option left is to bake the forms into the grammar, making it part of the parsing process. This makes the parser heavier, but it is now extremely easy to query out our desired result:
```racket
(if_form
  (if_pair
    condition: (_) @condition
    expression: (_)))
```
That's it! No slowdowns, no funky garbage nodes, just the things we want, which is perfect!

## Adding new forms/macros

In this section we will add some macros from [`hibiscus.nvim`](https://github.com/udayvir-singh/hibiscus.nvim).

First you have to create a file in `extensions/` directory, any file name would suffice, but in our example it'll be `hibiscus.js`. So, let's bring out the template we'll be using for our module:
```js
// extensions/hibiscus.js

const rules = {};
const forms = {};

// Code goes here...

module.exports = {
	rules,
	forms,
};
```

Now, we can add our macros, but first, we have to familiarize ourselves with the module structure and the toolkit at our disposal.

### Module structure

The structure of a module is as the template above. Every module has to output an object (at least an empty one), otherwise it's an error.\
The return type of modules is `TSExtension`
```js
/**
 * @typedef {{rules, forms, inline, conflicts}} TSExtension
 */
```

`TSExtension` contains some fields, but we're currently interested in 2 of them:
- `rules` :: defines rules that are not used or post-processed in any way
- `forms` :: defines rules that are to be used as forms. The rules inside are renamed to be suffixed with `_form`, so `let` becomes `let_form`

### Toolkit

All of the tools/libraries for making forms is at `grammar-lib/`.

- `dsl.js` :: functions for wrapping nodes in more common structures like `list` or `form`
- `fs.js` :: used internally for bulk-loading extensions and merging them into one
- `node-utils.js` :: some utility functions for nodes that are rarely used by themselves
- `prec.js` :: a table with named precedence levels

Most of the time you'll only need `dsl.js` and `prec.js`.

### Adding the macros

Let's define the `map!` macro.

This macro has a structure:
```fennel
(map! {args} {lhs} {rhs} {desc?})
```
where `{args}` is:
```fennel
; modes |                   options                           |
[ nivcx  :remap :verbose :buffer :nowait :expr :unique :script ]
```
Usage example:
```fennel
(map! [n :remap] "<leader>s" "<cmd>w<cr>" "Saves the buffer")
```

There are a couple of approaches to defining the rules for this macro, but in our case, we'll be *permissive*; we won't assert any particular keyword or code correctness, we just parse the general syntax. It's both easier and simpler that way.

Let's add the macro
```js
// extensions/hibiscus.js

const {
	sequence,
	form,
} = require('../grammar-lib/dsl.js');

const rules = {};
const forms = {};

rules['keymap_sequence'] = $ => sequence(
	field('modes', $.symbol),
	repeat(field('option', $.string)),
);

forms['map!'] = $ => form($,
	'map!',
	field('keymaps', $.keymap_sequence),
	field('lhs', $._sexp),
	field('rhs', $._sexp),
	optional(field('description', alias($.string, $.docstring))),
);

module.exports = {
	rules,
	forms,
};
```

The code is self-explanatory, so I won't bother explaining it all. You can go from here to create your own module to extend the grammar. I suggest going through `dsl.js` and checking out every function to get a grasp of your toolset.
