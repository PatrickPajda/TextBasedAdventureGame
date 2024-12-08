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

void Level::handleInput(int choice) {
    if (choice == 'H') {
        showHelpMenu();
        return;
    } else if (choice == 'D') {
        player->drop();
        return;
    }

    if (!currentRoom) {
        std::cout << "No current room set.\n";
        return;
    }

    auto actions = currentRoom->getActions();
    if (actions.find(choice) == actions.end()) {
        std::cout << "Invalid choice. Try again.\n";
        return;
    }

    std::string roomType = currentRoom->getRoomType();

    if (roomType == "LivingRoom" && choice == 1) {
        if (levelNPC) {
            levelNPC->interact(player);
            if (levelNPC->getIsSolved()) {
                isLevelComplete = true;
                std::cout << "Level completed! Well done!\n";
            }
        }
    } else if (roomType == "LivingRoom" && choice >= 2 && choice <= 4) {
        setCurrentRoom(roomOrder[choice - 1]);
    } else if (roomType == "RealItemRoom" || roomType == "FakeItemRoom") {
        if (choice == 3) {
            setCurrentRoom(roomOrder[0]);
        }
    } else if (roomType == "DeathTrapRoom") {
        if (choice == 2) {
            setCurrentRoom(roomOrder[0]);
        }
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
