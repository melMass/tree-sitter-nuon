import XCTest
import SwiftTreeSitter
import TreeSitterNuon

final class TreeSitterNuonTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_nuon())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Nuon grammar")
    }
}
