cmake_minimum_required(VERSION 2.8)

project(cmake_project)

set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(libA)
add_subdirectory(libB)
add_subdirectory(libC)
add_subdirectory(hello)
