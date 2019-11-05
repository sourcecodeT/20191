cmake_minimum_required(VERSION 3.6)
project(compiler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    charcode.c
    charcode.h
    error.c
    error.h
    reader.c
    reader.h
    scanner.c
    token.c
    token.h)

add_executable(compiler ${SOURCE_FILES})