#include <stdio.h>

typedef struct player {
    int level;
    char name[17];
} Player;

typedef struct room {
    int minlevel, maxlevel, count;
    Player players[300];
} Room;

void addplayerroom(Player player, Room rooms[], int* room_count, int max_players) {
    int placed = 0;

    for (int j = 0; j < *room_count; j++) {
        if (rooms[j].count < max_players && rooms[j].minlevel <= player.level && player.level <= rooms[j].maxlevel) {
            rooms[j].players[rooms[j].count] = player;
            rooms[j].count++;
            placed = 1;
            break;
        }
    }

    if (!placed) {
        rooms[*room_count].minlevel = player.level - 10;
        rooms[*room_count].maxlevel = player.level + 10;
        rooms[*room_count].count = 1;
        rooms[*room_count].players[0] = player;
        (*room_count)++;
    }
}

void roomstatus(Room room, int max_players) {
    if (room.count == max_players) {
        printf("Started!\n");
    }
    else {
        printf("Waiting!\n");
    }
}

void print(Room room) {
    for (int j = 0; j < room.count; j++) {
        printf("%d %s\n", room.players[j].level, room.players[j].name);
    }
}
