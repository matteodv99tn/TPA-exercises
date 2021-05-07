cmake_minimum_required(VERSION 3.10)
project(structure)
set(CMAKE_CXX_STANDARD 17)

# Circolar Queue
add_executable(OOPGeometry main.cpp)
target_include_directories(OOPGeometry PRIVATE CircolarQueue)
# Class A is not a library: its source file needs to be included in the target sources
target_sources(OOPGeometry PRIVATE geometry.cpp)
target_link_libraries(OOPGeometry)