//! This crate provides dot language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = r#"
//!     graph {
//!         a -- b
//!     }
//! "#;
//! let mut parser = tree_sitter::Parser::new();
//! let language = tree_sitter_dot::LANGUAGE;
//! parser.set_language(&language.into()).expect("Error loading dot grammar");
//! let tree = parser.parse(code, None).unwrap();
//! ```
//!
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

/// Use LanguageFn instead of Language struct direct so we do not have issues
/// between different versions
use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_dot() -> *const ();
}

/// Get the tree-sitter grammar for dot.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
/// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_dot) };

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &'static str = include_str!("../../src/node-types.json");

pub const HIGHLIGHTS_QUERY: &'static str = include_str!("../../queries/highlights.scm");
pub const INJECTIONS_QUERY: &'static str = include_str!("../../queries/injections.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading dot language");
    }
}
