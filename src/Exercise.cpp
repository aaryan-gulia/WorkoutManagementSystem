#include "Exercise.h"

Exercise::Exercise(const std::string& name, const std::string& description, const std::vector<Muscle>& primaryMuscles,
                   const std::vector<Muscle>& secondaryMuscles):
                   name(name),description(description),primaryMusclesWorked(primaryMuscles),secondaryMusclesWorked(secondaryMuscles){
  uuid = Utils::generateUUID();
  timeCreated = Utils::getDateTime();
  timeLastModified = Utils::getDateTime();
}

void Exercise::setName(const std::string &name) {
    this->name = name;
}

void Exercise::setDescription(const std::string &description) {
    this->description = description;
}

void Exercise::setPrimaryMuscles(const std::vector<Muscle> &primaryMuscles) {
    this->primaryMusclesWorked = primaryMuscles;
}

void Exercise::setSecondaryMuscles(const std::vector<Muscle> &secondaryMuscles) {
    this->secondaryMusclesWorked = secondaryMuscles;
}

const std::string& Exercise::getName() const {
    return name;
}

const std::string& Exercise::getDescription() const {
    return description;
}

const std::vector<Muscle>& Exercise::getPrimaryMuscles() const {
    return primaryMusclesWorked;
}

const std::vector<Muscle>& Exercise::getSecondaryMuscles() const {
    return secondaryMusclesWorked;
}



