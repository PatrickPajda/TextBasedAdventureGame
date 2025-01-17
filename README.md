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

Nov 7 2024
Our group held a meeting where each member present their own UML deisgn for discussion. Through collabrative feedback and discussion, we developed a revised UML diagram that incorporated the best ideas from each deisgn.
John and Patrick then took the responsibility for creating the final version of the UML diagram and preparing the report, which they submitted on behalf of the group. we also agreed to hold two coding sessions during reading week to advanced our project. We also assigned roles to each group member:
Patrick - Team Lead
John - Lead Developer
Anita - Secretary 
Naomi - Quality Assurance 

November 12 
Durnig our coding session, we made foundational progress by setting up individual branches and creating essential classes: Naomi developed room navigation for player movement. Anita implemented an item interaction class for picking up objecs. Patrick built initial rooms, focusing on the Haunted House and Living Room, to enable specific interactions. John implemented the NPC class, enabling players to interact with non-playable characters which are monsters in the game.

Patrick - Worked on Haunted House and LivingRoom Class
John - Worked on NPC class
Anita - Worked on Item Class
Naomi - Room Navigation class

November 21 
As of today, we have completed the basic implementation of core functionalities. Players can now Move between different rooms, Pick up and drop items, interact with rooms, and interact with NPCs.
we plan to design and implement classes and features:
<<<<<<< HEAD

Patrick - Haunted House LiviginRoom Class
John - NPC Class
Anita - Item Class (Derived Classes RealItem, FakeItem, DeathItem)
Naomi - Room Navigation Class
(Finished Basic Implementation)

LivingRoom class: serves as a general area for player interaction.
RealItemRoom class: contains both real and fake items. players must find the correct(real) item to give to the NPC to progress to the next level. Giving a fake item results in the payer taking damage.
FakeItemRoom class: contains fake and death items. Giving a fake item to the NPC will cause damage and giving fake item to NPC more than 2 times results in death. Picking up or interacting with a death item results in instant death.
DeathRoom class: Entering this room or interacting with Certain objects inside results in instant death.
We also outlined the structure of game levels: Level 1: Main Floor, Level 2: Basement, Level 3: Garden.

December 3 2024

Group met for a team meeting where we updated our UML diagram. Team discussed what should be done for 
further implementation, finishing up classes. These classes will all be used in "compose" our level class, which will be passed through our game class to initalize and start the game, finishing up implementation, Unit tests, and Code Coverage, finalizing UML diagram. 

John: Environment and Level classes.
Patrick: NPC class.
Naomi: Player class and Game class.
Anita: Item class.

### Components

# NPCS
* Ghost - NPC player has to pass in level 1
* Skeleton - NPC player has to pass in level 2
* Witch - NPC player has to pass in level 3

# Environments
* Haunted House - abstract class defining environments
* LivingRoom - Room where player will interact with the NPC
* RealItemRoom - This will be a room containing a Real Item and a Fake Item which the player can pick up either
* DeathItemRoom - This will be a room containing a Fake Item and a Death Item which the player can pick up either, but will die if they pick up the Death Item
* DeathTrapRoom - This will be a room that if the player enters and interacts with, will drop through a trap door
and die immediately
* Level - Class that holds all components and gets pass through Game class to initialize the game
* Level 1 - First level containing Ghost NPC which player has to bring bedsheets Item to pass to level 2
* Basement - Second Level containing the Skeleton NPC which player has to bring Skeleton Key Item to pass
to level 3
* Garden - Third Level containing the Witch NPC which player has to bring broomstick Item to finish the game

# Usable Items 
* Real Item - Item that the player gives to the NPC to pass onto the next level
* Fake Item - If player gives the NPC this item, they take damage
* Death Item - If player picks this item up, they die instantly

# Puzzles
* Decipher the the hints the NPCs give and find the correct item, bring the item to the NPC, to pass to the next
level

I.E The ghost will give you a riddle-esque clue where the player must find the bedsheets item, bring
it back to the Ghost

* Avoid the Fake Items - Bringing the fake item to the NPC will cause damage to the player. Small hints will 
help the player avoid these items

* Avoid the Death Items - Picking up a death item instantly kills the player. Small hints will help the player avoid
these items.

* Avoid Death Trap Room - Player must pick up on clues and hints to avoid the Death Trap Room, which when entered, kills the player immediately. 

