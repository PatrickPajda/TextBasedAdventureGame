#include "gtest/gtest.h"
#include "Level.hpp"
#include "MainFloorLevel.hpp"
#include "BasementLevel.hpp"
#include "GardenLevel.hpp"
#include "DeathTrapRoom.hpp"
#include "Player.hpp"
#include "RealItem.hpp"
#include "FakeItem.hpp"
#include <string>

/**
 * @brief Test fixture for the Level class.
 */
class TestLevel : public ::testing::Test {
protected:
    Player* player; ///< Player object for testing.
    Level* level;   ///< Level object for testing.

    void SetUp() override {
        player = new Player(3);
        level = new MainFloorLevel(player); // Start with MainFloorLevel
    }

    void TearDown() override {
        delete level;
        delete player;
    }
};

/**
 * @brief Test: Handle Help Menu.
 */
TEST_F(TestLevel, HandleHelpMenu) {
    testing::internal::CaptureStdout(); // Capture output
    level->handleInput('H'); // Trigger Help Menu
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Help Menu") != std::string::npos); // Verify Help Menu text
}

/**
 * @brief Test: Handle Drop Item.
 */
TEST_F(TestLevel, HandleDropItem) {
    player->pickUp(new RealItem("Golden Shovel")); // Player picks up an item
    EXPECT_NE(player->getCurrentItem(), nullptr); // Ensure item is picked up

    testing::internal::CaptureStdout(); // Capture output
    level->handleInput('D'); // Drop the item
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(player->getCurrentItem(), nullptr); // Ensure item is dropped
    EXPECT_TRUE(output.find("You dropped") != std::string::npos); // Verify drop message
}

/**
 * @brief Test: Handle Invalid Input.
 */
TEST_F(TestLevel, HandleInvalidInput) {
    testing::internal::CaptureStdout(); // Capture output
    level->handleInput('X'); // Invalid input
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Invalid input") != std::string::npos); // Verify error message
}

/**
 * @brief Test: Handle Numeric Input for Room Transition.
 */
TEST_F(TestLevel, HandleNumericInput) {
    // Capture the starting room
    auto* startingRoom = level->getCurrentRoom();
    level->handleInput('2'); // Move to the second room

    EXPECT_NE(level->getCurrentRoom(), startingRoom); // Ensure room changes
}

/**
 * @brief Test: Trigger Trap Ends Game.
 */
TEST_F(TestLevel, TriggerTrapEndsGame) {
    auto* trapRoom = new DeathTrapRoom("Trap Room", "Trigger the trap?", "You fell into a trap!");

    // Set the current room to the trap room
    level->setCurrentRoom(trapRoom);

    testing::internal::CaptureStdout(); // Capture output
    trapRoom->triggerTrap();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("You fell into a trap!") != std::string::npos); // Verify trap message
    delete trapRoom; // Clean up
}

/**
 * @brief Test: Real Item Room Action.
 */
TEST_F(TestLevel, RealItemRoomAction) {
    auto* realRoom = new RealItemRoom(
        "A room with two items.",
        "Rusted Spade",
        "Golden Shovel"
    );

    level->setCurrentRoom(realRoom);
    EXPECT_EQ(realRoom->getRoomType(), "RealItemRoom"); // Verify room type

    testing::internal::CaptureStdout();
    level->handleInput('2'); // Pick up the real item
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(player->getCurrentItem(), nullptr); // Ensure item is picked up
    EXPECT_TRUE(output.find("You picked up the real item: Golden Shovel") != std::string::npos);

    delete realRoom;
}

/**
 * @brief Test: Fake Item Room Action.
 */
TEST_F(TestLevel, FakeItemRoomAction) {
    auto* fakeRoom = new FakeItemRoom(
        "A room with suspicious items.",
        "Fake Rose",
        "Cursed Pendant"
    );

    level->setCurrentRoom(fakeRoom);
    EXPECT_EQ(fakeRoom->getRoomType(), "FakeItemRoom"); // Verify room type

    testing::internal::CaptureStdout();
    level->handleInput('2'); // Pick up the death item
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(player->getHealth(), 0); // Ensure player dies
    EXPECT_TRUE(output.find("Oh no! The item is cursed!") != std::string::npos);

    delete fakeRoom;
}
