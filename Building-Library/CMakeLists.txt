cmake_minimum_required (VERSION 3.14.5)
project (Building-Library)
set (CMAKE_BUILD_TYPE Release)

include_directories (include)

file (GLOB SOURCES "src/*.cpp")

# Generate a static library `staticTestStudent` from `SOURCES`.
add_library (staticTestStudent STATIC ${SOURCES})

# Generate a shared library `sharedTestStudent` from `SOURCES`.
add_library (sharedTestStudent SHARED ${SOURCES})

# Set the location for library installation (`/usr/local/lib` in this case).
# `sudo make install` command will be required to install the library.
install (TARGETS staticTestStudent DESTINATION /usr/local/lib)
install (TARGETS sharedTestStudent DESTINATION /usr/local/lib)
