#include <gtest/gtest.h>

#include "my_lib.hpp"

TEST(antlr_tests, simple_addition) {
  EXPECT_DOUBLE_EQ(my_lib::evaluate_expression("6+7"), 13.);
}

TEST(antlr_tests, simple_subtraction) {
  EXPECT_DOUBLE_EQ(my_lib::evaluate_expression("26.5 - 13"), 13.5);
}

TEST(antlr_tests, simple_parentheses) {
  EXPECT_DOUBLE_EQ(my_lib::evaluate_expression("(1729)"), 1729.);
}

TEST(antlr_tests, parentheses_precedence) {
  EXPECT_DOUBLE_EQ(my_lib::evaluate_expression("1 - ((6 - 4) - (3 + 2))"), 4.);
}
