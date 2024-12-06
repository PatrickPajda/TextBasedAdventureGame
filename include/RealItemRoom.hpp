/**
 * @file RealItemRoom.hpp
 * @brief Defines the RealItemRoom class, a specific type of room in the haunted house adventure game.
 */

#ifndef REALITEMROM_HPP_INCLUDED
#define REALITEMROM_HPP_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "HauntedHouse.hpp"
#include "Item.hpp"

/**
 * @class RealItemRoom
 * @brief Represents the RealItemRoom in the haunted house.
 * 
 * This class inherits from HauntedHouse and provides a specific implementation
 * for the RealItemRoom room. It overrides the describe() method to give a description of the room.
 */
class RealItemRoom : public HauntedHouse {
 public:
    /**
     * @brief Default constructor for the RealItemRoom class.
     * 
     * Initializes the RealItem with a predefined description and items.
     */
    RealItemRoom(Item* realItem,
    std::vector<Item*> fakeItems);
     /**
     * @brief Default destructor for the RealItemRoom class.
     * 
     * Default destructor
     */
    ~RealItemRoom() override;

    /**
     * @brief Describes the RealItemRoom.
     * 
     * Overrides the describe() function from HauntedHouse to print out a description
     * specific to the room 
     * Provides a description of the storage room containing two items and exit options.
     */
    void describe() override;

    /**
     * @brief Player inspects the room 
     * 
     * Overrides the inspectRoom() function from HauntedHouse to give options 
     * for what to do in a specific to the RealItem room.
     * Player is given the option to pick up one of 4 items.
     * 
     */
    void inspectRoom() override;

    /**
     * @brief Update the number of items in room. 
     * 
     * Function that updates the amount of items in the room.
     */
    void updateItems();

 protected:
    Item* realItem_;
    std::vector<Item*> fakeItems_;
};

#endif // REALITEMROM_HPP_INCLUDED
