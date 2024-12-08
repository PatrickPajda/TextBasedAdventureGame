/**
 * @author John Uzoka [john.uzoka@uleth.ca], Patrick Pajda [p.pajda@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef GHOST_HPP
#define GHOST_HPP

#include "NPC.hpp"

/**
 * @class Ghost
 * @brief A subclass of NPC representing a ghost monster.
 */
class Ghost : public NPC {
 public:
    /**
     * @brief Constructs a Ghost NPC.
     * @param item The item required by the ghost.
     */
    Ghost(Item* item);

    /**
     * @brief Greets the player as a ghost.
     */
    void greet() const override;

    /**
     * @brief Provides a hint about the required item.
     */
    void giveHint() const override;
};

#endif // GHOST_HPP
