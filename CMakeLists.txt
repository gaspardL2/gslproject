cmake_minimum_required(VERSION 3.21)
project(gslproject C)

set(CMAKE_C_STANDARD 99)
find_package(GSL REQUIRED)
include_directories(${GSL_INCLUDE_DIRECTORIES})

add_executable(gslproject main.c)
target_link_libraries(gslproject ${GSL_LIBRARIES})
