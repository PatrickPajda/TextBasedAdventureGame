/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "LivingRoom.hpp"

LivingRoom::LivingRoom()
    : HauntedHouse(
"You are in the Living Room. It looks eerie and there's an NPC watching you."
) {}

std::map<int, std::string> LivingRoom::getActions() const {
    return {
        {1, "Talk to the NPC."},
        {2, "Go to the first room"},
        {3, "Go to the second room."},
        {4, "Go to the third room."}
    };
}

std::string LivingRoom::getRoomType() const {
    return "LivingRoom";
}
