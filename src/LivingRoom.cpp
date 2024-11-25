#include "LivingRoom.hpp"

LivingRoom::LivingRoom() : HauntedHouse("You are standing in the living room. "
 "It looks spooky.") {}
  void LivingRoom::describe() {
    std::cout << description << std::endl;
}

void LivingRoom::describe(){

  std::cout << description << std::endl;

}

std::map<int, std::string> getActions() const override {
    return {
      {1, "Talk to the NPC"},
      {2, "Move to Room 1 (Kitchen)"},
      {3, "Move to Room 2 (Hallway)"},
      {4, "Move to Room 3 (Basement)"}
    };
}

void interactWithNPC(){

  NPC.interact();
}
