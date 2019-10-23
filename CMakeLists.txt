cmake_minimum_required(VERSION 3.7)
project(screw-engine)

find_package(SDL2 REQUIRED)
include_directories(screw-engine ${SDL2_INCLUDE_DIRS} include/)

set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Wextra -Werror -Wpedantic -pedantic-errors")

set(SOURCE_FILES
    src/main.cpp
    src/ScrewDisplay.cpp
)

add_executable(screw-engine ${SOURCE_FILES})
target_link_libraries(screw-engine ${SDL2_LIBRARIES})