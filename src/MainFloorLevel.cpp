/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "MainFloorLevel.hpp"

MainFloorLevel::MainFloorLevel(Player* playerInstance) : Level(playerInstance) {
    setupLevel();
}

void MainFloorLevel::setupLevel() {
    foyer = new LivingRoom();
    library = new RealItemRoom("A quiet library with ancient books.", "Fake Manuscript", "Rare Book");
    diningHall = new FakeItemRoom("A grand dining hall with mysterious objects.", "Fake Goblet", "Cursed Plate");
    parlor = new DeathTrapRoom("A luxurious parlor with a deadly secret.", "Touch the antique clock?", "A trapdoor opens, and you fall to your doom!");

    // Assign NPC
    levelNPC = new Ghost(library->getRealItem());

    // Define room order
    roomOrder = {foyer, library, diningHall, parlor};

    // Start in Living Room
    setCurrentRoom(foyer);
}
