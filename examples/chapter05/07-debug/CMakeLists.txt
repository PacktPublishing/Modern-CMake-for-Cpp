cmake_minimum_required(VERSION 3.20.0)
project(Debug CXX)

add_executable(debug main.cpp)
target_compile_options(debug PRIVATE -save-temps=obj)

add_executable(inclusion main.cpp)
target_compile_options(inclusion PRIVATE -H)
