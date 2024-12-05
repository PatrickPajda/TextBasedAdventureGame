/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "RealItemRoom.hpp"
#include <memory>

RealItemRoom::RealItemRoom(std::string description, std::string fakeItemName, std::string realItemName)
    : HauntedHouse(description),
      fakeItem(std::make_unique<FakeItem>(fakeItemName)),
      realItem(std::make_unique<RealItem>(realItemName)) {}

std::map<int, std::string> RealItemRoom::getActions() const {
    return {
        {1, "Pick up the " + fakeItem->getName()},
        {2, "Pick up the " + realItem->getName()},
        {3, "Go back."}
    };
}

std::string RealItemRoom::getRoomType() const {
    return "RealItemRoom";
}

FakeItem* RealItemRoom::getFakeItem() {
    return fakeItem.get();
}

RealItem* RealItemRoom::getRealItem() {
    return realItem.get();
}
