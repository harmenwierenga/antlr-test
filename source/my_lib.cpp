#include "my_lib.hpp"

#include <string_view>

#include "TestLexer.h"
#include "TestParser.h"
#include "antlr4-runtime/antlr4-runtime.h"
#include "my_visitor.hpp"

namespace my_lib {
double evaluate_expression(std::string_view expression) {
  antlr4::ANTLRInputStream input(expression);
  test::TestLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  test::TestParser parser(&tokens);

  auto* tree = parser.start();

  My_Visitor my_visitor;
  auto const result = my_visitor.visitStart(tree);

  return any_cast<double>(result);
}
}  // namespace my_lib
