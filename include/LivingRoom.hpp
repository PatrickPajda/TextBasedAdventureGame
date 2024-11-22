/**
 * @file LivingRoom.hpp
 * @brief Defines the LivingRoom class, a specific type of room in the haunted house adventure game.
 */

#ifndef LIVINGROOM_HPP_INCLUDED
#define LIVINGROOM_HPP_INCLUDED

#include <iostream>
#include <string>
#include "HauntedHouse.hpp"

/**
 * @class LivingRoom
 * @brief Represents the living room in the haunted house.
 * 
 * This class inherits from HauntedHouse and provides a specific implementation
 * for the living room. It overrides the describe() method to give a description of the room.
 */
class LivingRoom : public HauntedHouse {
 public:
    /**
     * @brief Default constructor for the LivingRoom class.
     * 
     * Initializes the LivingRoom with a predefined description.
     */
    LivingRoom();

    /**
     * @brief Describes the LivingRoom.
     * 
     * Overrides the describe() function from HauntedHouse to print out a description
     * specific to the living room.
     */
    void describe() override;
    
    /**
     * @brief  Enables interaction with the NPC present in the room
     * 
     * Calls NPCs interactiion from refrence 
     */
    void interactWithNPC();


};

#endif // LIVINGROOM_HPP_INCLUDED

