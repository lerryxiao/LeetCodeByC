cmake_minimum_required(VERSION 3.2.2)
project(LeetCodeByC)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} )

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/167TwoSumII/TwoSumII.c
        ${PROJECT_SOURCE_DIR}/src/167TwoSumII/TwoSumII.h
        ${PROJECT_SOURCE_DIR}/src/167TwoSumII/TwoSumIITestSuite.cpp
        ${PROJECT_SOURCE_DIR}/src/167TwoSumII/TwoSumIITestSuite.h
        )

add_executable(167TwoSumII    ${SOURCE_FILES})
target_link_libraries(167TwoSumII ${GTEST_BOTH_LIBRARIES})