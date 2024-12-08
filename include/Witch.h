/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#ifndef WITCH_HPP
#define WITCH_HPP

#include "NPC.hpp"

/**
 * @class Witch
 * @brief A subclass of NPC that represents a witch character.
 */

class Witch : public NPC {
public:
    /**
     * @brief Constructs a Witch NPC.
     * @param item The item required by the witch.
     */
    Witch(Item* item);

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

#endif // WITCH_HPP
