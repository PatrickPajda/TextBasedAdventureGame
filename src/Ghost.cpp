/**
 * @author John Uzoka [john.uzoka@uleth.ca], Patrick Pajda [p.pajda@uleth.ca]
 * @date 2024-11, 2024-12
 */

#include "Ghost.hpp"

Ghost::Ghost(Item* item) : NPC("Ghost", item) {}

void Ghost::greet() const {
    std::cout << "Hello...I am a ghost." << std::endl;
}

void Ghost::giveHint() const {
    std::cout << "You are looking for some bedsheets." << std::endl;
}
