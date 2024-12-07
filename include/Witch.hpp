#ifndef WITCH_HPP
#define WITCH_HPP

#include "NPC.hpp"
#include "Item.hpp"

/**
 * @class Witch
 * @brief A derived class representing a wtich monster.
 */
class Witch : public NPC {
 public:
    /**
     * @brief Constructor for Witch.
     */
    Witch(Item* item);

    void greet() const override;

    void giveHint() const override;
};

#endif // WITCH_HPP
