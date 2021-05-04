cmake_minimum_required(VERSION 3.20.0)
project(Command CXX)

add_executable(main main.cpp)
add_custom_command(TARGET main POST_BUILD
                   COMMAND cksum ARGS "$<TARGET_FILE:main>" > "main.ck")
