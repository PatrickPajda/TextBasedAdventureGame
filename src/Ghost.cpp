#include "Ghost.hpp"

// Constructor definition (optional since it's already implemented in the header)
Ghost::Ghost() : NPC("Ghost", "Hello...I am a ghost") {}

void Ghost::greet() const {
    std::cout << "Hello...I am a ghost.." << std::endl;
}
