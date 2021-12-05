cmake_minimum_required(VERSION 3.20.0)
project(InstallFiles CXX)

include(GNUInstallDirs)
install(FILES
              src/include/calc/calc.h
              src/include/calc/nested/calc_extended.h
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/calc
)
