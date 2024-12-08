/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#ifndef MAINFLOORLEVEL_HPP
#define MAINFLOORLEVEL_HPP

#include "Level.hpp"
#include "LivingRoom.hpp"
#include "RealItemRoom.hpp"
#include "FakeItemRoom.hpp"
#include "DeathTrapRoom.hpp"
#include "Ghost.hpp"

/**
 * @class MainFloorLevel
 * @brief A level representing the main floor of the haunted house.
 */
class MainFloorLevel : public Level {
private:
    LivingRoom* foyer; ///< The central room for the main floor level.
    RealItemRoom* library; ///< A room containing a real item.
    FakeItemRoom* diningHall; ///< A room with a fake and a death item.
    DeathTrapRoom* parlor; ///< A room with a deadly trap.

public:
    /**
     * @brief Constructs a MainFloorLevel object and initializes rooms.
     * @param playerInstance Pointer to the player instance.
     */
    MainFloorLevel(Player* playerInstance);

    /**
     * @brief Sets up the room order and connections for the main floor level.
     */
    void setupLevel() override;
};

#endif // MAINFLOORLEVEL_HPP
