cmake_minimum_required(VERSION 3.2.2)
project(LeetCodeByC)

set(CMAKE_CXX_STANDARD 11)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} )

include(src/206ReverseLinkedList/CMakeLists.txt)
include(src/35SearchInsertPosition/CMakeLists.txt)
include(src/118PascalsTriangle/CMakeLists.txt)
include(src/119PascalsTriangle2/CMakeLists.txt)
include(src/1TwoSum/CMakeLists.txt)

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/main.c )

add_executable(LeetCodeByC ${SOURCE_FILES})
target_link_libraries(LeetCodeByC ${GTEST_BOTH_LIBRARIES})