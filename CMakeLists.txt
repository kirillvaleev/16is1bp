cmake_minimum_required(VERSION 3.6)
project(labrab)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(labrab ${SOURCE_FILES})
target_link_libraries(labrab m)