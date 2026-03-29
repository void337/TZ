cmake_minimum_required(VERSION 3.5)
project(degree_converter VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory(lib)
add_executable(degree_converter main.cpp)

target_link_libraries(degree_converter degree_converter_lib)
