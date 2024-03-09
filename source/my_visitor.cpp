#include "my_visitor.hpp"

#include <any>
#include <functional>
#include <string>

namespace my_lib {
std::any My_Visitor::visitStart(test::TestParser::StartContext* ctx) {
  return visit(ctx->expression());
}

std::any My_Visitor::visitMultiplication(
    test::TestParser::MultiplicationContext* ctx) {
  return visitBinaryExpression(ctx, std::multiplies<double>{});
}

std::any My_Visitor::visitDivision(test::TestParser::DivisionContext* ctx) {
  return visitBinaryExpression(ctx, std::divides<double>{});
}

std::any My_Visitor::visitAddition(test::TestParser::AdditionContext* ctx) {
  return visitBinaryExpression(ctx, std::plus<double>{});
}

std::any My_Visitor::visitSubtraction(
    test::TestParser::SubtractionContext* ctx) {
  return visitBinaryExpression(ctx, std::minus<double>{});
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
