/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "FakeItemRoom.hpp"

FakeItemRoom::FakeItemRoom(const std::string& description,
                            const std::string& fakeItemName,
                            const std::string& deathItemName)
    : HauntedHouse(description),
      fakeItem(new FakeItem(fakeItemName)),
      deathItem(new DeathItem(deathItemName)) {}

FakeItemRoom::~FakeItemRoom() {
    delete fakeItem;
    delete deathItem;
}

std::map<int, std::string> FakeItemRoom::getActions() const {
    return {
        {1, "Pick up the " + fakeItem->getName()},
        {2, "Pick up the " + deathItem->getName()},
        {3, "Go back to the Living Room."}
    };
}

std::string FakeItemRoom::getRoomType() const {
    return "FakeItemRoom";
}

FakeItem* FakeItemRoom::getFakeItem() const {
    return fakeItem;
}

DeathItem* FakeItemRoom::getDeathItem() const {
    return deathItem;
}
