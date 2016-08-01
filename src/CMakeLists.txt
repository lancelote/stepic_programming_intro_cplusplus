project(src)

set(HEADER_FILES
        module1/first_digit/first_digit.h
        module1/last_digit/last_digit.h
        module3/lcd/lcd.h
        )

set(SOURCE_FILES
        module1/first_digit/first_digit.cpp
        module1/last_digit/last_digit.cpp
        module3/squared_ints/squared_ints.cpp
        module3/lcd/lcd.cpp module3/lcd/main.cpp
        module3/power_of_two/power_of_two.cpp
        module3/if_power_of_two/if_power_of_two.cpp
        module3/count_numbers/count_numbers.cpp
        module3/number_sum/number_sum.cpp
        module3/max_number/max_number.cpp
        module3/equal_to_max/equal_to_max.cpp
        module3/second_max/second_max.cpp
        module3/fibonacci/fibonacci.cpp
        module3/found_fibonacci/found_fibonacci.cpp
        module3/equal_sequence/equal_sequence.cpp
        module3/local_max/local_max.cpp
        module3/local_min_distance/local_min_distance.cpp
        module4/fraction_part/fraction_part.cpp
        module4/first_fraction_digit/first_fraction_digit.cpp
        module4/triangle_square/triangle_square.cpp
        module4/complex_percent/complex_percent.cpp
        module4/complex_percent_2/complex_percent_2.cpp
        module4/average/average.cpp
        module4/standard_deviation/standard_deviation.cpp
        module4/polynome/polynome.cpp
        module4/quadratic_equation/quadratic_equation.cpp
        module4/quadratic_equation_2/quadratic_equation_2.cpp
        module4/equationSet/equation_set.cpp
        module4/equation_set_2/equation_set_2.cpp)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})