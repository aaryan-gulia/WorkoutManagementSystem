
#pragma once
#include <cstdint>
#include <Muscle.h>
#include <utils.h>


class Exercise {
  public:
    Exercise(const std::string& name = "",
             const std::string& description = "",
             const std::vector<Muscle>& primaryMuscles = std::vector<Muscle>(),
             const std::vector<Muscle>& secondaryMuscles = std::vector<Muscle>());
    ~Exercise() = default;

    Exercise(const Exercise&) = delete;
    Exercise& operator=(const Exercise&) = delete;
    Exercise(Exercise&&) = default;
    Exercise& operator=(Exercise&&) = default;

    void setName(const std::string& name);
    void setDescription(const std::string& description);
    void setPrimaryMuscles(const std::vector<Muscle>& primaryMuscles);
    void setSecondaaryMuscles(const std::vector<Muscle>& secondaryMuscles);

    const std::string& getName() const;
    const std::string& getDescription() const;
    const std::vector<Muscle>& getPrimaryMuscles() const;
    const std::vector<Muscle>& getSecondaryMuscles() const;

  private:
    std::string uuid;
    std::string name;
    Utils::DateTime timeCreated;
    Utils::DateTime timeLastModified;

    std::string description;
    std::vector<Muscle> primaryMusclesWorked;
    std::vector<Muscle> secondaryMusclesWorked;
};