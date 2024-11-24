/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#ifndef NPC_HPP
#define NPC_HPP

#include <string>
#include <iostream>

/**
 * @class NPC
 * @brief Abstract base class for all npcs.
 */
class NPC {
protected:
    std::string name;       // Name of the NPC
    std::string greeting;   // Greeting message

public:
    /**
     * @brief Constructor for Monster.
     * @param npcName The name of the monster.
     * @param npcGreeting The greeting message of the monster.
     */
    NPC(const std::string& npcName, const std::string& npcGreeting)
        : name(npcName), greeting(npcGreeting) {}

    /**
     * @brief Virtual destructor.
     */
    virtual ~NPC() = default;

    /**
     * @brief Greet the player.
     * Prints the monster's greeting message.
     */
    virtual void greet() const {
        std::cout << greeting << std::endl;
    }

};

#endif // NPC_HPP
