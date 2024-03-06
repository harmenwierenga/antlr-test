#ifndef MY_VISITOR_HPP
#define MY_VISITOR_HPP

#include "TestParserVisitor.h"

namespace my_lib {
class My_Visitor : public test::TestParserVisitor {
 public:
  std::any visitStart(test::TestParser::StartContext* ctx) override;

  std::any visitAddition(test::TestParser::AdditionContext* ctx) override;

  std::any visitSubtraction(test::TestParser::SubtractionContext* ctx) override;

  std::any visitParenthesised(
      test::TestParser::ParenthesisedContext* ctx) override;

  std::any visitLiteral(test::TestParser::LiteralContext* ctx) override;

  std::any visitNumber(test::TestParser::NumberContext* ctx) override;
};
}  // namespace my_lib
#endif  // MY_VISITOR_HPP
