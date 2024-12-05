/**
 * @author Anita Naserfallah [anita.naserfallah@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

/**
 * @class Item
 * @brief Represents an item in the game that can be interacted with.
 */
class Item {
protected:
    std::string name; ///< Name of the item.

public:
    /**
     * @brief Default constructor for Item.
     */
    Item() = default;

    /**
     * @brief Constructs an Item.
     * @param name The name of the item.
     */
    explicit Item(std::string name);

    /**
     * @brief Virtual destructor.
     */
    virtual ~Item() = default;

    /**
     * @brief Gets the name of the item.
     * @return The name of the item.
     */
    std::string getName() const;

    /**
     * @brief Checks if the item is a death item.
     * @return True if the item is a death item, false otherwise.
     */
    virtual bool isDeathItem() const;
};

#endif // ITEM_HPP
