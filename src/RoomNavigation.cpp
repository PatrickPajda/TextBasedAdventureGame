#include "RoomNavigation.hpp"

RoomNavigation::RoomNavigation() : nextRoom(nullptr) {}

void RoomNavigation::setNextRoom(RoomNavigation* room) {
    nextRoom = room;
}
