


#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include <functional>
#include "Player.hpp"
#include "Level.hpp"
#include "MainFloorLevel.hpp"
#include "BasementLevel.hpp"
#include "GardenLevel.hpp"


/**
 * @class Game
 * @brief Class for managing the entire game flow.
 */
class Game {
 private:
    Player* player; ///< Pointer to the player object.
    Level* currentLevel; ///< Pointer to the current level.
    std::vector<std::function<Level*()>> levelSequence;
    int currentLevelIndex; ///< Index of the current level.
    bool isRunning; ///< Tracks if the game is running.

    /**
     * @brief Initializes the game, setting up the first level.
     */
    void initializeGame();

    /**
     * @brief Displays the player's status.
     */
    void displayStatus() const;

    /**
     * @brief Loads the next level in the sequence.
     */
    void loadNextLevel();

    /**
     * @brief Resets the game to the initial state.
     */
    void resetGame();

    /**
     * @brief Ends the game.
     */
    void endGame();

 public:
    /**
     * @brief Constructs the Game object.
     */
    Game();

    /**
     * @brief Destructor for the Game class.
     */
    ~Game();

    /**
     * @brief Starts the main game loop.
     */
    void start();
};

#endif // GAME_HPP
