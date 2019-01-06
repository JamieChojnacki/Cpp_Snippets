cmake_minimum_required(VERSION 3.12)
project(VirtualClass)

set(CMAKE_CXX_STANDARD 17)

add_executable(VirtualClass
        main.cpp VirtualAccount.cpp VirtualAccount.h)
