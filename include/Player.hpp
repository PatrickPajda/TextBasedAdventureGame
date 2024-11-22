/**
 * @author Naomi Imiebiakhe [n.imiebiakhe@uleth.ca]
 * @date 2024-11
 */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "RoomNavigation.hpp"
#include "Item.hpp"

/**
 * @class Player
 * @brief Class repesenting a player in the game
 * @details Manages player stats and intractions with enironments,
 * items and other characters in the game
 */

class Player {
 public:
    /**
     * @brief Default constructor
     * @details Initializes a new Player Instance with defaul values
     * @param The room in which the player starts the game 
     */
    Player(RoomNavigation* startRoom);

    /**
     * @brief Getter for player's current room
     */
    RoomNavigation* getCurrentRoom() const;

    /**
     * @brief Moves to next room
     */
    void move();
    /** 
     * @brief Pick up item 
     */
    void pickUp(Item* newItem);
        /** 
     * @brief Drop item 
     */
    void drop(Item* newItem);

 private:
    RoomNavigation* currentRoom;
    Item* item;
};

#endif //PLAYER_HPP_INCLUDED
