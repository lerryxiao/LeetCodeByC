cmake_minimum_required(VERSION 3.2.2)
project(LeetCodeByC)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} )

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/35SearchInsertPosition/searchInsertPosition.h
                  ${PROJECT_SOURCE_DIR}/src/35SearchInsertPosition/searchInsertPosition.c
                  ${PROJECT_SOURCE_DIR}/src/35SearchInsertPosition/TestSearchInsertPosition.cpp)

add_executable(SearchInsertPosition ${SOURCE_FILES})
target_link_libraries(SearchInsertPosition ${GTEST_BOTH_LIBRARIES})

