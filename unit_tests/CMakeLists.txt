project(UnitTests)

add_executable(MuscleTest muscle_test.cpp)
add_test(RunMuscleTest MuscleTest)

add_executable(ExerciseTest exercise_test.cpp)
add_test(RunExerciseTest ExerciseTest)

target_link_libraries(ExerciseTest WorkoutManagementSystem)