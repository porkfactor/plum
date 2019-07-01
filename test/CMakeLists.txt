add_library(gtest STATIC IMPORTED)

set_target_properties(gtest PROPERTIES IMPORTED_LOCATION /usr/local/lib/libgtest.a)
target_include_directories(gtest INTERFACE /usr/local/include)

add_executable(
    unittest
    unittest.cpp
    point.cpp
)

target_include_directories(unittest INTERFACE gtest)
target_link_libraries(unittest plum gtest)
