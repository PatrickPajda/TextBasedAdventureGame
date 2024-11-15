#include "Player.hpp"

#include <iostream>


Player::Player(RoomNavigation* startRoom) : currentRoom(startRoom) {}

RoomNavigation* Player::getCurrentRoom() const {
    return currentRoom;
}

void Player::move() {
    if (currentRoom != nullptr) {
        currentRoom = currentRoom->nextRoom;
    } else {
        std::cout << "There is no other room to move to!" << std::endl;
    }
}
