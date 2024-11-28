#include "LivingRoom.hpp"

LivingRoom::LivingRoom()
    : HauntedHouse("You are in the Living Room. It looks eerie and there's an NPC watching you.") {}

std::map<int, std::string> LivingRoom::getActions() const {
    return {
        {1, "Talk to the NPC."},
        {2, "Go to the Real Item Room."},
        {3, "Go to the Fake Item Room."},
        {4, "Go to the Death Trap Room."}
    };
}

std::string LivingRoom::getRoomType() const {
    return "LivingRoom";
}
