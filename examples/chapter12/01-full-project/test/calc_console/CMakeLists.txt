add_executable(calc_console_test tui_test.cpp)
target_link_libraries(calc_console_test
                      PRIVATE calc_console_static)
AddTests(calc_console_test)
EnableCoverage(calc_console_static)
