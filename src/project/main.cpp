#include "Game.hpp"

/**
 * @brief Main entry point for the game.
 * 
 * This function initializes and starts the game.
 * 
 * @return Exit status code.
 */
int main() {
    try {
        // Create the game instance
        Game hauntedHouseGame;

        // Start the game
        hauntedHouseGame.start();
        // Exit successfully
        return 0;
    } catch (const std::exception& e) {
        // Catch any runtime exceptions and display an error message
        std::cerr << "An error occurred: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        // Catch any other unexpected errors
        std::cerr << "An unknown error occurred." << std::endl;
        return 1;
    }
}
