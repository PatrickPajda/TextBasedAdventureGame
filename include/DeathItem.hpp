/**
 * @author Anita Naserfallah [anita.naserfallah@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef DEATHITEM_HPP
#define DEATHITEM_HPP

#include "Item.hpp"

/**
 * @class DeathItem
 * @brief Represents an item that kills the player when picked up.
 */
class DeathItem : public Item {
 public:
    /**
     * @brief Constructs a DeathItem with a name.
     * @param name The name of the death item.
     */
    DeathItem(std::string name);

    /**
     * @brief Indicates that this item is a death item.
     * @return Always returns true.
     */
    bool isDeathItem() const override;
};

#endif // DEATHITEM_HPP
