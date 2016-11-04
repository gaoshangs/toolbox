cmake_minimum_required(VERSION 3.5)
project(pointer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    string/diff.c)

add_executable(pointer ${SOURCE_FILES})