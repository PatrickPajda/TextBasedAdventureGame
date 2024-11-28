#include "Level.hpp"
#include <iostream>

Level::Level() : currentRoom(nullptr) {}

void Level::setCurrentRoom(Room* room) {
    currentRoom = room;
}

Room* Level::getCurrentRoom() const {
    return currentRoom;
}

void Level::setupRoomConnections(const std::map<int, Room*>& connections) {
    roomConnections = connections;
}

void Level::describeCurrentRoom() const {
    if (currentRoom) {
        currentRoom->describe();
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
    if (currentRoom) {
        auto actions = currentRoom->getActions();
        // Validate the action
        if (actions.find(choice) != actions.end()) {
            if (roomConnections.find(choice) != roomConnections.end()) {
                // Change room
                setCurrentRoom(roomConnections[choice]);
                std::cout << "You moved to a new room." << std::endl;
                // Example: interact with NPC
            } else if (choice == 1) {
                std::cout << "You interact with the NPC." << std::endl;
            } else {
                std::cout << "Invalid action." << std::endl;
            }
        } else {
            std::cout << "Invalid choice." << std::endl;
        }
    }
}
