add_library(solution STATIC calc.cpp run.cpp rng_mt19937.cpp)
target_include_directories(solution PUBLIC .)

add_executable(bootstrap bootstrap.cpp)
target_link_libraries(bootstrap PRIVATE solution)
