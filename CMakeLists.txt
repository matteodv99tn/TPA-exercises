cmake_minimum_required(VERSION 3.10)
project(structure)
set(CMAKE_CXX_STANDARD 17)

# Circolar Queue
add_executable(circolarQueue main.cpp)
target_include_directories(circolarQueue PRIVATE CircolarQueue)
# Class A is not a library: its source file needs to be included in the target sources
target_sources(circolarQueue PRIVATE CircolarQueue/circolar_queue.cpp)
target_link_libraries(circolarQueue)