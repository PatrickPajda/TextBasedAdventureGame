#include "Ghost.hpp"

// Constructor definition (optional since it's already implemented in the header)
class Ghost : public NPC {
public:
    Ghost(Item* item) :NPC("Ghost", "Hello...I am a ghost", item) {}

void Ghost::greet() const {
    std::cout << "Hello...I am a ghost.." << std::endl;
}

bool Ghost::checkItem(Item* playerItem) const {
    if (playerItem == requiredItem) {
        std::cout << "This is the correct item!" << std::endl;
        const_cast<Ghost*>(this)->setIsSolved(true);
        return true;
    } else {
        std::cout << "This is not the correct item!" << std::endl;
        return false;
    }
}

void Ghost::giveHint() const {
    std::cout << "You are looking for the required item" << std::endl;
}

};
