cmake_minimum_required(VERSION 2.8.4)
project(UnnamedParamFunc)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Cstyle.c
                main.cpp
                Class.cpp
                Arr.cpp
                )
add_executable(UnnamedParamFunc ${SOURCE_FILES})