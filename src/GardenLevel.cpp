/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "GardenLevel.hpp"

GardenLevel::GardenLevel(Player* playerInstance) : Level(playerInstance) {
    setupLevel();
}

void GardenLevel::setupLevel() {
    gazebo = new LivingRoom();
    toolShed = new RealItemRoom("Tool shed with interesting items.",
    "Rusted Spade",
    "Golden Shovel");
    rosePit = new FakeItemRoom("Rose pit with suspicious items.",
    "Rose",
    "Cursed Amulet");
    flowerField = new DeathTrapRoom("A flower field with a strange smell.",
    "Smell the flowers?",
    "The poison knocks you out!");

    // Assign NPC
    levelNPC = new Witch(toolShed->getRealItem());

    // Define room order
    roomOrder = {gazebo, toolShed, rosePit, flowerField};

    // Start in Living Room
    setCurrentRoom(gazebo);
}
