#include "RealItemRoom.hpp"

RealItemRoom::RealItemRoom
(std::unique_ptr<Item> realItem,
std::vector<std::unique_ptr<Item>>
fakeItems) :
HauntedHouse("Real Item Room"),
realItem_(std::move(realItem)),
fakeItems_(std::move(fakeItems)) {
}

//RealItemRoom::~RealItemRoom() {
//}
void RealItemRoom::describe() {
    std::cout << "This is the Real Item Room." << std::endl;
}
//void RealItemRoom::inspectRoom(){

//}
