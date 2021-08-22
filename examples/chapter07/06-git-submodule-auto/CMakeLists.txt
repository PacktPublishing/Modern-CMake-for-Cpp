cmake_minimum_required(VERSION 3.20.0)
project(GitSubmoduleAuto CXX)

add_executable(welcome main.cpp)
configure_file(config.yaml config.yaml COPYONLY)

find_package(yaml-cpp QUIET)

if (NOT TARGET yaml-cpp)
  message("yaml-cpp not found, initializing submodule")
  execute_process(
    COMMAND git submodule update --init -- external/yaml-cpp
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
  )
  add_subdirectory(extern/yaml-cpp)
endif()
target_link_libraries(welcome PRIVATE yaml-cpp)
