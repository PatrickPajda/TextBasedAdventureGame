/**
 * @file NPC.hpp
 * @author John Uzoka
 * @date 2024-11
 * @brief Abstract base class representing a Non-Player Character (NPC).
 */

#ifndef NPC_HPP
#define NPC_HPP

#include <string>
#include <iostream>
#include "Item.hpp"
#include "Player.hpp"

/**
 * @class NPC
 * @brief Abstract base class for all NPCs in the game.
 * 
 * This class serves as a base for specific NPC implementations. 
 * NPCs interact with players, requiring specific items and providing hints or 
 * challenges to progress through the game.
 */
class NPC {
 protected:
    std::string name;
    Item* requiredItem;
    bool isSolved;

 public:
    /**
     * @brief Constructor for NPC.
     * @param npcName The name of the NPC.
     * @param item The required item for the NPC's challenge.
     */
    NPC(const std::string& npcName, Item* item)
        : name(npcName), requiredItem(item), isSolved(false) {}

    /**
     * @brief Virtual destructor for NPC.
     * Ensures proper cleanup for derived classes.
     */
    virtual ~NPC() = default;

    /**
     * @brief Greets the player.
     * Pure virtual function that must be implemented by derived classes.
     */
    virtual void greet() const = 0;

    /**
     * @brief Checks if the player's item is the required item.
     * @param playerItem The item possessed by the player.
     * @return True if the player's item matches the required item, false otherwise.
     */
    virtual bool checkItem(Item* playerItem);

    /**
     * @brief Allows interaction with the NPC.
     * @param player Pointer to the player interacting with the NPC.
     * 
     * This function defines the interaction between the player and the NPC.
     */
    virtual void interact(Player* player);

    /**
     * @brief Displays the interaction menu for the NPC.
     * 
     * This function can be implemented to provide an interface for
     * player interactions with the NPC.
     */
    virtual void interactMenu();

    /**
     * @brief Retrieves the solved status of the NPC's challenge.
     * @return True if the challenge is solved, false otherwise.
     */
    bool getIsSolved() const { return isSolved; }

    /**
     * @brief Sets the solved status of the NPC's challenge.
     * @param solved The new solved status.
     */
    void setIsSolved(bool solved) { isSolved = solved; }

    /**
     * @brief Provides a hint to the player.
     * Pure virtual function that must be implemented by derived classes.
     */
    virtual void giveHint() const = 0;
};

#endif // NPC_HPP
