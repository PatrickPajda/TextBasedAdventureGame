
#include "FakeItemRoom.hpp"

FakeItemRoom::FakeItemRoom(std::unique_ptr<Item> deathItem, std::unique_ptr<Item> fakeItem) {
     // Transfer ownership of deathItem
    items.push_back(std::move(deathItem));
    // Transfer ownership of fakeItem
    items.push_back(std::move(fakeItem));
}

void FakeItemRoom::describe(){

}

void FakeItemRoom::inspectRoom(){
    
}

void FakeItemRoom::inspectRoom(){
    
}
