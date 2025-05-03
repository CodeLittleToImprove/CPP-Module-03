cmake_minimum_required(VERSION 3.30)
project(cpp03)

set(CMAKE_CXX_STANDARD 98)


add_executable(cpp03_ex00
        ex00/ClapTrap.cpp
        ex00/main.cpp)

add_executable(cpp03_ex001
        ex01/ClapTrap.cpp
        ex01/ScavTrap.cpp
        ex01/main.cpp)
