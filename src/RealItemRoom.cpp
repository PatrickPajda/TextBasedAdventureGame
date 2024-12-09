/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "RealItemRoom.hpp"

RealItemRoom::RealItemRoom(const std::string& description,
                            const std::string& fakeItemName,
                            const std::string& realItemName)
    : HauntedHouse(description),
      fakeItem(new FakeItem(fakeItemName)),
      realItem(new RealItem(realItemName)) {}

RealItemRoom::~RealItemRoom() {
    delete fakeItem;
    delete realItem;
}

std::map<int, std::string> RealItemRoom::getActions() const {
    return {
        {1, "Pick up the " + fakeItem->getName()},
        {2, "Pick up the " + realItem->getName()},
        {3, "Go back to the Living Room."}
    };
}

std::string RealItemRoom::getRoomType() const {
    return "RealItemRoom";
}

FakeItem* RealItemRoom::getFakeItem() const {
    return fakeItem;
}

RealItem* RealItemRoom::getRealItem() const {
    return realItem;
}
