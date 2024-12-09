#include "NPC.hpp"

bool NPC::checkItem(Item* playerItem) {
    if (playerItem->getName() == requiredItem->getName()) {
        std::cout << "This is the correct item!" << std::endl;
        setIsSolved(true);
        return true;
    } else {
        // std::cout << "This is not the correct item!" << std::endl;
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
    while (true) { // Loop until valid input is provided
        interactMenu();
        std::cout << "Choice: ";
        std::cin >> choice;

        if (choice == "1") {
            giveHint();
            break; // Exit interaction after hint
        } else if (choice == "2") {
            checkItem(player->getCurrentItem());
            if (checkItem(player->getCurrentItem())) {
                std::cout << "Correct item given. NPC challenge solved!\n";
                break; // Exit interaction after solving challenge
            }else {
                 if (player->getHealth() > 1){
                    player->takeDamage(1);
                    std::cout << name 
                    << ": You gave me the wrong item!"
                    << " Ask for a hint to try again\n";
                }else{if (player->getHealth() == 1){
                    player->takeDamage(1);
                    std::cout << name 
                    << ": You gave me the wrong item!"
                    << " For this you die!\n";
                    break;
                }
               }
            }
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
}


