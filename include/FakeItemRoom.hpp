/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#ifndef FAKEITEMROOM_HPP
#define FAKEITEMROOM_HPP

#include <map>
#include <string>
#include "HauntedHouse.hpp"
#include "FakeItem.hpp"
#include "DeathItem.hpp"

/**
 * @class FakeItemRoom
 * @brief A room containing one fake item and one deadly item.
 */
class FakeItemRoom : public HauntedHouse {
 private:
    FakeItem* fakeItem; ///< Pointer to the fake item in the room.
    DeathItem* deathItem; ///< Pointer to the deadly item in the room.

 public:
    /**
     * @brief Constructs a FakeItemRoom with specific items.
     * @param description Description of the room.
     * @param fakeItemName Name of the fake item.
     * @param deathItemName Name of the deadly item.
     */
    FakeItemRoom(const std::string& description,
                    const std::string& fakeItemName,
                    const std::string& deathItemName);

    /**
     * @brief Destructor for FakeItemRoom.
     * Deletes dynamically allocated items.
     */
    ~FakeItemRoom();

    /**
     * @brief Retrieves available actions in the room.
     * @return A map of action keys to action descriptions.
     */
    std::map<int, std::string> getActions() const override;

    /**
     * @brief Retrieves the unique identifier for the room type.
     * @return A string representing the room type.
     */
    std::string getRoomType() const override;

    /**
     * @brief Retrieves the pointer to the fake item.
     * @return Pointer to the fake item.
     */
    FakeItem* getFakeItem() const;

    /**
     * @brief Retrieves the pointer to the deadly item.
     * @return Pointer to the deadly item.
     */
    DeathItem* getDeathItem() const;
};

#endif // FAKEITEMROOM_HPP
