#ifndef SKELETON_HPP
#define SKELETON_HPP

#include "NPC.hpp"

/**
 * @class Skeleton
 * @brief A derived class representing a skeleton monster.
 */
class Skeleton : public NPC {
public:
    /**
     * @brief Constructor for Skeleton.
     */
    Skeleton();

    void greet() const override;

};

#endif // SKELETON_HPP