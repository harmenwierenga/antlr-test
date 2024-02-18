#include <gtest/gtest.h>

#include "my_lib.hpp"

TEST(antlr_tests, first_try) {
	EXPECT_EQ(my_lib::f(), 13);
}
