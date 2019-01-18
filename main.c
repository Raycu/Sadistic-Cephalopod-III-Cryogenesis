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
    printf("%s\n", room->name); /* How the fuck does the %s thing work? I understand \n but not the % operator when printing */
    printf("%s\n", room->desc);
}
