#include "FakeItemRoom.hpp"

FakeItemRoom::FakeItemRoom()
    : HauntedHouse("You are in the Fake Item Room. It contains ominous items.") {}

std::map<int, std::string> FakeItemRoom::getActions() const {
    return {
        {1, "Pick up the cracked vase (fake item)."},
        {2, "Pick up the cursed dagger (death item)."},
        {3, "Return to the Living Room."}
    };
}

std::string FakeItemRoom::getRoomType() const {
    return "FakeItemRoom";
}


// void FakeItemRoom::setDeathItem(DeathItem* _deathItem){
//     if (deathItem != nullptr){
//         deathItem = _deathItem;

//     }

// }

// void FakeItemRoom::setFakeItem(FakeItem* _fakeItem){
//     if (fakeItem != nullptr){
//         fakeItem = _fakeItem;
//     }
// }

// DeathItem* FakeItemRoom::getDeathItem(){
//     if (DeathItem != nullptr){
//         return deathItem;
//     }
// }

// FakeItem* FakeItemRoom::getFakeItem(){
//     if (fakeItem != nullptr){
//         return fakeItem;
//     }
// }