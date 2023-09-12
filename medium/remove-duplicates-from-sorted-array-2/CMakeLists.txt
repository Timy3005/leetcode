cmake_minimum_required(VERSION 2.22)

# Set the build type to Debug (this enables debug information)
set(CMAKE_BUILD_TYPE Debug)

# For C projects
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")
  
project(remove-dups-2)

add_executable(main main.c)