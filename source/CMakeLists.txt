set(source_files my_lib.cpp)
set(header_files ${CMAKE_SOURCE_DIR}/include/my_lib.hpp)

add_library(my_lib STATIC ${header_files} ${source_files})
target_include_directories(my_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)
