#ifndef LEVEL_HPP
#define LEVEL_HPP

#include "Room.hpp"
#include <map>

class Level {
 private:
    Room* currentRoom;
    std::map<int, Room*> roomConnections;

 public:
    Level();

    
    void setCurrentRoom(Room* room);                  // Set the current room
    Room* getCurrentRoom() const;                    // Get the current room
    void setRoomConnections(const std::map<int, Room*>& connections); // Set room transitions
    void describeCurrentRoom() const;                // Describe the current room
    void showActions() const;                        // Show available actions in the current room
    void handleInput(int choice);                    // Handle user input and transitions
};

#endif // LEVEL_HPP
