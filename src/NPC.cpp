/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#include "NPC.h"
#include <iostream>

// Constructor
NPC::NPC(const std::string& npcName, const std::string& npcDialogue, Item* item)
    : name(npcName), dialogue(npcDialogue), requiredItem(item) {}

// Destructor
NPC::~NPC() {}

// Interact method to display dialogue
void NPC::interact() const {
    std::cout << name << " says: " << dialogue << std::endl;
}

// Evaluates if the player's item matches the NPC's required item
bool NPC::evaluateItem(Item* playerItem) const {
    if (playerItem == nullptr) {
        std::cout << name << " says: You have no item to show me!" << std::endl;
        return false;
    }
    if (playerItem->getName() == requiredItem->getName()) {
        std::cout << name << " says: Yes! This is exactly what I needed!" << std::endl;
        return true;
    } else {
        std::cout << name << " says: No, this is not the item I seek." << std::endl;
        return false;
    }
}

