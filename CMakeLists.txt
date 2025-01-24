cmake_minimum_required(VERSION 3.30)
project(WorkoutManagementSystem)

set(CMAKE_CXX_STANDARD 23)

enable_testing()

include_directories("src" "vendor")

add_subdirectory(src)
add_subdirectory(unit_tests)
