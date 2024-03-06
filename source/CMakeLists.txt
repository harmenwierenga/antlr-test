set(source_files my_lib.cpp
                 my_visitor.cpp
)

set(header_files ${CMAKE_SOURCE_DIR}/include/my_lib.hpp
                 ${CMAKE_SOURCE_DIR}/include/my_visitor.hpp
)

add_library(my_lib STATIC ${header_files} ${source_files})
target_include_directories(my_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(my_lib PRIVATE parser)
