cmake_minimum_required(VERSION 3.20.0)

if (1 LESS 2)
  message("Correct.")
endif()

if ("2 Z 0" LESS 2)
  message("Incorrect 1")
endif()

if (1 LESS "20 Z 20")
  message("Incorrect 2")
endif()

if (20 EQUAL "30 Z 20")
  message("Incorrect 3")
endif()
