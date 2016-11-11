cmake_minimum_required(VERSION 3.6)
project(Laba1C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(Laba1C ${SOURCE_FILES})
target_link_libraries(Laba1C m)