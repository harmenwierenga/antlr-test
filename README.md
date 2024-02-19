# antlr-test
Play around with Antlr4

# How to build
Windows:

- conan install . --build=missing --profile=vs2019_debug
- build\generators\conanbuild.bat
- cmake -S . -B build -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE="build\generators\conan_toolchain.cmake" -DCMAKE_BUILD_TYPE=Debug
- cmake --build build --config Debug
- build\generators\deactivate_conanbuild.bat
