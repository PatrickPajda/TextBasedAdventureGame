/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#ifndef SKELETON_HPP
#define SKELETON_HPP

#include "NPC.hpp"

/**
 * @class Skeleton
 * @brief A subclass of NPC that represents a skeleton character.
 */
class Skeleton : public NPC {
public:
    /**
     * @brief Constructs a Skeleton NPC.
     * @param item The item required by the skeleton.
     */
    Skeleton(Item* item);

    /**
     * @brief Interacts with the player.
     * @param player Pointer to the player instance.
     */
    void interact(Player* player) const override;

    /**
     * @brief Gives a hint to the player.
     */
    void giveHint() const override;
};

#endif // SKELETON_HPP
