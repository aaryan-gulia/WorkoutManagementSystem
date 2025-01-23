#include <cassert>

#include"Muscle.h"
#include<vector>

using namespace std;

int main() {
    MuscleCatalogue muscle_catalogue("../../unit_tests/muscle_test_data.txt");

    const std::vector<Muscle> muscles = muscle_catalogue.getMuscles();

    assert(!muscles.empty());
    assert(muscles.size() == 4);

    assert(muscles[0].name == "quadriceps");
    assert(muscles[0].muscleGroup == MuscleGroup::Legs);
}