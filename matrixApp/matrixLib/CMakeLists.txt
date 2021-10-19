cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)

#headers
include_directories(include)

#compilables
add_library(matrixLib STATIC src/matrixLib.cpp)