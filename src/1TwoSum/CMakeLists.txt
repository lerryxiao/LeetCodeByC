cmake_minimum_required(VERSION 3.2.2)
project(LeetCodeByC)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} )

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/1TwoSum/twoSum.h
        ${PROJECT_SOURCE_DIR}/src/1TwoSum/twoSum.c
        ${PROJECT_SOURCE_DIR}/src/1TwoSum/TestTowSum.cpp)

add_executable(1TowSum ${SOURCE_FILES})
target_link_libraries(1TowSum ${GTEST_BOTH_LIBRARIES})