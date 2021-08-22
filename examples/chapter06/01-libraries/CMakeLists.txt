cmake_minimum_required(VERSION 3.20.0)
project(Libraries CXX)

add_library(my_static STATIC function_a.cpp function_b.cpp)
add_library(my_shared SHARED function_a.cpp function_b.cpp)
add_library(my_module MODULE function_a.cpp function_b.cpp)
