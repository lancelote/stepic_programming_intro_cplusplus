cmake_minimum_required(VERSION 3.5)
project(StepicCPlusPlus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(lcd src/module3/lcd/main.cpp)
add_executable(squaredInts src/module3/squared_ints/squared_ints.cpp)
add_executable(powerOfTwo src/module3/power_of_two/power_of_two.cpp)
add_executable(ifPowerOfTwo src/module3/if_power_of_two/if_power_of_two.cpp)
add_executable(countNumbers src/module3/count_numbers/count_numbers.cpp)
add_executable(numberSum src/module3/number_sum/number_sum.cpp)
add_executable(maxNumber src/module3/max_number/max_number.cpp)
add_executable(equalToMax src/module3/equal_to_max/equal_to_max.cpp)
add_executable(secondMax src/module3/second_max/second_max.cpp)
add_executable(fibonacci src/module3/fibonacci/fibonacci.cpp)
add_executable(foundFibonacci src/module3/found_fibonacci/found_fibonacci.cpp)
add_executable(equalSequence src/module3/equal_sequence/equal_sequence.cpp)
add_executable(localMax src/module3/local_max/local_max.cpp)
add_executable(localMaxDistance src/module3/local_min_distance/local_min_distance.cpp)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(lcd src)