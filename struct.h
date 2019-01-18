#ifndef _STRUCT_H
#define _STRUCT_H

typedef struct room {
    unsigned int id;
    char name[25];
    char desc[100];
    
    int attr;
    struct object *objects[5];
    struct weapon *weapons[5];

    struct room * east;
    struct room * west;
    struct room * north;
    struct room * south;

} ROOM;

typedef struct object{
    unsigned int id;
    char name[25];
    char desc[100];
} OBJ;

typedef struct weapon{
    unsigned int id;
    char name[25];
    char desc[100];

    int dmg;
    unsigned int effect;
} WEAPON;

typedef struct enemy{
    unsigned int id;
    char name[25];
    char desc[100];

    int attr;
    struct weapon * weapon;
} ENEMY;
#endif /* _STRUCT_H */
