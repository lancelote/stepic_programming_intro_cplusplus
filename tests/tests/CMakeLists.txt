include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runTests
        module1/first_digit/test_first_digit.cpp
        module1/last_digit/test_last_digit.cpp
        module3/lcd/test_lcd.cpp)

target_link_libraries(runTests gtest gtest_main)
target_link_libraries(runTests src)