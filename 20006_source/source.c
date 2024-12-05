#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct player {
    int level;
    char name[17];
} Player;

typedef struct room {
    int minlevel, maxlevel, count;
    Player players[300];
} Room;

extern void addplayerroom(Player player, Room rooms[], int* room_count, int max_players);
extern void roomstatus(Room room, int max_players);
extern void sortroom(Room* room);
extern void print(Room room);

int main(void) {
    Player player;
    int p, m;

    scanf("%d %d", &p, &m);

    Room rooms[300];
    int room_count = 0;

    for (int i = 0; i < p; i++) {
        scanf("%d %s", &player.level, player.name);
        addplayerroom(player, rooms, &room_count, m);
    }

    for (int i = 0; i < room_count; i++) {
        roomstatus(rooms[i], m);
        sortroom(&rooms[i]);
        print(rooms[i]);
    }

    return 0;
}
