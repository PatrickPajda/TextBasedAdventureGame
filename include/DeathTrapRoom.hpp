#ifndef DEATHTRAPROOM_HPP
#define DEATHTRAPROOM_HPP

#include "HauntedHouse.hpp"

/**
 * @class DeathTrapRoom
 * @brief A room with a deadly trap.
 *
 * The DeathTrapRoom presents the player with a potentially fatal choice.
 */
class DeathTrapRoom : public HauntedHouse {
public:
    /**
     * @brief Constructs a DeathTrapRoom object with a predefined description.
     */
    DeathTrapRoom();

    /**
     * @brief Get a map of actions available in the room.
     * @return A map of action keys to action descriptions.
     */
    std::map<int, std::string> getActions() const override;

    /**
     * @brief Get the unique identifier for the room type.
     * @return A string representing the room type.
     */
    std::string getRoomType() const override;

 private:
    std::string livingRoomName;
    std::string trapDescription;
};

#endif // DEATHTRAPROOM_HPP
