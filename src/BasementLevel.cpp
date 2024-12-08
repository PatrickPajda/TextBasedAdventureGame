/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "BasementLevel.hpp"

BasementLevel::BasementLevel(Player* playerInstance) : Level(playerInstance) {
    setupLevel();
}

void BasementLevel::setupLevel() {
    boilerRoom = new LivingRoom();
    storageRoom = new RealItemRoom("Storage room filled with old boxes.", "Rusty Wrench", "Golden Key");
    laundryRoom = new FakeItemRoom("Laundry room with scattered clothes.", "Fake Coin", "Cursed Sock");
    secretPassage = new DeathTrapRoom("A hidden passageway.", "Open the mysterious door?", "The ceiling collapses, and you are crushed!");

    // Assign NPC
    levelNPC = new Skeleton(storageRoom->getRealItem());

    // Define room order
    roomOrder = {boilerRoom, storageRoom, laundryRoom, secretPassage};

    // Start in Living Room
    setCurrentRoom(boilerRoom);
}
