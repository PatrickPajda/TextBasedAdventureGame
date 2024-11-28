#ifndef LEVEL_HPP
#define LEVEL_HPP

#include "Room.hpp"
#include <map>
#include <vector>

/**
 * @class Level
 * @brief Base class for managing a level in the game.
 * 
 * The Level class represents a game level that consists of multiple rooms. 
 * It handles room transitions, player actions, and maintains the current room.
 */
class Level {
protected:
    Room* currentRoom;
    std::map<int, Room*> roomConnections;

 public:
    /**
     * @brief Constructs a Level object with no current room.
     */
    Level();

    /**
     * @brief Virtual destructor for Level.
     */
    virtual ~Level() = default;

    /**
     * @brief Sets the current room.
     * @param room Pointer to the room to set as the current room.
     */
    void setCurrentRoom(Room* room);

    /**
     * @brief Gets the current room.
     * @return Pointer to the current room.
     */
    Room* getCurrentRoom() const;

    /**
     * @brief Sets up the connections between rooms in the level.
     * @param connections Map of player input (integer) to Room pointers.
     */
    void setupRoomConnections(const std::map<int, Room*>& connections);

    /**
     * @brief Describes the current room by displaying its description.
     */
    void describeCurrentRoom() const;

    /**
     * @brief Displays the available actions in the current room.
     */
    void showActions() const;

    /**
     * @brief Handles player input and performs the associated action.
     * @param choice The player's choice of action.
     */
    void handleInput(int choice);

    /**
     * @brief Pure virtual function to set up the level's room order and configuration.
     * 
     * This function must be implemented by derived classes to define their room layout.
     */
    virtual void setupLevel() = 0;
};

#endif // LEVEL_HPP
