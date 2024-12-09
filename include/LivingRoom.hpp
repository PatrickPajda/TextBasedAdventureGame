/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#ifndef LIVINGROOM_HPP
#define LIVINGROOM_HPP

#include <map>
#include <string>
#include "HauntedHouse.hpp"

/**
 * @class LivingRoom
 * @brief Represents the central room in the haunted house.
 */
class LivingRoom : public HauntedHouse {
 public:
    /**
     * @brief Constructs a LivingRoom object.
     */
    LivingRoom();

    /**
     * @brief Retrieves available actions in the Living Room.
     * @return A map of action keys to action descriptions.
     */
    std::map<int, std::string> getActions() const override;

    /**
     * @brief Retrieves the unique identifier for the room type.
     * @return A string representing the room type.
     */
    std::string getRoomType() const override;
};

#endif // LIVINGROOM_HPP
