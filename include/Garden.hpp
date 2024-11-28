#ifndef GARDENLEVEL_HPP
#define GARDENLEVEL_HPP

#include "Level.hpp"
#include "LivingRoom.hpp"
#include "RealItemRoom.hpp"
#include "FakeItemRoom.hpp"
#include "DeathTrapRoom.hpp"

/**
 * @class GardenLevel
 * @brief Represents the garden level of the haunted house.
 *
 * The GardenLevel organizes rooms specific to the garden scenario
 * and sets up the transitions between them.
 */
class GardenLevel : public Level {
private:
    LivingRoom gzebo;     ///< Central hub of the level.
    RealItemRoom shed; ///< Room containing real and fake items.
    FakeItemRoom rosePit; ///< Room containing fake and deadly items.
    DeathTrapRoom flowerField; ///< Room with a deadly trap.

public:
    /**
     * @brief Constructs a GardenLevel object and sets up the room layout.
     */
    GardenLevel();

    /**
     * @brief Sets up the room order and connections for the garden level.
     */
    void setupLevel() override;
};

#endif // GARDENLEVEL_HPP
