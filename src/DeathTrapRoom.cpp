#include "DeathTrapRoom.hpp"

DeathTrapRoom::DeathTrapRoom()
    : HauntedHouse("You are in the Death Trap Room. Danger is everywhere.") {}

std::map<int, std::string> DeathTrapRoom::getActions() const {
    return {
        {1, "Approach the glowing trap (dangerous!)."},
        {2, "Return to the Living Room."}
    };
}

std::string DeathTrapRoom::getRoomType() const {
    return "DeathTrapRoom";
}
