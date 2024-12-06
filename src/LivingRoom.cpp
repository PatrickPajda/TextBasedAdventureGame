#include "LivingRoom.hpp"

LivingRoom::LivingRoom() : HauntedHouse("You are standing in the living room. "
 "It looks spooky.") {}
  void LivingRoom::describe() {
    std::cout << description << std::endl;
}

void LivingRoom::inspectRoom() {
    std::cout << "You see a warm fireplace," 
   " a comfy couch, and a coffee table." << std::endl;
}
