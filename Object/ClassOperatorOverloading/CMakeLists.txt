cmake_minimum_required(VERSION 3.12)
project(ClassOperatorOverloading)

set(CMAKE_CXX_STANDARD 14)

add_executable(ClassOperatorOverloading main.cpp MyTime.cpp MyTime.h MyTimeOp.cpp MyTimeOp.h)