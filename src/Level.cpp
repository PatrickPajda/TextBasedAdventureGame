#include "Level.hpp"
#include <iostream>

Level::Level() : currentRoom(nullptr) {}

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
    if (currentRoom) {
        auto actions = currentRoom->getActions();
        for (const auto& [key, description] : actions) {
            std::cout << "Press (" << key << ") to " << description << "." << std::endl;
        }
    }
}

void Level::handleInput(int choice) {
    if (!currentRoom) {
        std::cout << "No current room set." << std::endl;
        return;
    }

    auto actions = currentRoom->getActions();
    if (actions.find(choice) == actions.end()) {
        std::cout << "Invalid choice. Try again." << std::endl;
        return;
    }

    std::string roomType = currentRoom->getRoomType();

    if (roomType == "LivingRoom") {
        if (choice >= 2 && choice <= 4) {
            setCurrentRoom(roomOrder[choice - 1]); // Move to selected room
            std::cout << "You moved to a new room." << std::endl;
        } else if (choice == 1) {
            std::cout << "You talked to the NPC." << std::endl;
        }
    } else if (roomType == "RealItemRoom" || roomType == "FakeItemRoom") {
        if (choice == 1) {
            std::cout << "You picked up Item 1." << std::endl;
            // Placeholder: Player->pickupItem(/* Item 1 */);
        } else if (choice == 2) {
            std::cout << "You picked up Item 2." << std::endl;
            // Placeholder: Player->pickupItem(/* Item 2 */);
        } else if (choice == 3) {
            setCurrentRoom(roomOrder[0]); // Return to Living Room
            std::cout << "You returned to the Living Room." << std::endl;
        }
    } else if (roomType == "DeathTrapRoom") {
        if (choice == 1) {
            std::cout << "You triggered the trap and fell to your doom. Game over." << std::endl;
            // Placeholder: Player->takeDamage(/* lethal damage */);
        } else if (choice == 2) {
            setCurrentRoom(roomOrder[0]); // Return to Living Room
            std::cout << "You returned to the Living Room." << std::endl;
        }
    }
}
