/**
 * @file HauntedHouse.hpp
 * @brief Defines the abstract base class for different environments in a haunted house adventure game.
 */

#ifndef HAUNTEDHOUSE_HPP_INCLUDED
#define HAUNTEDHOUSE_HPP_INCLUDED

#include <iostream>
#include <string>

/**
 * @class HauntedHouse
 * @brief Abstract base class representing a room in the haunted house.
 * 
 * This class provides a foundation for different rooms in the haunted house game. Each room type 
 * derived from this class must implement the describe() method to provide its own description.
 */
class HauntedHouse {
public:
    /**
     * @brief Virtual destructor.
     * 
     * Ensures derived class destructors are called correctly.
     */
    virtual ~HauntedHouse() = default;

    /**
     * @brief Pure virtual function for describing the room.
     * 
     * Derived classes must implement this function to provide a description of the specific room.
     */
    virtual void describe() = 0;

protected:
    /**
     * @brief Protected constructor for the HauntedHouse class.
     * 
     * Initializes the room's description.
     * 
     * @param desc A string description of the room.
     */
    HauntedHouse(const std::string& desc) : description(desc) {}

    /** @brief A string containing the room's description. */
    std::string description;
};

#endif // HAUNTEDHOUSE_HPP_INCLUDED

