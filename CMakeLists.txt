cmake_minimum_required(VERSION 3.5)
project(stepic_programming_intro_cplusplus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/module2/boxes/boxes.cpp)
add_executable(stepic_programming_intro_cplusplus ${SOURCE_FILES})
