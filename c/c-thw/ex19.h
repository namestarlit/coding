#ifndef __EX19_H__
#define __EX19_H__

#include "object.h"

/**
 * struct Monster - Monster structure.
 * @proto: proto data structure.
 * @hit_points: hit points
 */
typedef struct Monster
{
	Object proto;
	int hit_points;
} Monster;

int monster_attack(void *self, int damage);
int monster_init(void *self);

/**
 * struct Room - Room structure
 * @proto: object prototype
 * @bad_guy: the bad guy character object.
 * @north: north room
 * @south: south room
 * @east: east room
 * @west: west room
 */
typedef struct Room
{
	Object proto;
	Monster *bad_guy;

	struct Room *north;
	struct Room *south;
	struct Room *east;
	struct Room *west;
} Room;

void *room_move(void *self, Direction direction);
int room_attack(void *self, int damage);
int room_init(void *self);

/**
 * struct Map - map of the game structure
 * @proto: object prototype
 * @start: start area
 * @location: location in the map.
 */
typedef struct Map
{
	Object proto;

	Room *start;
	Room *location;
} Map;

void *map_move(void *self, Direction direction);
int map_attack(void *self, int damage);
int map_init(void *self);

#endif /*__EX19_H__ */
