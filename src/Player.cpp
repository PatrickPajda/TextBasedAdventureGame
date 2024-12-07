#include "Player.hpp"

#include <iostream>


Player::Player(RoomNavigation* startRoom) : currentRoom(startRoom) {}

RoomNavigation* Player::getCurrentRoom() const {
    return currentRoom;
}

void Player::move() {
    if (currentRoom != nullptr) {
        currentRoom = currentRoom->nextRoom;
        std::cout << "You are in the next room!" << std::endl;
    } else {
        std::cout << "There is no other room to move to!" << std::endl;
    }
}

void Player::pickUp(Item* newItem) {
    if (item == nullptr) {
        item = newItem;
        std::cout << "You picked up an Item!" << std::endl;
    } else {
        std::cout << "You already picked up an Item!" << std::endl;
    }
}

void Player::drop(Item* newItem) {
    if (item == nullptr) {
        std::cout << "You have no items to drop silly." << std::endl;
    } else {
    std::cout << "You dropped the item!" << std::endl;
    item = nullptr;
    }
}

Item* Player::getItem() {
    return item;
}
