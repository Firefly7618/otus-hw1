cmake_minimum_required(VERSION 3.10)

project(otus-cpp)

enable_testing()

set(CPACK_INSTALL_CMAKE_PROJECTS  "hw1;helloworld_cli;ALL;/")

add_subdirectory(hw1)
