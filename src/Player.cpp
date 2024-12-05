/**
 * @author Naomi Imiebiakhe [n.imiebiakhe@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */


#include "Player.hpp"
#include <iostream>

Player::Player(int initialHealth) : health(initialHealth), currentItem(nullptr) {}

Player::~Player() {
    delete currentItem; // Clean up item if it exists
}

void Player::pickUp(Item* newItem) {
    if (currentItem == nullptr) {
        currentItem = newItem;
        std::cout << "You picked up: " << newItem->getName() << std::endl;

        if (newItem->isDeathItem()) {
            std::cout << "Oh no! The item is cursed and kills you instantly!" << std::endl;
            health = 0;
        }
    } else {
        std::cout << "You already have an item. Drop it first to pick up a new one.\n";
    }
}

void Player::drop() {
    if (currentItem) {
        std::cout << "You dropped: " << currentItem->getName() << std::endl;
        currentItem = nullptr;
    } else {
        std::cout << "You have no item to drop.\n";
    }
}

void Player::takeDamage(int damage) {
    health -= damage;
    std::cout << "You took " << damage << " damage! Current health: " << health << "\n";
    if (health <= 0) {
        std::cout << "You have died. Game over.\n";
    }
}

int Player::getHealth() const {
    return health;
}

Item* Player::getCurrentItem() const {
    return currentItem;
}
