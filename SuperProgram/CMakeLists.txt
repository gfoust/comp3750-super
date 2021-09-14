# CMakeList.txt : CMake project for SuperProgram, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set (CMAKE_CXX_STANDARD 11)

# Add source to this project's executable.
add_executable (SuperProgram "main.cpp" "math.hpp" "math.cpp" "io.cpp" "io.hpp")

# TODO: Add tests and install targets if needed.
