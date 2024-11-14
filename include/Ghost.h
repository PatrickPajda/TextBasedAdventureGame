/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#ifndef GHOST_H
#define GHOST_H

#include "NPC.h"

class Ghost : public NPC {
public:
    Ghost(Item* item);
    void interact() const override;
    void spook() const;
};

#endif // GHOST_H
