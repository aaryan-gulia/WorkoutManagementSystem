#include "Muscle.h"

MuscleGroup MuscleGroupFromString(const std::string& muscleGroupName){
    if (muscleGroupName == "legs"){
        return MuscleGroup::Legs;
    }
    else if (muscleGroupName == "back"){
        return MuscleGroup::Back;
    }
    else if (muscleGroupName == "chest"){
        return MuscleGroup::Chest;
    }
    else if (muscleGroupName == "arms"){
        return MuscleGroup::Arms;
    }
    else if (muscleGroupName == "core"){
        return MuscleGroup::Core;
    }
    else if (muscleGroupName == "deltoids"){
        return MuscleGroup::Deltoids;
    }
    else {
        return MuscleGroup::Other;
    }
}

