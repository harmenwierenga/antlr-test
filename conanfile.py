from conan import ConanFile
from conan.tools.cmake import cmake_layout

class AntlrTestRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"

    def requirements(self):
        self.requires("antlr4-cppruntime/4.13.1")

    def build_requirements(self):
        self.tool_requires("cmake/3.28.1")
        self.test_requires("gtest/1.14.0")

    def layout(self):
        cmake_layout(self)
