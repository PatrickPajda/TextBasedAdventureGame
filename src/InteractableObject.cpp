/**
 * @author Anita Naserfallah
 * @file InteractObject.cpp
 * @brief Represent an object in the game that can be interacted with
 */

#include "InteractableObject.hpp"

//Constructor implementation
InteractableObject::InteractableObject(std::string name,
 std::string description, bool isPickable)
    : name(name), description(description), isPickable(isPickable) {}

//Getter for the name
std::string InteractableObject::getName() const {
    return name;
}

//Getter for description
std::string InteractableObject::getDescription() const {
    return description;
}

//Check if the object can be picked up
bool InteractableObject::canBePicked() const {
    return isPickable;
}
