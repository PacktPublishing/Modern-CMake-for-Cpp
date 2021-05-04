cmake_minimum_required(VERSION 3.20.0)
project(CarProject CXX)

add_library(cars OBJECT
    car.cpp
#   car_maintenance.cpp
)
target_include_directories(cars PUBLIC .)
