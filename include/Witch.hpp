/**
 * @file Witch.hpp
 * @author Patrick Pajda
 * @date 2024-11
 * @brief Derived class representing a witch NPC.
 */

#ifndef WITCH_HPP
#define WITCH_HPP

#include "NPC.hpp"
#include "Item.hpp"

/**
 * @class Witch
 * @brief A derived class representing a witch NPC.
 * 
 * The Witch class inherits from the NPC base class and implements specific
 * behavior for a witch monster, including greeting the player and giving hints.
 */
class Witch : public NPC {
 public:
    /**
     * @brief Constructor for Witch.
     * @param item The required item for interacting with the witch.
     */
    Witch(Item* item);

    /**
     * @brief Greets the player.
     * 
     * Prints a custom greeting message specific to the witch NPC.
     */
    void greet() const override;

    /**
     * @brief Provides a hint to the player.
     * 
     * Prints a hint specific to the witch NPC, guiding the player on how to proceed.
     */
    void giveHint() const override;
};

#endif // WITCH_HPP
