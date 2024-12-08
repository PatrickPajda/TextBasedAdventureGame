/**
 * @author Anita Naserfallah [anita.naserfallah@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef REALITEM_HPP
#define REALITEM_HPP

#include "Item.hpp"

/**
 * @class RealItem
 * @brief Represents an item that can be verified by an NPC.
 */
class RealItem : public Item {
 public:
    /**
     * @brief Constructs a RealItem.
     * @param name The name of the real item.
     */
    explicit RealItem(std::string name);
};

#endif // REALITEM_HPP
