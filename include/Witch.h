/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#ifndef WITCH_H
#define WITCH_H

#include "NPC.h"

class Witch : public NPC {
public:
    Witch(Item* item);
    void interact() const override;
    void trick() const override;
};

#endif // WITCH_H
