# AGENTS.md

## Build

`Makefile` is the build entry point — read it for the available targets and what each does.
Every other manifest in the repo is binding or packaging scaffolding that no workflow invokes,
so don't reach for `Cargo.toml`, `pyproject.toml` and the rest to learn how the project builds
or tests. The `tree-sitter` CLI is pinned as a devDependency, so `npx tree-sitter …` is the
supported direct invocation. A fresh clone needs `npm install` first.

Run the Makefile's `test` target before claiming work is done. It regenerates the parser first,
so a `grammar.js` change that cannot be generated fails there too.

## Source

Hand-edited: `grammar.js`, the modules it loads under `grammar-lib/` and `extensions/`, and the
corpus tests under `test/corpus/` — add a case there for every new form.

Generated and committed, never hand-edited: the parser artifacts `make generate` writes under
`src/`. Regenerate them and commit them in the same change as the `grammar.js` edit that caused
them; an edit made by hand is lost on the next build. `src/scanner.c` is the hand-written file
in `src/` that generation leaves alone.

Scaffolding, not reproduced by any command here and not ours to edit: the `bindings/**` tree and
the language manifests.

`.ignore` keeps the generated files out of ripgrep results — don't add a hand-edited path to it,
or you hide real source from searches.

## Docs

`HACKING.md` covers the extension module format, for adding a new form or macro.
`documentation/` covers the syntax items, built-in forms and language bindings.
