/**
 * @author John Uzoka [john.uzoka@uleth.ca], Patrick Pajda [p.pajda@uleth.ca]
 * @date 2024-11, 2024-12
 */

#include "Witch.hpp"

Witch::Witch(Item* item) : NPC("Witch", item) {}

void Witch::greet() const {
    std::cout << "Hello...I am a witch." << std::endl;
}

void Witch::giveHint() const {
    std::cout << "You are looking for a broomstick." << std::endl;
}
