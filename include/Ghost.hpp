#ifndef GHOST_HPP
#define GHOST_HPP

#include "NPC.hpp"

/**
 * @class Ghost
 * @brief A derived class representing a ghost monster.
 */
class Ghost : public NPC {
public:
    /**
     * @brief Constructor for Ghost.
     */
    Ghost(Item* item);

    void greet() const override;

    bool checkItem(Item* playerItem) const override;

    void giveHint() const override;

};

#endif // GHOST_HPP
