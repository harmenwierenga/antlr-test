#include "my_visitor.hpp"

#include <string>

namespace my_lib {
std::any My_Visitor::visitStart(test::TestParser::StartContext* ctx) {
  return visit(ctx->expression());
}

std::any My_Visitor::visitAddition(test::TestParser::AdditionContext* ctx) {
  auto const expressions = ctx->expression();
  auto const lhs = visit(expressions.front());
  auto const rhs = visit(expressions.back());
  return std::any_cast<double>(lhs) + std::any_cast<double>(rhs);
}

std::any My_Visitor::visitSubtraction(
    test::TestParser::SubtractionContext* ctx) {
  auto const expressions = ctx->expression();
  auto const lhs = visit(expressions.front());
  auto const rhs = visit(expressions.back());
  return std::any_cast<double>(lhs) - std::any_cast<double>(rhs);
}

std::any My_Visitor::visitParenthesised(
    test::TestParser::ParenthesisedContext* ctx) {
  return visit(ctx->expression());
}

std::any My_Visitor::visitLiteral(test::TestParser::LiteralContext* ctx) {
  return visit(ctx->number());
}

std::any My_Visitor::visitNumber(test::TestParser::NumberContext* ctx) {
  return std::stod(ctx->getText());
}
}  // namespace my_lib
