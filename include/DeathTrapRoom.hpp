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
     * @brief Constructs a DeathTrapRoom with a description and trap inquiry.
     * @param description Description of the room.
     * @param trapInquiry A message or question related to the trap.
     */
    DeathTrapRoom(std::string description, std::string trapInquiry);

    /**
     * @brief Get a map of actions available in the room.
     * @return A map of action keys to action descriptions.
     */
    std::map<int, std::string> getActions() const override;

    /**
     * @brief prints out the death message when player interacts with trap
     */
    void outputDeathMessage();

    /**
     * @brief Get the unique identifier for the room type.
     * @return A string representing the room type.
     */
    std::string getRoomType() const override;

 private:
    std::string livingRoomName;
    std::string trapInquiry;
    std::string deathMessage;
};

#endif // DEATHTRAPROOM_HPP
