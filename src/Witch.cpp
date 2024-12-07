#include "Witch.hpp"

Witch::Witch(Item* item) : NPC("Witch", item) {}

void Witch::greet() const {
    std::cout << "Hello...I am a witch.." << std::endl;
}

void Witch::giveHint() const {
    std::cout << "You are looking for a broom stick" << std::endl;
}
