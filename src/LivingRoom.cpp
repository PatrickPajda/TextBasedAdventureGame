#include "LivingRoom.hpp"

LivingRoom::LivingRoom() : HauntedHouse("You are standing in the living room. "
 "It looks spooky.") {}
  void LivingRoom::describe() {
    std::cout << description << std::endl;
}
