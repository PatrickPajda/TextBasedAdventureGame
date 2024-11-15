/**
 * @author Anita Naserfallah
 * @file Item.cpp
 * @brief Represent an object in the game that can be interacted with
 */

#include "Item.hpp"

//Constructor implementation
Item::Item(std::string name,
 std::string description, bool isPickable)
    : name(name), description(description), isPickable(isPickable) {}

//Getter for the name
std::string Item::getName() const {
    return name;
}

//Getter for description
std::string Item::getDescription() const {
    return description;
}

//Check if the object can be picked up
bool Item::canBePicked() const {
    return isPickable;
}
