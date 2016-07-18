project(stepic)

set(HEADER_FILES
        module1/first_digit/first_digit.h
        )

set(SOURCE_FILES
        module1/first_digit/first_digit.cpp
        )

add_library(stepic STATIC ${SOURCE_FILES} ${HEADER_FILES})