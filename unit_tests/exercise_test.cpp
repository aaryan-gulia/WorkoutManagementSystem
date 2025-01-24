#include <cassert>

#include "Exercise.h"

int main() {
    Exercise exercise("Bench Press",
        "Load the barble with weights, lie down on the flat bench, and press the barberl",
        {Muscle("Pecks",MuscleGroup::Chest)},
        {Muscle("Front Delts", MuscleGroup::Deltoids),Muscle("Triceps",MuscleGroup::Arms)});

    assert(exercise.getName() == "Bench Press");
    assert(exercise.getPrimaryMuscles().size() == 1);
    assert(exercise.getSecondaryMuscles().size() == 2);

    exercise.setDescription("Bench Press");
    assert(exercise.getDescription() == "Bench Press");

    exercise.setSecondaryMuscles({Muscle("Front Delts", MuscleGroup::Deltoids),Muscle("Triceps",MuscleGroup::Arms), Muscle("Side Delts", MuscleGroup::Deltoids)});
    assert(exercise.getSecondaryMuscles().size() == 3);
}