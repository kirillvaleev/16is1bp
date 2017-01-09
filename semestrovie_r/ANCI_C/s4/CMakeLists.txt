cmake_minimum_required(VERSION 2.8.4)
project(s4)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(s4 ${SOURCE_FILES})
target_link_libraries(s4 m)