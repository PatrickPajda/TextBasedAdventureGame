/**
 * @author Anita Naserfallah
 * @file InteractObject.cpp
 * @brief Represent an Item in the game that can be interacted with
 */

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

/**
 * @class Item
 * @brief Represents an Item in the game that can be interacted with. 
 */

class Item {
 public:
    /**
     * @brief Constructs an Item.
     * 
     * @param name The name of the Item.
     * @param description The desription of the Item.
     * @param isPickable Indicates if the Item can be picked
     */
    Item(std::string name, std::string description,
     bool isPickable);

    /**
     * @brief Gets the name of the Item.
     * @return The name of the Item.
     */
    std::string getName() const;

    /**
     * @brief Gets the description of the Item.
     * @return The description of the Item.
     */
    std::string getDescription() const;

    /**
     * @brief Checks if the Item can be picked up.
     * @return True if the Item is pickable, false otherwise.
     */
    bool canBePicked() const;

 private:
    std::string name;
    std::string description;
    bool isPickable;
};

#endif
