cmake_minimum_required(VERSION 3.6)
project(Laba2C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(Laba2C ${SOURCE_FILES})
target_link_libraries(Laba2C m)