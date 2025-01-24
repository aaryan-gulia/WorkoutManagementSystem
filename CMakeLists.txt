cmake_minimum_required(VERSION 3.30)
project(WorkoutManagementSystem)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

include_directories("src" "vendor" "vendor/boost_1_87_0")

add_subdirectory(src)
add_subdirectory(unit_tests)
