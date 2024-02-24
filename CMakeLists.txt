cmake_minimum_required(VERSION 3.28)
project(antlr-test VERSION 0.1 LANGUAGES CXX)

find_package(antlr4-runtime REQUIRED)

add_subdirectory(source)

add_subdirectory(test)
