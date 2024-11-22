/**
 * @author John Uzoka [john.uzoka@uleth.ca]
 * @date 2024-11
 */

#ifndef SKELETON_H
#define SKELETON_H

#include "NPC.h"

class Skeleton : public NPC {
public:
    Skeleton(Item* item);
    void interact() const override;
    bool dance() const override;
};

#endif // SKELETON_H
