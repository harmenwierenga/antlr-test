# antlr-test
Play around with Antlr4

# How to build
Windows:

conan install . --build=missing
build\generators\conanbuild.bat
cmake -S . -B build -G "Visual Studio 15 2017" -DCMAKE_TOOLCHAIN_FILE=generators\conan_toolchain.cmake
cmake --build build --config Release
build\generators\deactivate_conanbuild.bat
