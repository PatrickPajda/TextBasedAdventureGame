/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#include "FakeItemRoom.hpp"

FakeItemRoom::FakeItemRoom(std::string description, std::string fakeItemName, std::string deathItemName)
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
        {3, "Go back."}
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