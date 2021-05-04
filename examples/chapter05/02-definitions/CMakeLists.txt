cmake_minimum_required(VERSION 3.20.0)
project(Definitions CXX)

# without definitions:
add_executable(undefined definitions.cpp)

# with definitions
set(VAR 8)
add_executable(defined definitions.cpp)
target_compile_definitions(defined PRIVATE ABC "DEF=${VAR}")
