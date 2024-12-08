/**
 * @author John Uzoka [john.uzoka@uleth.ca], Patrick Pajda [p.pajda@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef WITCH_HPP
#define WITCH_HPP

#include "NPC.hpp"

/**
 * @class Witch
 * @brief A subclass of NPC representing a witch monster.
 */
class Witch : public NPC {
 public:
    /**
     * @brief Constructs a Witch NPC.
     * @param item The item required by the witch.
     */
    Witch(Item* item);

    /**
     * @brief Greets the player as a witch.
     */
    void greet() const override;

    /**
     * @brief Provides a hint about the required item.
     */
    void giveHint() const override;
};

#endif // WITCH_HPP
