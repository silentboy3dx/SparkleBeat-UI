cmake_minimum_required(VERSION 3.28)
project(sparkle_ui)

set(CMAKE_CXX_STANDARD 17)

# Set the path to pybind11
set(pybind11_DIR //home/johnny/miniconda3/lib/python3.12/site-packages/pybind11/share/cmake/pybind11)

find_package(pybind11 REQUIRED)

include_directories(include)

#add_subdirectory(build)

pybind11_add_module(sparkle_ui
        src/main.cpp
        src/Interactions.cpp
)