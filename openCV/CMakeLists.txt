cmake_minimum_required(VERSION 3.12)
project(opencv)

set(CMAKE_CXX_STANDARD 17)

add_executable(opencv main.cpp)
find_package( OpenCV REQUIRED )
target_link_libraries( opencv ${OpenCV_LIBS} )