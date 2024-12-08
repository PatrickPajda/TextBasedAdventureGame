/**
 * @author John Uzoka [john.uzoka@uleth.ca], Patrick Pajda [p.pajda@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef SKELETON_HPP
#define SKELETON_HPP

#include "NPC.hpp"

/**
 * @class Skeleton
 * @brief A subclass of NPC representing a skeleton monster.
 */
class Skeleton : public NPC {
 public:
    /**
     * @brief Constructs a Skeleton NPC.
     * @param item The item required by the skeleton.
     */
    Skeleton(Item* item);

    /**
     * @brief Greets the player as a skeleton.
     */
    void greet() const override;

    /**
     * @brief Provides a hint about the required item.
     */
    void giveHint() const override;
};

#endif // SKELETON_HPP
