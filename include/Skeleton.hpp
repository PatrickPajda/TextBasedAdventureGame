#ifndef SKELETON_HPP
#define SKELETON_HPP

#include "NPC.hpp"
#include "Item.hpp"

/**
 * @class Skeleton
 * @brief A derived class representing a skeleton monster.
 */
class Skeleton : public NPC {
 public:
    /**
     * @brief Constructor for Skeleton.
     */
    Skeleton(Item* item);

    void greet() const override;

    //bool checkItem(Item* playerItem);

    void giveHint() const override;
};

#endif // SKELETON_HPP
