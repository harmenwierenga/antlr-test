cmake_minimum_required(VERSION 3.28)
project(antlr-test VERSION 0.1 LANGUAGES CXX)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(antlr4-runtime REQUIRED)

add_subdirectory(source)

add_subdirectory(test)
