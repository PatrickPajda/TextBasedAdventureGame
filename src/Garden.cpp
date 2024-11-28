#include "GardenLevel.hpp"

GardenLevel::GardenLevel() {
    setupLevel();
}

void GardenLevel::setupLevel() {
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
