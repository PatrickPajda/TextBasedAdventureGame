/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#ifndef LIVINGROOM_HPP
#define LIVINGROOM_HPP

#include "HauntedHouse.hpp"

/**
 * @class LivingRoom
 * @brief The starting room in the haunted house.
 *
 * The LivingRoom is the central hub from which the player can access other rooms.
 */
class LivingRoom : public HauntedHouse {
public:
    /**
     * @brief Constructs a LivingRoom object with a predefined description.
     */
    LivingRoom();

    /**
     * @brief Get a map of actions available in the living room.
     * @return A map of action keys to action descriptions.
     */
    std::map<int, std::string> getActions() const override;

    /**
     * @brief Get the unique identifier for the room type.
     * @return A string representing the room type.
     */
    std::string getRoomType() const override;
};

#endif // LIVINGROOM_HPP
