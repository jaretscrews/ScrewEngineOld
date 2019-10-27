cmake_minimum_required(VERSION 3.7)
project(ScrewEngine)

find_package(SDL2 REQUIRED)
include_directories(ScrewEngine ${SDL2_INCLUDE_DIRS} include/)

SET (CMAKE_CXX_COMPILER "/usr/bin/clang++")

set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Wextra -Werror -Wpedantic -pedantic-errors -g")

set(SOURCE_FILES
    src/ScrewEngine.cpp
    src/ScrewDisplay.cpp
    src/ScrewRenderer.cpp
    src/ScrewInput.cpp
    src/ScrewClock.cpp
)

add_executable(ScrewEngine ${SOURCE_FILES})
target_link_libraries(ScrewEngine ${SDL2_LIBRARIES})