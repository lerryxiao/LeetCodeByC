cmake_minimum_required(VERSION 3.2.2)
project(leetCodeC)

set(CMAKE_CXX_STANDARD 11)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} )

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/206ReverseLinkedList/reverseLinkedList.c
                  ${PROJECT_SOURCE_DIR}/src/206ReverseLinkedList/reverseLinkedList.h
                  ${PROJECT_SOURCE_DIR}/src/common/ListNode.h
                  ${PROJECT_SOURCE_DIR}/src/common/ListNode.c
                  ${PROJECT_SOURCE_DIR}/src/206ReverseLinkedList/TestReverseLinkedList.cpp)

add_executable(ReverseLinkedList ${SOURCE_FILES})
target_link_libraries(ReverseLinkedList ${GTEST_BOTH_LIBRARIES})

