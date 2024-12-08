/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#ifndef REALITEMROOM_HPP
#define REALITEMROOM_HPP

#include <map>
#include <string>
#include "HauntedHouse.hpp"
#include "RealItem.hpp"
#include "FakeItem.hpp"

/**
 * @class RealItemRoom
 * @brief A room containing one real item and one fake item.
 */
class RealItemRoom : public HauntedHouse {
 private:
    FakeItem* fakeItem; ///< Pointer to the fake item in the room.
    RealItem* realItem; ///< Pointer to the real item in the room.

 public:
    /**
     * @brief Constructs a RealItemRoom with specific items.
     * @param description Description of the room.
     * @param fakeItemName Name of the fake item.
     * @param realItemName Name of the real item.
     */
    RealItemRoom(const std::string& description,
                    const std::string& fakeItemName,
                    const std::string& realItemName);

    /**
     * @brief Destructor for RealItemRoom.
     * Deletes dynamically allocated items.
     */
    ~RealItemRoom();

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
     * @brief Retrieves the pointer to the real item.
     * @return Pointer to the real item.
     */
    RealItem* getRealItem() const;
};

#endif // REALITEMROOM_HPP
