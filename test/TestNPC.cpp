/* #include "gtest/gtest.h"
#include "Ghost.hpp"


TEST(TestNPC, ConstructorInitialization) {
    Item item("A", "B", true);
    Ghost ghost(&item);

    EXPECT_EQ(ghost.getIsSolved(), false);
    EXPECT_EQ(ghost.checkItem(&item), true);
}

TEST(TestNPC, IsSolved) {
    Item item("A", "B", true);
    Ghost ghost(&item);

    EXPECT_FALSE(ghost.getIsSolved()); // Default value

    ghost.setIsSolved(true);
    EXPECT_TRUE(ghost.getIsSolved());
}
TEST(TestNPC, Greet) {
    Item item("A", "B", true);
    Ghost ghost(&item);

    testing::internal::CaptureStdout();
    ghost.greet();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Hello...I am a ghost..\n");
}
TEST(TestNPC, CheckItem) {
    Item requiredItem("A", "C", true);
    Item wrongItem("B", "D", true);
    Ghost ghost(&requiredItem);

    EXPECT_TRUE(ghost.checkItem(&requiredItem)); // Matching item
    EXPECT_FALSE(ghost.checkItem(&wrongItem));  // Non-matching item
}
TEST(TestNPC, GiveHint) {
    Item item("A", "B", true);
    Ghost ghost(&item);

    testing::internal::CaptureStdout();
    ghost.giveHint();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "You are looking for some bedsheets\n");
}
TEST(TestNPC, Interact) {
    Item correctItem("A", "B", true);
    Ghost ghost(&correctItem);
    RoomNavigation room;
    Player player(&room);

    // Simulate input for asking for a hint
    std::istringstream input1("1\n");
    std::cin.rdbuf(input1.rdbuf());  // Redirect standard input

    testing::internal::CaptureStdout();
    ghost.interact(&player);
    std::string output1 = testing::internal::GetCapturedStdout();

    EXPECT_NE(output1.find("You are looking for some bedsheets\n"), std::string::npos);
}
