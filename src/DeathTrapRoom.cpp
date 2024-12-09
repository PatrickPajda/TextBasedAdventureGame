/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "DeathTrapRoom.hpp"
#include <iostream>

DeathTrapRoom::DeathTrapRoom(const std::string& description,
                                const std::string& trapInquiry,
                                const std::string& deathMessage)
    : HauntedHouse(description),
    trapInquiry(trapInquiry),
    deathMessage(deathMessage) {}

std::map<int, std::string> DeathTrapRoom::getActions() const {
    return {
        {1, trapInquiry},
        {2, "Go back to the Living Room."}
    };
}

std::string DeathTrapRoom::getRoomType() const {
    return "DeathTrapRoom";
}

void DeathTrapRoom::triggerTrap() const {
    std::cout << deathMessage << std::endl;
}
