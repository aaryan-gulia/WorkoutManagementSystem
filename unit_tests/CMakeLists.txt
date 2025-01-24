project(UnitTests)

add_executable(MuscleTest muscle_test.cpp)
add_test(RunMuscleTest MuscleTest)

add_executable(ExerciseTest exercise.cpp)
add_test(RunExerciseTest ExerciseTest)