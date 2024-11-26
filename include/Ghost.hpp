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
    Ghost();

    void greet() const override;

    bool checkItem() override;

};

#endif // GHOST_HPP
