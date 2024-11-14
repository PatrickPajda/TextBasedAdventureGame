/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#include "Skeleton.h"
#include <iostream>

Skeleton::Skeleton(Item* item)
    : NPC("Skeleton", "You hear bones clattering... Bring me the amulet of the dead!", item) {}

void Skeleton::interact() const {
    std::cout << "The Skeleton rattles its bones. " << name << " says: " << dialogue << std::endl;
}

void  Skeleton::dance() const {
}
