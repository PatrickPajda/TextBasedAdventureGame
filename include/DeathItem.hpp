/**
 * @author Anita Naserfallah [anita.naserfallah@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef DEATHITEM_HPP
#define DEATHITEM_HPP

#include "Item.hpp"

/**
 * @class DeathItem
 * @brief Represents an item that causes the player to die when interacted with.
 */
class DeathItem : public Item {
public:
    /**
     * @brief Constructs a DeathItem.
     * @param name The name of the death item.
     */
    explicit DeathItem(std::string name);

    /**
     * @brief Checks if the item is a death item.
     * @return True since this is a death item.
     */
    bool isDeathItem() const override;
};

#endif // DEATHITEM_HPP
