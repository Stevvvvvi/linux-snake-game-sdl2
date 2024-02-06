cmake_minimum_required(VERSION 3.20.0)

project(snake)


find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(includes)

add_executable(snake main.cpp object/Sprite.cpp)
target_link_libraries(snake ${SDL2_LIBRARIES})