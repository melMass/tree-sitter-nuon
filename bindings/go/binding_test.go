package tree_sitter_nuon_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_nuon "github.com/melmass/tree-sitter-nuon/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nuon.Language())
	if language == nil {
		t.Errorf("Error loading Nuon grammar")
	}
}
