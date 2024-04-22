package tree_sitter_fennel_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-fennel"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_fennel.Language())
	if language == nil {
		t.Errorf("Error loading Fennel grammar")
	}
}
