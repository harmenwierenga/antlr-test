find_package(GTest REQUIRED)

enable_testing()

add_executable(antlr_tests antlr_tests.cpp)
target_link_libraries(antlr_tests PRIVATE gtest::gtest my_lib)

include(GoogleTest)
gtest_discover_tests(antlr_tests)
