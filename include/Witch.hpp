#ifndef WITCH_HPP
#define WITCH_HPP

#include "NPC.hpp"

/**
 * @class Witch
 * @brief A derived class representing a witch monster.
 */
class Witch : public NPC {
public:
    /**
     * @brief Constructor for Skeleton.
     */
    Witch();

    void greet() const override;

};

#endif // WITCH_HPP