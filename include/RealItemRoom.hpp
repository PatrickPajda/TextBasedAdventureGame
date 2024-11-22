/**
 * @file RealItemRoom.hpp
 * @brief Defines the RealItemRoom class, a specific type of room in the haunted house adventure game.
 */

//#ifndef REALITEMROM_HPP_INCLUDED
//#define REALITEMROM_HPP_INCLUDED

//#include <iostream>
//#include <string>
//#include <vector>
//#include <memory>
//#include "HauntedHouse.hpp"

/**
 * @class RealItemRoom
 * @brief Represents the RealItemRoom in the haunted house.
 * 
 * This class inherits from HauntedHouse and provides a specific implementation
 * for the DeathTrap room. It overrides the describe() method to give a description of the room.
 */
//class RealItemRoom : public HauntedHouse {
 //public:
    /**
     * @brief Default constructor for the RealItemRoom class.
     * 
     * Initializes the RealItem with a predefined description and items.
     */
    //RealItemRoom(std::unique_ptr<Item> realItem, std::unique_ptr<Item> fakeItem);

    /**
     * @brief Describes the RealItemRoom.
     * 
     * Overrides the describe() function from HauntedHouse to print out a description
     * specific to the room 
     * Provides a description of the storage room containing two items and exit options.
     */
    //void describe() override;

    /**
     * @brief Player inspects the room 
     * 
     * Overrides the inspectRoom() function from HauntedHouse to give options 
     * for what to do in a specific to the RealItem room.
     * Player is given the option to pick up one of two items.
     * 
     */
    //void inspectRoom() override;

    /**
     * @brief Causes the player to fall into a trap, resulting in death. 
     * 
     * function that kills the player by outputing a death message and then we can call the game end contition
     */
    //void updateItems()
 //protected:
    //std::vector<std::unique_ptr<Item>> items;
//};

//#endif // REALITEMROM_HPP_INCLUDED
