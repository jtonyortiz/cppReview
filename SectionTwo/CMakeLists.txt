cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(point VERSION 1.0)

include_directories(include)

add_executable(point apps/main.cpp)
add_executable(dive apps/mainDive.cpp include/dive.cpp include/dive.h)

