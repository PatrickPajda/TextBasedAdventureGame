/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#ifndef NPC_HPP
#define NPC_HPP

#include <string>
#include <iostream>
#include "Item.hpp"
#include "Player.hpp"

/**
 * @class NPC
 * @brief Abstract base class for all npcs.
 */
class NPC {
 protected:
    std::string name;
    Item* requiredItem;
    bool isSolved;


 public:
    /**
     * @brief Constructor for Monster.
     * @param npcName The name of the monster.
     * @param npcGreeting The greeting message of the monster.
     */
    NPC(const std::string& npcName, Item* item)
        : name(npcName), requiredItem(item), isSolved(false) {}

    /**
     * @brief Virtual destructor.
     */
    virtual ~NPC() = default;

    /**
     * @brief Greet the player.
     * Prints the monster's greeting message.
     */
    virtual void greet() const = 0;

    /**
     * @brief checkItem function
     * Checks if the Item the Player has is
     * the correct item to pass to the next level.
     */
    virtual bool checkItem(Item* playerItem);

    virtual void interact(Player* player);

    virtual void interactMenu();

    bool getIsSolved() const {return isSolved;}

    void setIsSolved(bool solved) {isSolved = solved;}

    virtual void giveHint() const = 0;
};

#endif // NPC_HPP
