project(UnitTests)

add_executable(MuscleTest muscle_test.cpp)
add_test(RunMuscleTest MuscleTest)

include_directories("../src")