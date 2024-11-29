#include "RealItemRoom.hpp"

RealItemRoom::RealItemRoom(std::string description, std::string fakeItemName, std::string realItemName)
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
        {3, "Go back."}
    };
}


std::string RealItemRoom::getRoomType() const {
    return "RealItemRoom";
}

// void RealItemRoom::setRealItem(RealItem* _realItem){
//     if (realItem != nullptr){
//         realItem = _realItem;

//     }

// }

// void RealItemRoom::setFakeItem(FakeItem* _fakeItem){
//     if (fakeItem != nullptr){
//         fakeItem = _fakeItem;
//     }
// }

// RealItem* RealItemRoom::getRealItem(){
//     if (RealItem != nullptr){
//         return realItem;
//     }
// }

// FakeItem* RealItemRoom::getFakeItem(){
//     if (fakeItem != nullptr){
//         return fakeItem;
//     }
// }