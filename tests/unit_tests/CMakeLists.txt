include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runTests
        chess_knight/test_chess_knight.cpp)

target_link_libraries(runTest gtest gtest_main)
target_link_libraries(runTest src)