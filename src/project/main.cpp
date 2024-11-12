#include <iostream>
#include <string>
#include "HauntedHouse.hpp"
#include "LivingRoom.hpp"

int main() {
    LivingRoom();
    LivingRoom room;
    std::cout << "You find yourself in a Haunted House. Right now you are in an empty room. What would would like to do?" << std::endl;
    std::string choice;
    while (true) {
        std::cout << "1. Enter the next room." << std::endl;
        std::cout << "2. Interact. (Describe the room)" << std::endl;
        std::cout << "3. Pick up object." << std::endl;
        std::cout << "4. Exit game." <<std::endl;
        std::cout << "Choice: ";
        std::getline(std::cin, choice);

        if (choice == "1") {
            std::cout << "You exit the room into the next room." << std::endl;
            break;
        } else if (choice == "2") {
            room.describe();
            break;
        } else if (choice == "3") {
            std::cout << "You picked up an Item." << std::endl;
            break;
        } else if (choice == "4") {
            std::cout << "Exiting Game. Thank-you for playing!" << std::endl;
            break;
        } else {
            std::cout << "Invalid Choice. Please pick valid choice." << std::endl;
        }
    }


    return 0;
}
