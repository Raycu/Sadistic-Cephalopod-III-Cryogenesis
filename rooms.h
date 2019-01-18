#include "struct.h"
#include "weapons.h"
#include "objects.h"
#include "def.h"
#include <stddef.h>

ROOM town_r;
ROOM forest _r;

ROOM forest_r = {
    .id = 1,
    .name = "Forest",
    .desc = "You are surrounded by trees.\nSo many trees.\nOh god.",
    
    .objects = { &acorn_o, NULL, NULL, NULL, NULL},
    .weapons = { &branch_w, NULL, NULL, NULL, NULL},

    .east = NULL,
    .west = NULL,
    .north = &town_r,
    .south = NULL


};

ROOM town_r = {
    .id = 2,
    .name = "Happy town",
    .desc = "Everyone here is too happy.\nUnwelcomingly welcoming.\nLeave ASAP",

    .objects = {NULL},
    .weapons = {&stool_w},

    .east = NULL,
    .west = NULL,
    .north = NULL,
    .south = &forest_r
};
