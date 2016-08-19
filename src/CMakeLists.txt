project(src)

set(HEADER_FILES
        module1/first_digit/first_digit.h
        module1/last_digit/last_digit.h
        module3/lcd/lcd.h
        )

set(SOURCE_FILES
        module5/even_indexes/even_indexes.cpp
        module5/even_elements/even_elements.cpp
        module5/positive_elements/positive_elements.cpp
        module5/greater_prev/greater_prev.cpp
        module5/same_sign/same_sign.cpp
        module5/least_positive/least_positive.cpp
        module5/least_odd/least_odd.cpp
        module5/unique_elements/unique_elements.cpp
        module5/replace/replace.cpp
        module5/shift/shift.cpp
        module5/count_pairs/count_pairs.cpp
        module5/single_element/single_element.cpp
        module5/queens/queens.cpp
        module5/skittles/skittles.cpp)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})