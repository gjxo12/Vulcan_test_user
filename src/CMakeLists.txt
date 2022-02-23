cmake_minimum_required(VERSION 3.15)
project(ROOT.main
  VERSION 1.0
  DESCRIPTION "MAIN"
)
message(STATUS "Building: ${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.c)
message(STATUS ${PROJECT_NAME})