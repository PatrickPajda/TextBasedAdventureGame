/**
 * @author Naomi Imiebiakhe [n.imiebiakhe@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Item.hpp"

/**
 * @class Player
 * @brief Represents the player in the game.
 */
class Player {
 private:
    int health; ///< The player's health points.
    Item* currentItem; ///< The item currently held by the player.

 public:
    /**
     * @brief Constructs a Player with initial health.
     * @param initialHealth The starting health of the player.
     */
    Player(int initialHealth);

    /**
     * @brief Destructor for the Player class.
     */
    ~Player();

    /**
     * @brief Picks up an item.
     * @param newItem The item to pick up.
     */
    void pickUp(Item* newItem);

    /**
     * @brief Drops the current item.
     */
    void drop();

    /**
     * @brief Reduces the player's health by the specified amount.
     * @param damage The amount of damage to apply.
     */
    void takeDamage(int damage);

    /**
     * @brief Retrieves the player's current health.
     * @return The player's current health.
     */
    int getHealth() const;

    /**
     * @brief Retrieves the player's current item.
     * @return A pointer to the current item.
     */
    Item* getCurrentItem() const;

   /**
   * @brief sets the player's current health.
   */
    void setHealth(int newHealth);
};

#endif // PLAYER_HPP
