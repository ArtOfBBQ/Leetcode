cmake_minimum_required(VERSION 3.1)

project(test-leetcode)

include_directories(../cpp)

set(CMAKE_CXX_STANDARD 17)
## set(CMAKE_BUILD_TYPE Debug) ## this is supposed to allow gdb debugging
## set(CMAKE_BUILD_TYPE RelWithDebInfo) ## also supposed to allow gdb

add_executable(tests ../catch.hpp test-longestpalindromicss.cpp longestpalindromicss.cpp)

