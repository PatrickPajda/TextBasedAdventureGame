#include "Skeleton.hpp"

Skeleton::Skeleton() : NPC("Skeleton", "Hello...I am a skeleton") {}

void Skeleton::greet() const {
    std::cout << "Hello...I am a skeleton.." << std::endl;
}
