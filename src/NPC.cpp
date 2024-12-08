/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#include "NPC.hpp"

NPC::NPC(const std::string& npcName, const std::string& npcGreeting, Item* item)
    : name(npcName), greeting(npcGreeting), requiredItem(item), isSolved(false) {}

void NPC::greet() const {
    std::cout << greeting << std::endl;
}

bool NPC::checkItem(Item* playerItem) {
    if (playerItem->getName() == requiredItem->getName()) {
        std::cout << "Correct item! Well done!" << std::endl;
        setIsSolved(true);
        return true;
    } else {
        std::cout << "This is not the correct item." << std::endl;
        return false;
    }
}

bool NPC::getIsSolved() const {
    return isSolved;
}

void NPC::setIsSolved(bool solved) {
    isSolved = solved;
}
