add_subdirectory(lib3)
add_executable(app1 app1.cpp)
target_link_libraries(app1 PRIVATE lib1 lib2 lib3)
