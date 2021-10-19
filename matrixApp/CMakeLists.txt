cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

project(matrixApp)
add_subdirectory(matrixLib)
add_subdirectory(src)

#add_executable(matrixApp src/main.cpp)
#
#include_directories(matrixLib)

