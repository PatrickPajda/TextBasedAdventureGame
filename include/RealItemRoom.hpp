#ifndef REALITEMROOM_HPP
#define REALITEMROOM_HPP

#include "HauntedHouse.hpp"

/**
 * @class RealItemRoom
 * @brief A room containing one real item and one fake item.
 *
 * The RealItemRoom presents the player with two items, one of which is real.
 */
class RealItemRoom : public HauntedHouse {
public:
    /**
     * @brief Constructs a RealItemRoom object with a predefined description.
     */
    RealItemRoom();

    /**
     * @brief Get a map of actions available in the room.
     * @return A map of action keys to action descriptions.
     */
    std::map<int, std::string> getActions() const override;

    /**
     * @brief Get the unique identifier for the room type.
     * @return A string representing the room type.
     */
    std::string getRoomType() const override;

        /**
     * @brief set the pointer for the real item.
     */
    void setRealItem(RealItem* realItem);

    /**
     * @brief set the pointer for the fake item.
     */
    void setFakeItem(FakeItem* fakeItem);

    /**
     * @brief Get the pointer of the real item
     * @return A pointer of type RealItem
     */
    RealItem* getRealItem();

    /**
     * @brief Get the pointer of the fake item
     * @return A pointer of type FakeItem
     */
    FakeItem* getFakeItem();

 private:
    std::string livingRoomName;
    //FakeItem* fakeItem;
    //RealItem* realItem;
};

#endif // REALITEMROOM_HPP
