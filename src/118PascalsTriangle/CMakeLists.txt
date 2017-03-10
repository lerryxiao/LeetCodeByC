cmake_minimum_required(VERSION 3.2.2)
project(leetCodeC)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} )

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/118PascalsTriangle/pascalsTriangle.h
                  ${PROJECT_SOURCE_DIR}/src/118PascalsTriangle/pascalsTriangle.c
                  ${PROJECT_SOURCE_DIR}/src/118PascalsTriangle/TestPascalsTriangle.cpp
        )

add_executable(PascalsTriangle ${SOURCE_FILES})
target_link_libraries(PascalsTriangle ${GTEST_BOTH_LIBRARIES})

