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

inline MuscleGroup MuscleGroupFromString(const std::string& muscleGroupName){
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

struct Muscle{

  Muscle(const std::string& name, MuscleGroup muscleGroup):name(name), muscleGroup(muscleGroup){}

  std::string name;
  MuscleGroup muscleGroup;

};

class MuscleCatalogue{
  public:
  explicit MuscleCatalogue(const std::string& fileName) {
    this->loadMuscleCatalogue(fileName);
  }
  ~MuscleCatalogue() = default;

  void loadMuscleCatalogue(const std::string& fileName){
    std::ifstream file;
    file.open(fileName, std::ifstream::in);

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

  std::vector<Muscle> getMuscles() {
    return muscles;
  }


  //TODO::provide filtered views based on muscle category and provide searching


  private:
    std::vector<Muscle> muscles;
};
