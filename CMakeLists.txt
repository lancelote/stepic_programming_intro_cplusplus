cmake_minimum_required(VERSION 3.5)
project(StepicCPlusPlus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(stepiccplusplus_run ${SOURCE_FILES})

include_directories(stepic)

add_subdirectory(stepic)
add_subdirectory(stepic_tests)

target_link_libraries(stepiccplusplus_run stepic)