cmake_minimum_required(VERSION 3.20.0)
project(Precompile CXX)

add_executable(precompiled hello.cpp)
target_precompile_headers(precompiled PRIVATE <iostream>)
