package tree_sitter_nuon_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/melMass/tree-sitter-nuon"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nuon.Language())
	if language == nil {
		t.Errorf("Error loading Nuon grammar")
	}
}
