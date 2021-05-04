cmake_minimum_required(VERSION 3.20.0)
project(Defaults CXX)

add_executable(print_commit print_commit.cpp)
execute_process(COMMAND git log -1 --pretty=format:%h
                OUTPUT_VARIABLE SHA)

# above will work only if git is configured in this directory
# we'll set a dummy value if that's not the case
if(SHA STREQUAL "")
  set(SHA d670460b4b4aece5915caf5c68d12f560a9fe3e4)
endif()

target_compile_definitions(print_commit PRIVATE "SHA=${SHA}")
