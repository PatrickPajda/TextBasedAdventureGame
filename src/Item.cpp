/**
 * @author Anita Naserfallah [anita.naserfallah@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#include "Item.hpp"

// Constructor implementation
Item::Item(std::string name)
    : name(std::move(name)) {}

// Getter for the name
std::string Item::getName() const {
    return name;
}

// Check if the object is a death item
bool Item::isDeathItem() const {
    return false;
}
