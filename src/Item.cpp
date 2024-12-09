/**
 * @author Anita Naserfallah [anita.naserfallah@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#include "Item.hpp"

Item::Item(std::string name) : name(std::move(name)) {}

std::string Item::getName() const {
    return name;
}

bool Item::isDeathItem() const {
    return false;
}
