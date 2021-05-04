cmake_minimum_required(VERSION 3.20.0)
project(Command CXX)

add_executable(main main.cpp constants.h)
target_include_directories(main PRIVATE ${CMAKE_BINARY_DIR})
add_custom_command(OUTPUT constants.h COMMAND cp ARGS "${CMAKE_SOURCE_DIR}/template.xyz" constants.h)
