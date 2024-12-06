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

/**
 * @class GardenLevel
 * @brief A level where the player explores a garden area.
 *
 * The GardenLevel defines a custom order of rooms and sets up their transitions.
 */
class GardenLevel : public Level {
private:
    LivingRoom gazebo;
    RealItemRoom toolShed;
    FakeItemRoom rosePit;
    DeathTrapRoom flowerField;

public:
    /**
     * @brief Constructs a GardenLevel and sets up the room layout.
     */
    GardenLevel();

    /**
     * @brief Sets up the room order and connections for the garden level.
     */
    void setupLevel() override;
};

#endif // GARDENLEVEL_HPP
