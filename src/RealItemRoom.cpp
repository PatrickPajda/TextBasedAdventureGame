#include "RealItemRoom.hpp"

RealItemRoom::RealItemRoom()
    : HauntedHouse("You are in the Real Item Room. It contains two mysterious items.") {}

std::map<int, std::string> RealItemRoom::getActions() const {
    return {
        {1, "Pick up the glowing bone (real item)."},
        {2, "Pick up the dull rock (fake item)."},
        {3, "Return to the Living Room."}
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