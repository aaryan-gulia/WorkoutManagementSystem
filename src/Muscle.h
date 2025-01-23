#pragma once

#include "string"
#include "vector"
#include "fstream"

enum class MuscleGroup{
  Legs,
  Back,
  Chest,
  Arms,
  Core,
  Deltoids,
  Other,
};

MuscleGroup MuscleGroupFromString(const std::string& muscleGroupName){
  if (muscleGroupName == "Legs"){
    return MuscleGroup::Legs;
  }
  else if (muscleGroupName == "Back"){
    return MuscleGroup::Back;
  }
  else if (muscleGroupName == "Chest"){
    return MuscleGroup::Chest;
  }
  else if (muscleGroupName == "Arms"){
    return MuscleGroup::Arms;
  }
  else if (muscleGroupName == "Core"){
    return MuscleGroup::Core;
  }
  else if (muscleGroupName == "Deltoids"){
    return MuscleGroup::Deltoids;
  }
  else {
    return MuscleGroup::Other;
  }
}

struct Muscle{

  std::string name;
  MuscleGroup muscleGroup;

};

class MuscleCatalogue{
  public:
    MuscleCatalogue();
    ~MuscleCatalogue();
    void loadMuscleCatalogue(std::string fileName){
      std::ifstream file(fileName);
      if (file.is_open()){
        std::string line;
        while (std::getline(file, line)){
          muscles.emplace_back(
              line.substr(0, line.find(' ')),
              MuscleGroupFromString(line.substr(line.find(' ') + 1))
              );
        }
      }
    }

  private:
    std::vector<Muscle> muscles;
};
