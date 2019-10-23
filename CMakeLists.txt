cmake_minimum_required(VERSION 3.7)
project(screw-engine)

find_package(SDL2 REQUIRED)
include_directories(screw-engine ${SDL2_INCLUDE_DIRS})

add_executable(screw-engine src/main.cpp)
target_link_libraries(screw-engine ${SDL2_LIBRARIES})