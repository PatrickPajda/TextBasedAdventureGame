/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include <iostream>
#include "Level.hpp"


Level::Level(Player* playerInstance)
    : currentRoom(nullptr),
    levelNPC(nullptr),
    isLevelComplete(false),
    player(playerInstance) {}

Level::~Level() {
    for (auto room : roomOrder) {
        delete room;
    }
    delete levelNPC;
}

void Level::setCurrentRoom(HauntedHouse* room) {
    currentRoom = room;
}

HauntedHouse* Level::getCurrentRoom() const {
    return currentRoom;
}

void Level::describeCurrentRoom() const {
    if (currentRoom) {
        currentRoom->describeRoom();
    }
}

void Level::showActions() const {
    std::cout << "Press (H) for Help Menu.\n";
    std::cout << "Press (D) to Drop Item.\n";

    if (currentRoom) {
        auto actions = currentRoom->getActions();
        for (const auto& action : actions) {
            const auto& key = action.first;
            const auto& description = action.second;
            std::cout
            << "Press (" << key
            << ") to " << description
            << "." << std::endl;
        }
    }
}

void Level::handleInput(char choice) {
    if (choice == 'H' || choice == 'h') { // Help Menu
        showHelpMenu();
        return;
    }

    if (choice == 'D' || choice == 'd') { // Drop Item
        player->drop();
        return;
    }

    if (!currentRoom) {
        std::cout << "No current room set.\n";
        return;
    }

    // Convert char to integer if it's a digit
    if (isdigit(choice)) {
        int numericChoice = choice - '0'; // Convert char to int (e.g., '1' -> 1)

        auto actions = currentRoom->getActions();
        if (actions.find(numericChoice) == actions.end()) {
            std::cout << "Invalid choice. Try again.\n";
            return;
        }

        std::string roomType = currentRoom->getRoomType();

        if (roomType == "LivingRoom") {
            if (numericChoice >= 2 && numericChoice <= 4) {
                setCurrentRoom(roomOrder[numericChoice - 1]); // Move to selected room
            } else if (numericChoice == 1) {
                if (levelNPC) {
                    levelNPC->interact(player);
                    if (levelNPC->getIsSolved()) {
                        isLevelComplete = true;
                        std::cout << "Level completed! Well done!\n";
                    }
                }
            }
        } else if (roomType == "RealItemRoom") {
            auto* realRoom = static_cast<RealItemRoom*>(currentRoom);
            if (numericChoice == 1) {
                player->pickUp(realRoom->getFakeItem());
            } else if (numericChoice == 2) {
                player->pickUp(realRoom->getRealItem());
            } else if (numericChoice == 3) {
                setCurrentRoom(roomOrder[0]); // Return to Living Room
            }
        } else if (roomType == "FakeItemRoom") {
            auto* fakeRoom = static_cast<FakeItemRoom*>(currentRoom);
            if (numericChoice == 1) {
                player->pickUp(fakeRoom->getFakeItem());
            } else if (numericChoice == 2) {
                player->pickUp(fakeRoom->getDeathItem());
            } else if (numericChoice == 3) {
                setCurrentRoom(roomOrder[0]); // Return to Living Room
            }
        } else if (roomType == "DeathTrapRoom") {
            auto* deathTrapRoom = static_cast<DeathTrapRoom*>(currentRoom);
            if (numericChoice == 1) {
                deathTrapRoom->triggerTrap();
                player->takeDamage(player->getHealth());
            } else if (numericChoice == 2) {
                setCurrentRoom(roomOrder[0]); // Return to Living Room
            }
        }
    } else {
        std::cout << "Invalid input. Please try again.\n";
    }
}


void Level::showHelpMenu() const {
    std::cout
    << "----- Help Menu -----\n";
    std::cout
    << "1. Use the numeric options to navigate between rooms.\n";
    std::cout
    << "2. Pick up items by selecting the appropriate option in the room.\n";
    std::cout
    << "3. Drop items anytime using 'D'.\n";
    std::cout
    << "4. Interact with NPCs to complete the level.\n";
    std::cout
    << "---------------------\n";
}

bool Level::checkLevelComplete() const {
    return isLevelComplete;
}
