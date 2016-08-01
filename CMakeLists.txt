cmake_minimum_required(VERSION 3.5)
project(StepicCPlusPlus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(fractionPart src/module4/fraction_part/fraction_part.cpp)
add_executable(firstFractionDigit src/module4/first_fraction_digit/first_fraction_digit.cpp)
add_executable(triangleSquate src/module4/triangle_square/triangle_square.cpp)
add_executable(complexPercent src/module4/complex_percent/complex_percent.cpp)
add_executable(complexPercent2 src/module4/complex_percent_2/complex_percent_2.cpp)
add_executable(average src/module4/average/average.cpp)
add_executable(standardDeviation src/module4/standard_deviation/standard_deviation.cpp)
add_executable(polynome src/module4/polynome/polynome.cpp)
add_executable(quadraticEquation src/module4/quadratic_equation/quadratic_equation.cpp)
add_executable(quadraticEquation2 src/module4/quadratic_equation_2/quadratic_equation_2.cpp)
add_executable(equationSet src/module4/equationSet/equation_set.cpp)
add_executable(equationSet2 src/module4/equation_set_2/equation_set_2.cpp)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tests)
