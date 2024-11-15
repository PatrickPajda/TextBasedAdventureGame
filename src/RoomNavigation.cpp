#include "RoomNavigation.hpp"
#include <iostream>
#include <string>

RoomNavigation::RoomNavigation() : nextRoom(nullptr) {}

void RoomNavigation::setNextRoom(RoomNavigation* room) {
    nextRoom = room;
}
