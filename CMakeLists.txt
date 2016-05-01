cmake_minimum_required(VERSION 3.5)
project(Password_v1_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Hash.h Hash.cpp Input.cpp Input.h)
add_executable(Password_v1_2 ${SOURCE_FILES})
