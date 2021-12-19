cmake_minimum_required(VERSION 3.20.0)
project(FindCalcPackage CXX)

find_package(Calc REQUIRED)

include(CMakePrintHelpers)
message("CMAKE_PREFIX_PATH: ${CMAKE_PREFIX_PATH}")
message("CALC_FOUND: ${Calc_FOUND}")
cmake_print_properties(TARGETS "Calc::calc_shared" PROPERTIES
  IMPORTED_CONFIGURATIONS
  INCLUDE_DIRECTORIES
  INTERFACE_INCLUDE_DIRECTORIES
)

add_executable(test main.cpp)
target_link_libraries(test Calc::calc_shared)
