/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#ifndef BASEMENTLEVEL_HPP
#define BASEMENTLEVEL_HPP

#include "Level.hpp"
#include "LivingRoom.hpp"
#include "RealItemRoom.hpp"
#include "FakeItemRoom.hpp"
#include "DeathTrapRoom.hpp"
#include "Skeleton.hpp"

/**
 * @class BasementLevel
 * @brief A level representing the basement of the haunted house.
 */
class BasementLevel : public Level {
private:
    LivingRoom* boilerRoom; ///< The central room for the basement level.
    RealItemRoom* storageRoom; ///< A room containing a real item.
    FakeItemRoom* laundryRoom; ///< A room with a fake and a death item.
    DeathTrapRoom* secretPassage; ///< A room with a deadly trap.

public:
    /**
     * @brief Constructs a BasementLevel object and initializes rooms.
     * @param playerInstance Pointer to the player instance.
     */
    BasementLevel(Player* playerInstance);

    /**
     * @brief Sets up the room order and connections for the basement level.
     */
    void setupLevel() override;
};

#endif // BASEMENTLEVEL_HPP
