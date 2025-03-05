cmake_minimum_required(VERSION 3.30)
project(banking)

set(CMAKE_CXX_STANDARD 20)

add_executable(banking main.cpp
        user.h
        user.cpp
        bank.cpp
        bank.h)
