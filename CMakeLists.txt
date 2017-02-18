cmake_minimum_required(VERSION 3.6)
project(leetCodeC)

set(CMAKE_CXX_STANDARD 11)

include(src/206ReverseLinkedList/CMakeList.txt)

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/main.c )

add_executable(leetCodeC ${SOURCE_FILES})