# antlr-test
Play around with Antlr4

# How to generate C++ grammar files
antlr4 -o generated -Werror -Dlanguage=Cpp -package test .\grammars\TestLexer.g4
antlr4 -o generated -Werror -Dlanguage=Cpp -lib .\generated\grammars -package test -no-listener -visitor .\grammars\TestParser.g4

# How to build
Windows:

- conan install . --build=missing --profile=msvc_debug
- build\generators\conanbuild.bat
- cmake -S . -B build -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE="build\generators\conan_toolchain.cmake" -DCMAKE_BUILD_TYPE=Debug
- cmake --build build --config Debug
- build\generators\deactivate_conanbuild.bat
