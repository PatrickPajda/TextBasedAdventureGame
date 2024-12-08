/**
 * @author John Uzoka [john.uzoka@uleth.ca], Patrick Pajda [p.pajda@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <vector>
#include <map>
#include "HauntedHouse.hpp"
#include "Player.hpp"
#include "NPC.hpp"

/**
 * @class Level
 * @brief Base class for managing a level in the game.
 */
class Level {
 protected:
    std::vector<HauntedHouse*> roomOrder;
    HauntedHouse* currentRoom; ///< Pointer to the current room.
    NPC* levelNPC; ///< Pointer to the NPC for the level.
    bool isLevelComplete; ///< Indicates whether the level is complete.
    Player* player; ///< Pointer to the player object.

    /**
     * @brief Displays the help menu.
     */
    void showHelpMenu() const;

 public:
    /**
     * @brief Constructs a Level object with a player instance.
     * @param playerInstance Pointer to the player instance.
     */
    Level(Player* playerInstance);

    /**
     * @brief Destructor for the Level class.
     */
    virtual ~Level();

    /**
     * @brief Sets up the room order and connections for the level.
     */
    virtual void setupLevel() = 0;

    /**
     * @brief Sets the current room in the level.
     * @param room Pointer to the room to set as the current room.
     */
    void setCurrentRoom(HauntedHouse* room);

    /**
     * @brief Retrieves the current room.
     * @return Pointer to the current room.
     */
    HauntedHouse* getCurrentRoom() const;

    /**
     * @brief Displays the current room's description.
     */
    void describeCurrentRoom() const;

    /**
     * @brief Displays available actions for the player.
     */
    void showActions() const;

    /**
     * @brief Handles player input and transitions between rooms.
     * @param choice The player's action choice.
     */
    void handleInput(int choice);

    /**
     * @brief Checks if the level is complete.
     * @return True if the level is complete, false otherwise.
     */
    bool checkLevelComplete() const;
};

#endif // LEVEL_HPP
