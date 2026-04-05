cmake_minimum_required(VERSION 4.1)
project(base_clion)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp
        uno.cpp)
add_executable (uno uno.cpp)

