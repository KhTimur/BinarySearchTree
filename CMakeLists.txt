cmake_minimum_required(VERSION 3.3)
project(BinarySearchTree)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ../examples/main.cpp ../Sourses/BinarySearchTree.cpp ../include/BinarySearchTree.h)
add_executable(BinarySearchTree ${SOURCE_FILES})
