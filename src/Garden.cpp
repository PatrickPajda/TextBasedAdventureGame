#include "GardenLevel.hpp"

GardenLevel::GardenLevel() {
    setupLevel();
}

void GardenLevel::setupLevel() {
    // Start in the Living Room
    setCurrentRoom(&gazebo);

    // Set room connections
    setupRoomConnections({
        {2, &realItemRoom},
        {3, &fakeItemRoom},
        {4, &deathTrapRoom}
    });
}
