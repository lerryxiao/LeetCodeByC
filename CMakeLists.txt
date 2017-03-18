cmake_minimum_required(VERSION 3.2.2)
project(LeetCodeByC)

set(CMAKE_CXX_STANDARD 11)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} )

include(${PROJECT_SOURCE_DIR}/src/206ReverseLinkedList/CMakeLists.txt)
include(${PROJECT_SOURCE_DIR}/src/35SearchInsertPosition/CMakeLists.txt)
include(${PROJECT_SOURCE_DIR}/src/118PascalsTriangle/CMakeLists.txt)
include(${PROJECT_SOURCE_DIR}/src/119PascalsTriangle2/CMakeLists.txt)
include(${PROJECT_SOURCE_DIR}/src/1TwoSum/CMakeLists.txt)
include(${PROJECT_SOURCE_DIR}/src/167TwoSumII/CMakeLists.txt)

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/main.c )

add_executable(LeetCodeByC ${SOURCE_FILES})
target_link_libraries(LeetCodeByC ${GTEST_BOTH_LIBRARIES})