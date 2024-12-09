/**
 * @author Anita Naserfallah [anita.naserfallah@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#ifndef FAKEITEM_HPP
#define FAKEITEM_HPP

#include <string>
#include "Item.hpp"

/**
 * @class FakeItem
 * @brief Represents an item that causes the player to take damage when interacted with.
 */
class FakeItem : public Item {
 public:
    /**
     * @brief Constructs a FakeItem.
     * @param name The name of the fake item.
     */
    explicit FakeItem(std::string name);
};

#endif // FAKEITEM_HPP
