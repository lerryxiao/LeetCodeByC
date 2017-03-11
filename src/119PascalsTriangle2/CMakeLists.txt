cmake_minimum_required(VERSION 3.2.2)
project(LeetCodeByC)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} )

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/119PascalsTriangle2/pascalsTriangle2.h
        ${PROJECT_SOURCE_DIR}/src/119PascalsTriangle2/pascalsTriangle2.c
        ${PROJECT_SOURCE_DIR}/src/119PascalsTriangle2/TestPascalsTriangle2.cpp
        )

add_executable(119PascalsTriangle2    ${SOURCE_FILES})
target_link_libraries(119PascalsTriangle2 ${GTEST_BOTH_LIBRARIES})

