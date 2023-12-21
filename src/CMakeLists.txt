cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(talkdp)

set(CMAKE_CXX_STANDARD 20)

# add headers to the project
include_directories(include)


# or use file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(talkdp ${SOURCES})


