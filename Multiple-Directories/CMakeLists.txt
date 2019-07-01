cmake_minimum_required (VERSION 3.14.5)
project (Multiple-Directories)

# Bring the headers (present in `include`), into the project.
include_directories (include)

# Can manually add source files like this.
# set (SOURCES src/main.cpp src/student.cpp)
#
# But `file (GLOB ...)` allows for wildcard additions.
file (GLOB SOURCES "src/*.cpp")

# Make an executable out of the source files in `src`.
add_executable (testStudent ${SOURCES})