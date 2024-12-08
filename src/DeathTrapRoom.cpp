/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "DeathTrapRoom.hpp"

DeathTrapRoom::DeathTrapRoom(std::string description,
                                std::string trapInquiry,
                                std::string deathMessage)
    : HauntedHouse(description),
    trapInquiry(trapInquiry),
    deathMessage(deathMessage) {}

std::map<int, std::string> DeathTrapRoom::getActions() const {
    return {
        {1, trapInquiry},
        {2, "Go back"}
    };
}

void DeathTrapRoom::outputDeathMessage(){
    std::cout << deathMessage << std::endl;
}

std::string DeathTrapRoom::getRoomType() const {
    return "DeathTrapRoom";
}
