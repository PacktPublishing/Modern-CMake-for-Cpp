cmake_minimum_required(VERSION 3.20.0)

set(MY_LIST 1 2 3)
foreach(VAR IN LISTS MY_LIST ITEMS e f)
  message(${VAR})
endforeach()

message("Short version: ")
foreach(VAR 1 2 3 e f)
  message(${VAR})
endforeach()
