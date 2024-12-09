#include "Skeleton.hpp"

Skeleton::Skeleton(Item* item) : NPC("Ghost", item) {}

void Skeleton::greet() const {
    std::cout << "Hello...I am a ghost.." << std::endl;
}

void Skeleton::giveHint() const {
    std::cout << "You are looking for a skeleton key" << std::endl;
}
