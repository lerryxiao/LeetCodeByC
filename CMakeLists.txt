cmake_minimum_required(VERSION 3.2.2)
project(leetCodeC)

set(CMAKE_CXX_STANDARD 11)

include(src/206ReverseLinkedList/CMakeLists.txt)
include(src/35SearchInsertPosition/CMakeLists.txt)
include(src/118PascalsTriangle/CMakeLists.txt)

set(SOURCE_FILES  ${PROJECT_SOURCE_DIR}/src/main.c )

add_executable(leetCodeC ${SOURCE_FILES})