#include <string.h>

typedef struct player {
    int level;
    char name[17];
} Player;

typedef struct room {
    int minlevel, maxlevel, count;
    Player players[300];
} Room;

void sortroom(Room* room) {
    for (int j = 0; j < room->count - 1; j++) {
        for (int k = j + 1; k < room->count; k++) {
            if (strcmp(room->players[j].name, room->players[k].name) > 0) {
                Player temp = room->players[j];
                room->players[j] = room->players[k];
                room->players[k] = temp;
            }
        }
    }
}
