add_library(calc STATIC calc.cpp)
target_include_directories(calc INTERFACE
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>" 
)
set_target_properties(calc PROPERTIES
    PUBLIC_HEADER src/include/calc/calc.h
)
