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
 *
 * The HauntedHouse class serves as a base for all rooms. It defines the interface
 * for describing rooms and presenting player actions.
 */
class HauntedHouse {
protected:
    std::string description;

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
     * @brief Describe the current room.
     */
    virtual void describeRoom() const;

    /**
     * @brief set a map of actions available in the room.
     * @return A map of action keys to action descriptions.
     */


    /**
     * @brief Get a map of actions available in the room.
     * @return A map of action keys to action descriptions.
     */
    virtual std::map<int, std::string> getActions() const = 0;

    /**
     * @brief Get the unique identifier for the room type.
     * @return A string representing the room type.
     */
    virtual std::string getRoomType() const = 0;
};

#endif // HAUNTEDHOUSE_HPP
