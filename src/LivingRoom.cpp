
#include "LivingRoom.hpp"

LivingRoom::LivingRoom() : HauntedHouse("You are standing in the living room. "
 "It looks spooky.") {}

void LivingRoom::describe(){

  std::cout << description << std::endl;

}


void LivingRoom::inspectRoom(Level& level) {
    int input = 0;

    std::cout << "Press (1) to Talk to " << NPC.name << std::endl;
    std::cout << "Press (2) to enter the room 1" << std::endl;
    std::cout << "Press (3) to enter the room 2" << std::endl;
    std::cout << "Press (4) to enter the room 3" << std::endl;

    std::cin >> input;

    if (input == 1) {
        interactWithNPC();
    } else if (input == 2) {
        level.setCurrentRoom(room1); // Switch to room 1
    } else if (input == 3) {
        level.setCurrentRoom(room2); // Switch to room 2
    } else if (input == 4) {
        level.setCurrentRoom(room3); // Switch to room 3
    } else {
        std::cout << "Invalid input." << std::endl;
    }
}
