cmake_minimum_required(VERSION 3.6)
project(parser)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    charcode.c
    charcode.h
    error.c
    error.h
    main.c
    parser.c
    parser.h
    reader.c
    reader.h
    scanner.c
    scanner.h
    token.c
    token.h)

add_executable(parser ${SOURCE_FILES})