# Template for CPSC2720 Major Project: Text Based Adventure Game
Last Updated: 2024-10-21 by Nicole Wilson &lt;n.wilson@uleth.ca&gt;

Notes:

* The Makefile and .gitlab-ci.yml files are set up to run on Ubuntu.
* The .gitlab-ci.yml file uses the targets in the Makefile.
* These are the tools/commands/apps used:
  * Compiler: g++
  * Style Check: cpplint
  * Static Check: cppcheck
  * Coverage Check: gcov/lcov
  * Memory Check: valgrind
  * Unit Test: gtest 
  * Documentation: doxygen
* See the version report on the pipeline.

Certain assumptions have been made:
* One repo contains the files for one project.
* All unit testing files are found in <code>test/</code> including <code>main.cpp</code>.
* All header files for the project are found in <code>include/</code> and named <code>*.hpp</code>, every class must have a header file.
* All project source files for the project are named <code>*.cpp</code>.
  * Any needed source files that correspond to header files are found in <code>src/</code>.
  * There is a <code>main.cpp</code> found in <code>src/project/</code>.

7 of November |

Our group held a meeting where each member present their own UML deisgn for discussion. Through collabrative feedback and discussion, we developed a revised UML diagram that incorporated the best ideas from each deisgn. 
John and Patrick then took the responsibility for creating the final version of the UML diagram and preparing the report, which they submitted on behalf of the group. we also agreed to hold two coding sessions during reading week to advanced our project.

12 of November |

Durnig our coding session, we made foundational progress by setting up individual branches and creating essential classes: Naomi developed room navigation for player movement. Anita implemented an item interaction class for picking up objecs. Patrick built initial rooms, focusing on the Haunted House and Living Room, to enable specific interactions. John implemented the NPC class, enabling players to interact with non-playable characters which are monsters in the game.

21 of November |

As of today, we have completed the basic implementation of core functionalities. Players can now Move between different rooms, Pick up and drop items, interact with rooms, and interact with NPCs.
we plan to design and implement classes and features:
1. LivingRoom class: serves as a general area for player interaction.
2. RealItemRoom class: contains both real and fake items. players must find the correct(real) item to give to the NPC to progress to the next level. Giving a fake item results in the payer taking damage.
3. FakeItemRoom class: contains fake and death items. Giving a fake item to the NPC will cause damage and giving fake item to NPC more than 2 times results in death. Picking up or interacting with a death item results in instant death.
4. DeathRoom class: Entering this room or interacting with Certain objects inside results in instant death.
We also outlined the structure of game levels: Level 1: Main Floor, Level 2: Basement, Level 3: Garden.

3 of December |

* John: Environment and Level classes.
* Patrick: NPC class.
* Naomi: Player class.
* Anita: Item class.

4 of December |

* NPCs: monsters(Skeleton, Witch, Ghost)
* Environments: LivingRoom, Basement, Garden (as levels) and RealItemRoom, FakeItemRoom, DeathRoom(Death trap)
* Usable Items: Real items, Fake items, Death items
* Puzzles: player trying to find the real item to give it to the NPC, player should avoid to go to the DeathRoom
* How to loss the game:
1. Player enters to the DeathRoom and dies.
2. Player pick up the fake item and give it to the NPC and get damage, after geting damage 3 time player dies.
3. Player pick up the death item and give it to the NPC and dies.
* Players actions: 
1. Enteract with NPCs.
2. Moving between rooms.
3. Pick up or drop an item.