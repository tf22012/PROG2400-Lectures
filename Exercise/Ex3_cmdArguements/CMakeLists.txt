cmake_minimum_required(VERSION 3.28)
project(Ex3_cmdArguements)

set(CMAKE_CXX_STANDARD 23)

add_executable(Ex3_cmdArguements main.cpp
        command_line.h
        command_line.cpp)
