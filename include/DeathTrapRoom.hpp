/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#include <map>
#include <string>
#ifndef DEATHTRAPROOM_HPP
#define DEATHTRAPROOM_HPP

#include "HauntedHouse.hpp"

/**
 * @class DeathTrapRoom
 * @brief A room with a deadly trap that challenges the player.
 */
class DeathTrapRoom : public HauntedHouse {
 private:
    std::string trapInquiry;
    std::string deathMessage;

 public:
    /**
     * @brief Constructs a DeathTrapRoom with a 
     * description, inquiry, and death message.
     * @param description Description of the room.
     * @param trapInquiry A message or question related to the trap.
     * @param deathMessage A message displayed if the player triggers the trap
     */
    DeathTrapRoom(const std::string& description,
                     const std::string& trapInquiry,
                     const std::string& deathMessage);

    /**
     * @brief Retrieves available actions in the room.
     * @return A map of action keys to action descriptions.
     */
    std::map<int, std::string> getActions() const override;

    /**
     * @brief Retrieves the unique identifier for the room type.
     * @return A string representing the room type.
     */
    std::string getRoomType() const override;

    /**
     * @brief Displays the death message when the trap is triggered.
     */
    void triggerTrap() const;
};

#endif // DEATHTRAPROOM_HPP
