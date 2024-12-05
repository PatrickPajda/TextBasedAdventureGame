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
    int health;       ///< Player's health.
    Item* currentItem; ///< Pointer to the current item held by the player.

public:
    /**
     * @brief Constructs a Player with initial health.
     * @param initialHealth The starting health of the player.
     */
    explicit Player(int initialHealth);

    /**
     * @brief Destructor for Player.
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
     * @brief Takes damage, reducing the player's health.
     * @param damage The amount of damage to take.
     */
    void takeDamage(int damage);

    /**
     * @brief Gets the player's current health.
     * @return The current health of the player.
     */
    int getHealth() const;

    /**
     * @brief Gets the player's current item.
     * @return Pointer to the current item.
     */
    Item* getCurrentItem() const;
};

#endif // PLAYER_HPP
