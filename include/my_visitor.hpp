#ifndef MY_VISITOR_HPP
#define MY_VISITOR_HPP

#include <any>

#include "TestParserVisitor.h"

namespace my_lib {
class My_Visitor : public test::TestParserVisitor {
 public:
  std::any visitStart(test::TestParser::StartContext* ctx) override;
  std::any visitMultiplication(
      test::TestParser::MultiplicationContext* ctx) override;
  std::any visitDivision(test::TestParser::DivisionContext* ctx) override;
  std::any visitAddition(test::TestParser::AdditionContext* ctx) override;
  std::any visitSubtraction(test::TestParser::SubtractionContext* ctx) override;
  std::any visitParenthesised(
      test::TestParser::ParenthesisedContext* ctx) override;
  std::any visitLiteral(test::TestParser::LiteralContext* ctx) override;
  std::any visitNumber(test::TestParser::NumberContext* ctx) override;

 private:
  template <typename Context, typename Op>
  std::any visitBinaryExpression(Context* ctx, Op binaryOperation) {
    auto const expressions = ctx->expression();
    auto const lhs = visit(expressions.front());
    auto const rhs = visit(expressions.back());
    return binaryOperation(std::any_cast<double>(lhs),
                           std::any_cast<double>(rhs));
  }
};
}  // namespace my_lib
#endif  // MY_VISITOR_HPP
