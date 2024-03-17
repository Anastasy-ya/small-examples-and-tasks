/*Create a structure consisting of an integer door id and an integer status (0 - closed, 1 - open).
dmanager_module.c sorts the initialized array in ascending order of door id and displays it in the format: “id, status”.
In addition, set the status “closed” for all doors. The door initialization function cannot be changed.
Follow a structured approach. The program must be built using a Makefile.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "door_struct.h"

#define DOORS_COUNT 15
#define MAX_ID_SEED 10000

void initialize_doors(struct door *doors);
int make_doors_open(struct door *doors);
int sort(struct door *doors);

int main() {
    struct door doors[DOORS_COUNT];

    initialize_doors(doors);
    sort(doors);
    make_doors_open(doors);
    for (int i = 0; i < DOORS_COUNT; ++i) {
        printf("%d, %d\n", doors[i].id, doors[i].status);
    }
    return 0;
}

int make_doors_open(struct door *doors) {
    for (int i = 0; i < DOORS_COUNT; ++i) {
        doors[i].status = 0;
    }
    return 0;
}

int sort(struct door *doors) {

    for (int j = 0; j < DOORS_COUNT - 1; j++) {
        for (int i = 0; i < DOORS_COUNT - 1 - j; i++) {
            if (doors[i].id > doors[i + 1].id) {
                struct door t = doors[i];
                doors[i] = doors[i + 1];
                doors[i + 1] = t;
            }
        }
    }
    return 0;
}

// Doors initialization function
// ATTENTION!!!
// DO NOT CHANGE!
void initialize_doors(struct door *doors) {
    srand(time(0));

    int seed = rand() % MAX_ID_SEED;
    for (int i = 0; i < DOORS_COUNT; i++) {
        doors[i].id = (i + seed) % DOORS_COUNT;
        doors[i].status = rand() % 2;
    }
}
