#include <stdlib.h>
#include <stdio.h>

#include "struct.h"
#include "objects.h"
#include "weapons.h"
#include "rooms.h"

void printRoom(ROOM *);

int main(void){
    printRoom( &forest_r );

    return 0;
}

void printRoom(ROOM *room){
    printf("%s\n", room->name);
    printf("%s\n", room->desc);
}
