#include "Exercise.h"
#include "utils.h"

Exercise::Exercise(const std::string& name, const std::string& description, const std::vector<Muscle>& primaryMuscles,
                   const std::vector<Muscle>& secondaryMuscles):
                   name(name),description(description),primaryMusclesWorked(primaryMuscles),secondaryMusclesWorked(secondaryMuscles){
  uuid = Utils::generateUUID();
  timeCreated = Utils::getDateTime();
  timeLastModified = Utils::getDateTime();
}