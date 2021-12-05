cmake_minimum_required(VERSION 3.20.0)
project(InstallCode CXX)
add_subdirectory(src bin)

include(GNUInstallDirs)
install(TARGETS calc LIBRARY
        PUBLIC_HEADER
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/calc
       )

if (UNIX)
  install(CODE "execute_process(COMMAND ldconfig)")
endif()
