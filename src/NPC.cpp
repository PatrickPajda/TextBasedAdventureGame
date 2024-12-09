#include "NPC.hpp"

bool NPC::checkItem(Item* playerItem) {
    if (playerItem->getName() == requiredItem->getName()) {
        std::cout << "This is the correct item!" << std::endl;
        setIsSolved(true);
        return true;
    } else {
        std::cout << "This is not the correct item!" << std::endl;
        return false;
    }
}

void NPC::interactMenu() {
    greet();
    std::cout << "What would you like to do?" << std::endl;
    std::cout << "1. Ask for a hint." << std::endl;
    std::cout << "2. Give your item to... " << std::endl;
}

void NPC::interact(Player* player) {
    std::string choice;
    interactMenu();
    std::cout << "Choice: ";
    std::getline(std::cin, choice);
    if (choice == "1") {
        giveHint();
    } else if (choice == "2") {
        checkItem(player->getCurrentItem());
    } else {
        std::cout << "Invalid choice. Please try again." << std::endl;
    }
}
