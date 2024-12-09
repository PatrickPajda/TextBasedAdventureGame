#include "HauntedHouse.hpp"
#include <iostream>

HauntedHouse::HauntedHouse(const std::string& desc) : description(desc) {}

void HauntedHouse::describeRoom() const {
    std::cout << description << std::endl;
}
