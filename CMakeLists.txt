cmake_minimum_required(VERSION 3.28)
project(test_inventario)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_inventario main.cpp
        inventory.cpp
        inventory.h
        History.cpp
        History.h)
