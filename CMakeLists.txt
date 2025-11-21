cmake_minimum_required(VERSION 3.10)
project(tree.h)

# Set C standard
set(CMAKE_C_STANDARD 99)

# Include directories
include_directories(src)

# Example executable
add_executable(example examples/example.c)
