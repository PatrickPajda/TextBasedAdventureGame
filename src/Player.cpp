
/**
 * @author Naomi Imiebiakhe [n.imiebiakhe@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#include "Player.hpp"
#include <iostream>

Player::Player(int initialHealth) :
            health(initialHealth),
            currentItem(nullptr) {}

Player::~Player() {
    delete currentItem;
}

void Player::pickUp(Item* newItem) {
    if (!currentItem) {
        currentItem = newItem;
        std::cout << "You picked up: " << newItem->getName() << std::endl;

        if (newItem->isDeathItem()) {
            std::cout << "The item is cursed! You die instantly.\n";
            health = 0;
        }
    } else {
        std::cout << "Drop your current item first to pick up a new one.\n";
    }
}

void Player::drop() {
    if (currentItem) {
        std::cout << "You dropped: " << currentItem->getName() << std::endl;
        delete currentItem;
        currentItem = nullptr;
    } else {
        std::cout << "You have no item to drop.\n";
    }
}

void Player::takeDamage(int damage) {
    health -= damage;
    std::cout << "You took " << damage << " damage! Current health: "<< health << "\n";
}

int Player::getHealth() const {
    return health;
}

Item* Player::getCurrentItem() const {
    return currentItem;
}

void Player::setHealth(int newhealth) {
    health = newhealth;
}