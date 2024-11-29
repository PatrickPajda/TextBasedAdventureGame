#include "GardenLevel.hpp"

GardenLevel::GardenLevel() {
    setupLevel();
}

void GardenLevel::setupLevel() {
    // Initialize rooms with dynamic item names
    gazebo = LivingRoom();
    toolShed = RealItemRoom(
        "You are in a large tool shed. Two interesting items catch your eye.",
        "Golden Shovel",
        "Gardening Gloves"
    );
    rosePit = FakeItemRoom(
        "You are in the Fake Item Room. Something feels off about these items.",
        "Red Rose",
        "Cursed Pendant"
    );
    flowerField = DeathTrapRoom(
        "You are in a feild of beautiful flowers.",
        " Will you chosse to sniff them?.",
        "You sniffed a Poisonus flower and died" 
    );

    // Define room order
    roomOrder = {
        &gazebo,
        &toolShed,
        &rosePit,
        &flowerField
    };

    // Start in the Living Room
    setCurrentRoom(&gazebo);
}
