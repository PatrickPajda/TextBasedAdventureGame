#include "RealItemRoom.hpp"

RealItemRoom::RealItemRoom(Item* realItem, std::vector<Item*> fakeItems) : HauntedHouse("Real Item Room"), realItem_(realItem), fakeItems_(std::move(fakeItems)) {}

RealItemRoom::~RealItemRoom() {
    delete realItem_;

    for (Item* item : fakeItems_) {
        delete item;
    }
}

void RealItemRoom::describe() {
    std::cout << "This is the Real Item Room." << std::endl;
}

void RealItemRoom::inspectRoom() {
    while (true) {
    std::cout << "Which item would you like to pick up?" << std::endl;
    
    std::cout << "1. " << realItem_->getName() << std::endl;
    
    for (size_t i = 0; i < fakeItems_.size(); ++i) {
        std::cout << i + 2 << ". " << fakeItems_[i]->getName() << std::endl;
    }

    std::cout << "Which item do you want to pick up: " << std::endl;
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You picked up the " << realItem_->getName() << "!" << std::endl;
    } else if (choice >= 2 && choice <= static_cast<int>(fakeItems_.size() + 1)) {
        std::cout << "You picked up the " << fakeItems_[choice - 2]->getName() << "!" << std::endl;
    } else {
        std::cout << "Invalid choice. Please try again." << std::endl;
    }
}

}
