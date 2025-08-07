import XCTest
import SwiftTreeSitter
import TreeSitterFennel

final class TreeSitterFennelTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_fennel())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Fennel grammar")
    }
}
