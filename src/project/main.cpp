#include <iostream>
#include <string>
#include "HauntedHouse.hpp"
#include "LivingRoom.hpp"
#include "RoomNavigation.hpp"
#include "Player.hpp"
#include "Item.hpp"

int main() {
    RoomNavigation* startRoom = new RoomNavigation();
    HauntedHouse* room = new LivingRoom();
    Player* player = new Player(startRoom);
    Item* itemInRoom = new Item("Item", "It looks like an item!", true);

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
            player->pickUp(itemInRoom);
        } else if (choice == "4") {
            player->drop(itemInRoom);
        } else if (choice == "5") {
            std::cout << "Exiting Game. Thank-you for playing!" << std::endl;
            break;
        } else {
            std::cout << "Invalid Choice. Please pick" <<
            "valid choice." << std::endl;
        }
    }

    delete room;
    delete startRoom;
    delete player;

    return 0;
}
