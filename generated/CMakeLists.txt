set(lexer_name TestLexer)
set(parser_name TestParser)

set(source_files grammars/${lexer_name}.cpp
                 grammars/${parser_name}.cpp
                 grammars/${parser_name}BaseVisitor.cpp
                 grammars/${parser_name}Visitor.cpp
)

set(header_files grammars/${lexer_name}.h
                 grammars/${parser_name}.h
                 grammars/${parser_name}BaseVisitor.h
                 grammars/${parser_name}Visitor.h
)

find_package(antlr4-runtime REQUIRED)

add_library(parser STATIC ${header_files} ${source_files})
target_include_directories(parser PUBLIC ${CMAKE_SOURCE_DIR}/grammars)
target_link_libraries(parser PUBLIC antlr4_static)
