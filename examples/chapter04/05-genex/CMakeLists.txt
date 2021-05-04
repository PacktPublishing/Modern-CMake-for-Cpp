# after building this file - read files generated in the build tree

cmake_minimum_required(VERSION 3.20.0)
project(Genex CXX)

set(myvar "small text")
set(myvar2 "small text >")

file(GENERATE OUTPUT nesting CONTENT
  "1 $<PLATFORM_ID>
  2 $<UPPER_CASE:$<PLATFORM_ID>>
  3 $<UPPER_CASE:hello world>
  4 $<UPPER_CASE:${myvar}>
  5 $<UPPER_CASE:${myvar2}>
")

file(GENERATE OUTPUT boolean CONTENT
  "1 $<0:TRUE>
  2 $<0:TRUE,FALSE> (won't work)
  3 $<1:TRUE,FALSE>
  4 $<IF:0,TRUE,FALSE>
  5 $<IF:0,TRUE,>
")
