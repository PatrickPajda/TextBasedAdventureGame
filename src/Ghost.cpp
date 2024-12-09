#include "Ghost.hpp"

Ghost::Ghost(Item* item) : NPC("Ghost", item) {}

void Ghost::greet() const {
    std::cout << "Hello...I am a ghost.." << std::endl;
}

void Ghost::giveHint() const {
    std::cout << "You are looking for some bedsheets" << std::endl;
}
