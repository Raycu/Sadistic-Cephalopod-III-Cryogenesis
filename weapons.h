#include "struct.h"
#include "def.h"
#ifndef _WEAPONS_H
#define _WEAPONS_H

WEAPON branch_w = {
    .id = 0,
    .name = "Tree Branch",
    .desc = "It what the name says.\nCauses Splinter Damage.",

    .dmg = 2,
    .effect = SPLINTER
};

WEAPON stool_w  = {
    .id = 1,
    .name = "Stool",
    .desc = "It's a Stool It's not your stool.\nHit someone over the head with it and the owner might get mad.",

    .dmg = 5,
    .effect = NONE
};

#endif /* _WEAPONS_H */
