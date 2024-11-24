#include "Witch.hpp"

Witch::Witch() : NPC("Witch", "Hello...I am a witch") {}

void Witch::greet() const {
    std::cout << "Hello...I am a witch.." << std::endl;
}
