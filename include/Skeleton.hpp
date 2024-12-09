/**
 * @file Skeleton.hpp
 * @author Patrick Pajda
 * @date 2024-11
 * @brief Derived class representing a skeleton NPC.
 */

#ifndef SKELETON_HPP
#define SKELETON_HPP

#include "NPC.hpp"
#include "Item.hpp"

/**
 * @class Skeleton
 * @brief A derived class representing a skeleton NPC.
 * 
 * The Skeleton class inherits from the NPC base class and implements specific
 * behavior for a skeleton monster, including greeting the player and giving hints.
 */
class Skeleton : public NPC {
 public:
    /**
     * @brief Constructor for Skeleton.
     * @param item The required item for interacting with the skeleton.
     */
    Skeleton(Item* item);

    /**
     * @brief Greets the player.
     * 
     * Prints a custom greeting message specific to the skeleton NPC.
     */
    void greet() const override;

    /**
     * @brief Provides a hint to the player.
     * 
     * Prints a hint specific to the skeleton NPC, guiding the player on how to proceed.
     */
    void giveHint() const override;
};

#endif // SKELETON_HPP
