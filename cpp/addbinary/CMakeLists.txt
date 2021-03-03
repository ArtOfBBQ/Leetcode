cmake_minimum_required(VERSION 3.1)

project(test-leetcode)

include_directories(../cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    tests
    ../catch.hpp
    test-addbinary.cpp
    addbinary.cpp)