# How to lose the game

* By taking damage three times from the NPC by bringing fake items
* By picking up a Death Item
* By entering the Trap Room 

# Player actions

* Player can move between rooms
* Player can pick up and drop items
* Player can interact with NPC (Option 1. Ask NPC for hint Option 2. Give item to NPC)
=======
1. LivingRoom class: serves as a general area for player interaction.
2. RealItemRoom class: contains both real and fake items. players must find the correct(real) item to give to the NPC to progress to the next level. Giving a fake item results in the payer taking damage.
3. FakeItemRoom class: contains fake and death items. Giving a fake item to the NPC will cause damage and giving fake item to NPC more than 2 times results in death. Picking up or interacting with a death item results in instant death.
4. DeathRoom class: Entering this room or interacting with Certain objects inside results in instant death.
We also outlined the structure of game levels: Level 1: Main Floor, Level 2: Basement, Level 3: Garden.

### Design and Solid Principles

* Single Responsibility Principle (SRP)

* Examples in the Design:
Player class is responsible only for managing the player's state (health, current item, etc.).
NPC and its derived classes (Ghost, Skeleton, Witch) handle NPC-specific behavior such as interacting with the player and providing hints.
Room classes like LivingRoom, FakeItemRoom, and RealItemRoom focus on the behavior of specific rooms, such as item management and interaction logic.
Game class manages the overall game flow, including level transitions, game initialization, and status display.
Each class has a clear, single responsibility, making the design modular and easier to update or extend.

* Open/Closed Principle (OCP)
Abstract base classes like HauntedHouse, NPC, and Item provide interfaces that allow for adding new room types, NPCs, or items without modifying the existing code. For example:
New room types (e.g., TrapRoom, SecretRoom) can inherit from HauntedHouse.
New NPC types (e.g., Zombie) can inherit from NPC and implement their own behavior.
The Level base class allows new levels to be added (e.g., AtticLevel) without changing the existing levels (MainFloorLevel, BasementLevel, GardenLevel).
The design is extensible and supports adding new features without altering the existing structure.

* Liskov Substitution Principle (LSP)
Examples in the Design:
Derived classes like LivingRoom, FakeItemRoom, and DeathTrapRoom can replace their base class HauntedHouse without breaking the game logic. For example, any room can be used in the roomOrder vector in the Level class.
Similarly, derived classes like Ghost, Skeleton, and Witch can substitute NPC wherever an NPC is required.
By ensuring that derived classes correctly implement and extend the behavior of their base classes, the design maintains compatibility and functionality.

* Interface Segregation Principle (ISP)

Examples in the Design:
Abstract base classes like HauntedHouse, NPC, and Item define specific and relevant methods for their respective domains. For example:
HauntedHouse includes methods like getActions() and getRoomType() specific to room behavior.
NPC focuses on methods for interaction and hints (greet(), giveHint()).
Item includes methods relevant to item behavior (getName(), isDeathItem()).
Classes are not burdened with irrelevant methods, adhering to the ISP.


* Dependency Inversion Principle (DIP)
Examples in the Design:
The Level class depends on the abstract HauntedHouse class rather than specific room implementations. This allows for flexibility in adding or modifying room types without changing the Level logic.
The Game class depends on the abstract Level class and uses a vector of level factories (std::vector<std::function<Level*()>>) to decouple level creation from the Game logic.
NPC interactions depend on the abstract Item class, making it possible to add new item types (e.g., CursedItem) without modifying existing NPC logic.
Abstractions (base classes) are central to the design, reducing coupling between high-level and low-level components.

### Additional Properties
* Encapsulation and Modularity:
Data members are private, with controlled access through getter and setter methods (e.g., getHealth(), setHealth() in Player).
Classes are modular, with clear boundaries for responsibilities, ensuring encapsulation of functionality.

* Polymorphism and Extensibility:
Polymorphism is heavily used through abstract base classes (HauntedHouse, NPC, Item, Level), enabling the addition of new functionality without altering existing code.

* Adherence to Design Patterns:
Factory Pattern: Level creation is handled via factory functions (std::function<Level*()>) in the Game class.
Strategy Pattern: Different room behaviors are encapsulated in room classes, and NPC-specific behavior is encapsulated in NPC subclasses.
