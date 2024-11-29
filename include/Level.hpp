#ifndef LEVEL_HPP
#define LEVEL_HPP

#include "HauntedHouse.hpp"
#include <vector>
#include <map>

/**
 * @class Level
 * @brief Base class for managing a level in the game.
 *
 * The Level class manages a collection of rooms, handles transitions, and
 * allows for dynamic customization of room connections.
 */
class Level {
protected:
    std::vector<HauntedHouse*> roomOrder; ///< Ordered list of rooms in the level.
    HauntedHouse* currentRoom;            ///< Pointer to the current room.
//  Player* player;

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
     * @brief Sets up the room order and connections for the level.
     *        Must be implemented by subclasses.
     */
    virtual void setupLevel() = 0;

    /**
     * @brief Sets the current room.
     * @param room Pointer to the room to set as the current room.
     */
    void setCurrentRoom(HauntedHouse* room);

    /**
     * @brief Gets the current room.
     * @return Pointer to the current room.
     */
    HauntedHouse* getCurrentRoom() const;

    /**
     * @brief Displays the description of the current room.
     */
    void describeCurrentRoom() const;

    /**
     * @brief Displays the available actions in the current room.
     */
    void showActions() const;

    /**
     * @brief pure virtual function that Handles transition effects between rooms.
     */
    virtual void roomTransition() = 0;

    /**
     * @brief Handles player input and transitions to the next room or performs an action.
     * @param choice Player's action choice.
     */
    void handleInput(int choice);
};

#endif // LEVEL_HPP
