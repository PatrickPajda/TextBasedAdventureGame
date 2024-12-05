/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

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

void Level::handleInput(int choice, Player* player) {
    if (!currentRoom) {
        std::cout << "No current room set." << std::endl;
        return;
    }

    auto actions = currentRoom->getActions();
    if (actions.find(choice) == actions.end()) {
        std::cout << "Invalid choice. Try again." << std::endl;
        return;
    }

    if (currentRoom->getRoomType() == "RealItemRoom") {
        RealItemRoom* realRoom = dynamic_cast<RealItemRoom*>(currentRoom);
        if (choice == 1) {
            player->pickUp(realRoom->getFakeItem());
        } else if (choice == 2) {
            player->pickUp(realRoom->getRealItem());
        } else if (choice == 3) {
            setCurrentRoom(roomOrder[0]); // Return to Living Room
        }
    } else if (currentRoom->getRoomType() == "FakeItemRoom") {
        FakeItemRoom* fakeRoom = dynamic_cast<FakeItemRoom*>(currentRoom);
        if (choice == 1) {
            player->pickUp(fakeRoom->getFakeItem());
        } else if (choice == 2) {
            player->pickUp(fakeRoom->getDeathItem());
        } else if (choice == 3) {
            setCurrentRoom(roomOrder[0]); // Return to Living Room
        }
    } else if (currentRoom->getRoomType() == "DeathTrapRoom") {
        DeathTrapRoom* deathRoom = dynamic_cast<DeathTrapRoom*>(currentRoom);
        if (choice == 1) {
            deathRoom->outputDeathMessage();
            player->takeDamage(player->getHealth()); // Kill the player
        } else if (choice == 2) {
            setCurrentRoom(roomOrder[0]); // Return to Living Room
        }
    } else if (currentRoom->getRoomType() == "LivingRoom") {
        if (choice >= 2 && choice <= 4) {
            setCurrentRoom(roomOrder[choice - 1]); // Move to the next room
            std::cout << "You moved to a new room." << std::endl;
        } else if (choice == 1) {
            std::cout << "You talk to the NPC." << std::endl;
        }
    }
}
