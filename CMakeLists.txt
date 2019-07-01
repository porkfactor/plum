cmake_minimum_required (VERSION 2.0.0)
project (plum)

add_library(plum INTERFACE)
target_include_directories(plum INTERFACE .)

add_subdirectory (test)
