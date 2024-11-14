/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#ifndef NPC_H
#define NPC_H

#include <string>
#include "Item.h"

class NPC {
protected:
    std::string name;
    std::string dialogue;
    Item* requiredItem;

public:
    NPC(const std::string& npcName, const std::string& npcDialogue, Item* item);
    virtual ~NPC();

    virtual void interact() const;
    virtual bool evaluateItem(Item* playerItem) const;
};

#endif // NPC_H
