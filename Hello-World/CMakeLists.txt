# Set the minimum CMake version required to 3.14.5 or major version 3,
# minor version 14 and patch version 5.
cmake_minimum_required (VERSION 3.14.5)

# Set the project name.
project (Hello-World)

# Request to make an executable with the name `hello` from
# `main.cpp` source file.
add_executable (hello main.cpp)