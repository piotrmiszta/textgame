cmake_minimum_required(VERSION 3.2)
set(PROJ_NAME Game)
project(${PROJ_NAME})
set(CMAKE_CXX_STANDARD 20)
add_subdirectory(src)

add_executable(${PROJ_NAME} src/main.cpp)
target_link_libraries(${PROJ_NAME} PUBLIC "gamelib")
