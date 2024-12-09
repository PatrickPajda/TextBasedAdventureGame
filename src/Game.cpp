/**
 * @author Naomi Imiebiakhe [n.imiebiakhe@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#include "Game.hpp"
#include <iostream>

Game::Game() : player(new Player(3)), currentLevel(nullptr), currentLevelIndex(0), isRunning(false) {
    // Define the level sequence
    levelSequence = {
        [this]() { return new MainFloorLevel(player); },
        [this]() { return new BasementLevel(player); },
        [this]() { return new GardenLevel(player); }
    };
    initializeGame();
}

Game::~Game() {
    delete currentLevel;
    delete player;
}

void Game::initializeGame() {
    std::cout << "---------- Welcome to the Haunted House ----------\n";
    std::cout << "Initializing the game...\n";
    delete currentLevel;
    currentLevel = levelSequence[currentLevelIndex]();
    std::cout << "You are now on the Main Floor. Good luck!\n";
}

void Game::displayStatus() const {
    std::cout << "Player Health: " << player->getHealth() << "\n";
    std::cout << "Current Level: " << currentLevelIndex + 1 << "\n";
}

void Game::start() {
    isRunning = true;
    std::cout << "Game started!\n";

    while (isRunning) {
        displayStatus();
        currentLevel->describeCurrentRoom();
        currentLevel->showActions();

        char choice;
        std::cout << "Enter your choice (or 0 to exit): ";
        std::cin >> choice;

        if (choice == '0') { // Exit game
            endGame();
            break;
        }

        currentLevel->handleInput(choice);

        if (player->getHealth() <= 0) {
            std::cout << "You have died! Restarting the game...\n";
            resetGame();
        } else if (currentLevel->checkLevelComplete()) {
            std::cout << "Level completed! Loading the next level...\n";
            loadNextLevel();
        }
    }
}


void Game::loadNextLevel() {
    delete currentLevel;
    ++currentLevelIndex;

    if (currentLevelIndex < levelSequence.size()) {
        currentLevel = levelSequence[currentLevelIndex]();
        std::cout << "You are now entering the next level.\n";
    } else {
        std::cout << "Congratulations! You've completed all levels!\n";
        endGame();
    }
}

void Game::resetGame() {
    currentLevelIndex = 0;
    player->setHealth(3); // Restore player health
    initializeGame();
}

void Game::endGame() {
    isRunning = false;
    std::cout << "---------- Game ended. Thank you for playing Haunted House! ----------\n";
}
