/**
 * @author John Uzoka [john.uzoka@uleth.ca], Patrick Pajda [p.pajda@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef NPC_HPP
#define NPC_HPP

#include <string>
#include <iostream>
#include "Item.hpp"
#include "Player.hpp"

/**
 * @class NPC
 * @brief Abstract base class for all NPCs.
 */
class NPC {
 protected:
    std::string name; ///< Name of the NPC.
    Item* requiredItem; ///< Item required to solve the NPC's challenge.
    bool isSolved; ///< Indicates whether the NPC challenge is solved.

 public:
    /**
     * @brief Constructs an NPC.
     * @param npcName The name of the NPC.
     * @param item The item required by the NPC.
     */
    NPC(const std::string& npcName, Item* item);

    /**
     * @brief Virtual destructor.
     */
    virtual ~NPC() = default;

    /**
     * @brief Greets the player.
     */
    virtual void greet() const = 0;

    /**
     * @brief Checks if the player's item solves the NPC's challenge.
     * @param playerItem The player's current item.
     * @return True if the item solves the challenge, false otherwise.
     */
    virtual bool checkItem(Item* playerItem);

    /**
     * @brief Handles interaction between the player and the NPC.
     * @param player Pointer to the player instance.
     */
    virtual void interact(Player* player);

    /**
     * @brief Displays an interaction menu for the NPC.
     */
    virtual void interactMenu();

    /**
     * @brief Retrieves whether the NPC's challenge is solved.
     * @return True if solved, false otherwise.
     */
    bool getIsSolved() const;

    /**
     * @brief Sets whether the NPC's challenge is solved.
     * @param solved Boolean value indicating if the challenge is solved.
     */
    void setIsSolved(bool solved);

    /**
     * @brief Provides a hint to the player about the required item.
     */
    virtual void giveHint() const = 0;
};

#endif // NPC_HPP
