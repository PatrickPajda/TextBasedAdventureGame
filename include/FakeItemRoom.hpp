#ifndef FAKEITEMROOM_HPP
#define FAKEITEMROOM_HPP

#include "HauntedHouse.hpp"

/**
 * @class FakeItemRoom
 * @brief A room containing one fake item and one deadly item.
 *
 * The FakeItemRoom challenges the player with a dangerous item choice.
 */
class FakeItemRoom : public HauntedHouse {
public:
    /**
     * @brief Constructs a FakeItemRoom object with a predefined description.
     */
    FakeItemRoom();

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
     * @brief set the pointer for the death item.
     */
    void setDeathItem(DeathItem* deathItem);

    /**
     * @brief set the pointer for the fake item.
     */
    void setFakeItem(FakeItem* fakeItem);

    /**
     * @brief Get the pointer of the death item
     * @return A pointer of type DeathItem
     */
    DeathItem* getDeathItem();

    /**
     * @brief Get the pointer of the fake item
     * @return A pointer of type FakeItem
     */
    FakeItem* getFakeItem();

 private:
    std::string livingRoomName;
    //FakeItem* fakeItem;
    //DeathItem* deathItem;
};

#endif // FAKEITEMROOM_HPP
