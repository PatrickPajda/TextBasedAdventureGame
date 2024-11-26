/**
 * @file FakeItemRoom.hpp
 * @brief Defines the FakeItemRoom class, a specific type of room in the haunted house adventure game.
 */

//#ifndef FAKEITEMROM_HPP_INCLUDED
//#define FAKEITEMROM_HPP_INCLUDED

//#include <iostream>
//#include <string>
//#include "HauntedHouse.hpp"
//#include "Item.hpp"

/**
 * @class FakeItemRoom
 * @brief Represents the FakeItemRoom in the haunted house.
 * 
 * This class inherits from HauntedHouse and provides a specific implementation
 * for the DeathTrap room. It overrides the describe() method to give a description of the room.
 */
//class FakeItemRoom : public HauntedHouse {
//public:
    /**
     * @brief Default constructor for the FakeItemRoom class.
     * 
     * Initializes the FakeItem with a predefined description and room items.
     */
    //FakeItemRoom(std::unique_ptr<Item> 
    //deathItem, std::unique_ptr<Item> fakeItem);

    /**
     * @brief Describes the FakeItemRoom.
     * 
     * Overrides the describe() function from HauntedHouse to print out a description
     * specific to the room Provides a description of the storage room containing two items and exit options.
     */
    //void describe() override;

    /**
     * @brief Player inspects the room 
     * 
     * Overrides the inspectRoom() function from HauntedHouse to give options 
     * for what to do in a specific to the FakeItem room.
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

//#endif // FAKEITEMROM_HPP_INCLUDED
