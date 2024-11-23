/**
 * @author Patrick Pajda, John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-11
 */

/**
 * @file HauntedHouse.hpp
 * @brief Defines the abstract base class for different environments in a haunted house adventure game.
 */

#ifndef HAUNTEDHOUSE_HPP_INCLUDED
#define HAUNTEDHOUSE_HPP_INCLUDED

#include <string>
#include <map>
#include <iostream>

/**
 * @class HauntedHouse
 * @brief Abstract base class representing a room in the haunted house.
 *
 * This class provides a foundation for
 * different rooms in the haunted house game. Each room type
 * derived from this class must implement the
 * describe() method to provide its own description.
 */
class HauntedHouse {
 protected:
    /** @brief A string containing the room's description. */
    std::string description; // Description of the room

 public:
    /**
     * @brief Protected constructor for the HauntedHouse class.
     *
     * Initializes the room's description.
     *
     * @param desc A string description of the room.
     */
    HauntedHouse(const std::string& desc) : description(desc) {}

    /**
     * @brief Virtual destructor.
     *
     * Ensures derived class destructors are called correctly.
     */
    virtual ~HauntedHouse() = default;


   //  virtual void describe() = 0;

   /**
     * @brief Pure virtual function for describing the room.
     *
     * Derived classes must implement this function
     * to provide a description of the specific room.
     */
    virtual void describe() {
        std::cout << description << std::endl;
    }

    /**
     * @brief Player inspects the room 
     * 
     * Overrides the inspectRoom() function from HauntedHouse to give options 
     * for what to do in a specific to the FakeItem room.
     * Player is given the option to pick up one of two items.
     * 
     */
    void inspectRoom() override;
};

#endif // HAUNTEDHOUSE_HPP_INCLUDED
