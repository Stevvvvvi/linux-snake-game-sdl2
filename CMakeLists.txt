cmake_minimum_required(VERSION 3.20.0)

project(snakegame)


find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
include_directories(includes)

add_compile_options(-Wall)

add_executable(snakegame main.cpp object/Sprite.cpp object/Snake.cpp)
target_link_libraries(snakegame ${SDL2_LIBRARIES})