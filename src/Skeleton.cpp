/**
 * @author John Uzoka [john.uzoka@uleth.ca], Patrick Pajda [p.pajda@uleth.ca]
 * @date 2024-11, 2024-12
 */

#include "Skeleton.hpp"

Skeleton::Skeleton(Item* item) : NPC("Skeleton", item) {}

void Skeleton::greet() const {
    std::cout << "Hello...I am a skeleton." << std::endl;
}

void Skeleton::giveHint() const {
    std::cout << "You are looking for a skeleton key." << std::endl;
}
