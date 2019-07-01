## CMake 101
A set of well-documented, fundamental CMake example projects. They can either be used for learning purposes or as templates (or both!).

### Table of Contents
* [Hello World](https://github.com/achalpandeyy/CMake101/tree/master/Hello-World) - First step into the world of CMake.
* [Multiple Directories](https://github.com/achalpandeyy/CMake101/tree/master/Multiple-Directories) - For projects split across multiple directories.
* [Building Library](https://github.com/achalpandeyy/CMake101/tree/master/Building-Library) - For projects which are not applications themselves but serves as (static/shared) libraries for other applications.
* [Using Library](https://github.com/achalpandeyy/CMake101/tree/master/Using-Library) - For projects which aim to use (static/shared) libraries.

### How to Build
Go to the root directory of any project (the directory containing top-level `CMakeLists.txt` file) and run the following commands (assuming you already have CMake installed) -
```
mkdir build
cd build
cmake ..
make -jN
```
where `N` is the number of cores.

### Running or Installing
Depending on the project, you can **run** the project by -
```
./<nameOfExecutable>
```
or you can **install** the project by -
```
sudo make install
```

More details [here](http://derekmolloy.ie/hello-world-introductions-to-cmake/) and [here](https://cmake.org/cmake/help/v3.14/).