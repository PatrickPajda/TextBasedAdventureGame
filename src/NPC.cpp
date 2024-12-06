#include "NPC.hpp"

void NPC::greet() const {
    std::cout << "Hello...I am a .." << std::endl;
}

bool NPC::checkItem(Item* playerItem) {
    if (playerItem->getName() == requiredItem->getName()) {
        std::cout << "This is the correct item!" << std::endl;
        setIsSolved(true);
        return true;
    } else {
        std::cout << "This is not the correct item!" << std::endl;
        return false;
    }
}

void NPC::giveHint() const {
    std::cout << "You are looking for the required item" << std::endl;
}
