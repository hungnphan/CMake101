cmake_minimum_required (VERSION 3.14.5)
project (Using-Library)

# For shared library `libsharedTestStudent.dylib`.
set (PROJECT_LINK_LIBS libsharedTestStudent.dylib)
link_directories (libs/sharedLibs/)

# For static library `libstaticTestStudent.a`
# set (PROJECT_LINK_LIBS libstaticTestStudent.a)
# link_directories (libs/staticLibs/)

# Include header file of the library.
include_directories (libs/include)

add_executable (libTest src/main.cpp)

# Link library to the target `libTest`.
target_link_libraries (libTest ${PROJECT_LINK_LIBS})