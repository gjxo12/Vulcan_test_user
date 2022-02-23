cmake_minimum_required(VERSION 3.15)
project(ROOT
  VERSION 1.0
  DESCRIPTION "Vulcan"
)
message(STATUS "Building: ${PROJECT_NAME}")
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(src)


enable_testing()
add_subdirectory(test)

