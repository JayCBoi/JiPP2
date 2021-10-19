cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD  17)

#directories
include_directories(../matrixLib/include)

#executable
add_executable(matrixApp main.cpp)

#libraries
target_link_libraries(matrixApp matrixLib)