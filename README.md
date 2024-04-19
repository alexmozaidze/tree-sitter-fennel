<div align="center">


# tree-sitter-fennel

[Fennel](https://fennel-lang.org) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter) focused on simplicity and modularity.


</div>

The grammar is broken down to *core*, and *extensions*.
- *core* :: syntax items with no forms support.
- *extensions* :: support to built-in forms, bindings, destructuring, and other macro-like behaviours.

If you want to extend the grammar in order to add more forms/macros, refer to [HACKING.md](HACKING.md).

For a full list of core syntax items, refer to [documentation/core.md](/documentation/core.md).\
For a full list of supported built-in Fennel forms, refer to [documentation/builtin-forms.md](documentation/builtin-forms.md).

## References

- [Fennel language reference](https://fennel-lang.org/reference)
- [Original tree-sitter-fennel parser](https://github.com/TravonteD/tree-sitter-fennel)
