/**
 * @author Naomi Imiebiakhe [n.imiebiakhe@uleth.ca]
 * @date 2024-11
 */

#ifndef ROOM_NAVIGATION_HPP
#define ROOM_NAVIGATION_HPP

/**
 * @class RoomNavigation
 * @brief Class repesenting room navigation logic
 * @details 
 */

class RoomNavigation {
 public:
    /**
     * @brief Deault constructor
     */
    RoomNavigation();

    /**
     * @brief Sets the next room
     * @param The room
     */
    void setNextRoom(RoomNavigation* room);

    RoomNavigation* nextRoom;
};

#endif //ROOM_NAVIGATION_HPP_INCLUDED
