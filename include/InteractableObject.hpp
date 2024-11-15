/**
 * @author Anita Naserfallah
 * @file InteractObject.cpp
 * @brief Represent an object in the game that can be interacted with
 */

#ifndef INTERACTABLEOBJECT_H
#define INTERACTABLEOBJECT_H

#include <iostream>
#include <string>

/**
 * @class InteractableObject
 * @brief Represents an object in the game that can be interacted with. 
 */

class InteractableObject {
 public:
    /**
     * @brief Constructs an InteractableObject.
     * 
     * @param name The name of the object.
     * @param description The desription of thee object.
     * @param isPickable Indicates if the object can be picked
     */
    InteractableObject(std::string name, std::string description,
     bool isPickable);

    /**
     * @brief Gets the name of the object.
     * @return The name of the object.
     */
    std::string getName() const;

    /**
     * @brief Gets the description of the object.
     * @return The description of the object.
     */
    std::string getDescription() const;

    /**
     * @brief Chechs if the object can be picked up.
     * @return True if the object is pickable, false otherwise.
     */
    bool canBePicked() const;

 private:
    std::string name;
    std::string description;
    bool isPickable;
};

#endif
