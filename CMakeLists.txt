cmake_minimum_required(VERSION 3.5)

project(CMakeWalk LANGUAGES CXX)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(${PROJECT_NAME} src/main.cpp src/letter.cpp)