/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#ifndef GHOST_HPP
#define GHOST_HPP

#include "NPC.hpp"

/**
 * @class Ghost
 * @brief A subclass of NPC that represents a ghost character.
 */
class Ghost : public NPC {
public:
    /**
     * @brief Constructs a Ghost NPC.
     * @param item The item required by the ghost.
     */
    Ghost(Item* item);

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

#endif // GHOST_HPP
