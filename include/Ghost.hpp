/**
 * @file Ghost.hpp
 * @author Patrick Pajda
 * @date 2024-11
 * @brief Derived class representing a ghost NPC.
 */

#ifndef GHOST_HPP
#define GHOST_HPP

#include "NPC.hpp"
#include "Item.hpp"

/**
 * @class Ghost
 * @brief A derived class representing a ghost NPC.
 * 
 * The Ghost class inherits from the NPC base class and implements specific
 * behavior for a ghost monster, including greeting the player and giving hints.
 */
class Ghost : public NPC {
 public:
    /**
     * @brief Constructor for Ghost.
     * @param item The required item for interacting with the ghost.
     */
    Ghost(Item* item);

    /**
     * @brief Greets the player.
     * 
     * Prints a custom greeting message specific to the ghost NPC.
     */
    void greet() const override;

    /**
     * @brief Provides a hint to the player.
     * 
     * Prints a hint specific to the ghost NPC, guiding the player on how to proceed.
     */
    void giveHint() const override;
};

#endif // GHOST_HPP
