/**
 * @author Anita Naserfallah [anita.naserfallah@uleth.ca], John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11, 2024-12
 */

#include "DeathItem.hpp"

DeathItem::DeathItem(std::string name) : Item(std::move(name)) {}

bool DeathItem::isDeathItem() const {
    return true;
}
