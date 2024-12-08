/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#ifndef GARDENLEVEL_HPP
#define GARDENLEVEL_HPP

#include "Level.hpp"
#include "LivingRoom.hpp"
#include "RealItemRoom.hpp"
#include "FakeItemRoom.hpp"
#include "DeathTrapRoom.hpp"
#include "Witch.hpp"

/**
 * @class GardenLevel
 * @brief A level where the player explores a garden area.
 */
class GardenLevel : public Level {
private:
    LivingRoom* gazebo; ///< The central room for the garden level.
    RealItemRoom* toolShed; ///< A room containing a real item.
    FakeItemRoom* rosePit; ///< A room with a fake and a death item.
    DeathTrapRoom* flowerField; ///< A room with a deadly trap.

public:
    /**
     * @brief Constructs a GardenLevel object and initializes rooms.
     * @param playerInstance Pointer to the player instance.
     */
    GardenLevel(Player* playerInstance);

    /**
     * @brief Sets up the room order and connections for the garden level.
     */
    void setupLevel() override;
};

#endif // GARDENLEVEL_HPP
