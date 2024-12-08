/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-12
 */

#ifndef HAUNTEDHOUSE_HPP
#define HAUNTEDHOUSE_HPP

#include <string>
#include <map>

/**
 * @class HauntedHouse
 * @brief Base class for all rooms in the haunted house.
 */
class HauntedHouse {
protected:
    std::string description; ///< Description of the room.

public:
    /**
     * @brief Constructs a HauntedHouse object with a description.
     * @param desc A string description of the room.
     */
    HauntedHouse(const std::string& desc);

    /**
     * @brief Virtual destructor.
     */
    virtual ~HauntedHouse() = default;

    /**
     * @brief Displays the room description.
     */
    virtual void describeRoom() const;

    /**
     * @brief Retrieves available actions in the room.
     * @return A map of action keys to action descriptions.
     */
    virtual std::map<int, std::string> getActions() const = 0;

    /**
     * @brief Retrieves the unique identifier for the room type.
     * @return A string representing the room type.
     */
    virtual std::string getRoomType() const = 0;
};

#endif // HAUNTEDHOUSE_HPP
