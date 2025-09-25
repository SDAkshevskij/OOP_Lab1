cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_COMPILER "/usr/bin/g++-13")

project(Project LANGUAGES CXX)

add_library(solution solution.cpp)

add_executable(main main.cpp)
target_link_libraries(main solution)

set_target_properties(main PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON)

add_subdirectory(
    "${CMAKE_CURRENT_SOURCE_DIR}/googletest"
    "googletest"
)

add_executable(tests test.cpp)

target_link_libraries(tests solution gtest gtest_main)

enable_testing()
add_test(NAME SwapABTest COMMAND tests)