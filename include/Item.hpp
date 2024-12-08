/**
 * @author Anita Naserfallah [anita.naserfallah@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

/**
 * @class Item
 * @brief Represents an item in the game.
 */
class Item {
protected:
    std::string name; ///< The name of the item.

public:
    /**
     * @brief Constructs an Item with a name.
     * @param name The name of the item.
     */
    explicit Item(std::string name);

    /**
     * @brief Virtual destructor for the Item class.
     */
    virtual ~Item() = default;

    /**
     * @brief Retrieves the name of the item.
     * @return The item's name.
     */
    std::string getName() const;

    /**
     * @brief Checks if the item is a death item.
     * @return True if the item is a death item, false otherwise.
     */
    virtual bool isDeathItem() const;
};

#endif // ITEM_HPP
