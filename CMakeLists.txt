cmake_minimum_required(VERSION 3.29)
project(2048)

set(CMAKE_CXX_STANDARD 20)

add_executable(2048 main.cpp
        cellule.cpp
        cellule.h
        Board.cpp
        Board.h)
