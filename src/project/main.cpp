#include <iostream>
#include <string>
#include "HauntedHouse.hpp"
#include "LivingRoom.hpp"
#include "RoomNavigation.hpp"
#include "Player.hpp"
#include "Item.hpp"
#include "RealItemRoom.hpp"

int main() {
    auto startRoom = std::make_unique<RoomNavigation>();
    auto room = std::make_unique<LivingRoom>();
    auto player = std::make_unique<Player>(startRoom.get());
    auto itemInRoom = std::make_unique<Item>
    ("Item", "It looks like an item!", true);

    std::cout << "You find yourself in a Haunted House."
    << "Right now you are " << "empty room. " <<
    "What would would like to do?" << std::endl;
    std::string choice;
    while (true) {
        std::cout << "1. Enter the next room." << std::endl;
        std::cout << "2. Interact. (Describe the room)" << std::endl;
        std::cout << "3. Pick up object." << std::endl;
        std::cout << "4. Drop the item." << std::endl;
        std::cout << "5. Exit Game." << std::endl;
        std::cout << "Choice: ";
        std::getline(std::cin, choice);

        if (choice == "1") {
            player->move();
            break;
        } else if (choice == "2") {
            room->describe();
        } else if (choice == "3") {
            player->pickUp(itemInRoom.get());
        } else if (choice == "4") {
            player->drop(itemInRoom.get());
        } else if (choice == "5") {
            std::cout << "Exiting Game. Thank-you for playing!" << std::endl;
            break;
        } else {
            std::cout << "Invalid Choice. Please pick" <<
            "valid choice." << std::endl;
        }
    }

    auto realItem = std::make_unique<Item>
    ("Real Item","This is the real item!",
     true);

    std::vector<std::unique_ptr<Item>> fakeItems;
    fakeItems.push_back(std::make_unique<Item>
    ("Fake Item #1", "This is a fake item.",
    true));
    fakeItems.push_back(std::make_unique<Item>
    ("Fake Item #2", "This is a fake item.",
    true));
    fakeItems.push_back(std::make_unique<Item>
    ("Fake Item #3", "This is a fake item.",
    true));

    RealItemRoom realItemRoom(std::move(realItem), std::move(fakeItems));

    realItemRoom.describe();

    //realItemRoom.inspectRoom();

    return 0;
}
