cmake_minimum_required(VERSION 3.5)
project(stepic_programming_intro_cplusplus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/module2/chess_knight/chess_knight.cpp)
add_executable(stepic_programming_intro_cplusplus ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(src_run src)