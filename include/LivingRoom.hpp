/**
 * @file LivingRoom.hpp
 * @brief Defines the LivingRoom class, a specific type of room in the haunted house adventure game.
 */

#ifndef LIVINGROOM_HPP_INCLUDED
#define LIVINGROOM_HPP_INCLUDED

#include <iostream>
#include <string>
#include "HauntedHouse.hpp"
//#include "NPC.hpp"

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
   * @brief Gets options for room
   * 
   * Overrides the getActions() function from HauntedHouse to print out options
   * populates the map of options
   */
   std::map<int, std::string> getActions() const override {
      return {
         {1, "Talk to the NPC"},
         {2, "Move to Room 1 (Kitchen)"},
         {3, "Move to Room 2 (Hallway)"},
         {4, "Move to Room 3 (Basement)"}
        };
    }

    /**
     * @brief  Enables interaction with the NPC present in the room
     * 
     * Calls NPCs interactiion from refrence 
     */
    void interactWithNPC();
    
 protected:
 //NPC* monster;
 bool isExit;


};

#endif // LIVINGROOM_HPP_INCLUDED

#include "Room.hpp"

class LivingRoom : public Room {
public:
    LivingRoom() : Room("You are in the living room. It looks spooky.") {}

    // Provide actions for the LivingRoom
    std::map<int, std::string> getActions() const override {
        return {
            {1, "Talk to the NPC"},
            {2, "Move to Room 1 (Kitchen)"},
            {3, "Move to Room 2 (Hallway)"},
            {4, "Move to Room 3 (Basement)"}
        };
    }
};
