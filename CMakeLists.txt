cmake_minimum_required(VERSION 4.1)
project(base_clion)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp
        "carpeta parcial_dos/parcialdos.cpp")
add_executable (uno "carpeta parcial_dos/parcialdos.cpp")

