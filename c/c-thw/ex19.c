#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "ex19.h"

/**
 * monster_attack - attacking the monster
 * @self: void pointer
 * @damage: amount of damage
 *
 * Return: 0, 1
 */
int monster_attack(void *self, int damage)
{
	Monster *monster = self;

	printf("You attack %s\n", monster->_(description));
	monster->hit_points -= damage;

	if (monster->hit_points > 0)
	{
		printf("It is still alive.\n");
		return (0);
	}
	else
	{
		printf("It is dead!\n");
		return (1);
	}
}

/**
 * monster_init - initialize monster object.
 * @self: void pointer
 *
 * Return: 1
 */
int monster_init(void *self)
{
	Monster *monster = self;

	monster->hit_points = 10;

	return (1);
}

/* Monster prototype */
Object MonsterProto = {
	.init = monster_init,
	.attack = monster_attack
};

/**
 * room_move - moving in the rooms
 * @self: void pointer
 * @direction: direction to move
 *
 * Return: next room pointer
 */
void *room_move(void *self, Direction direction)
{
	Room *room = self;
	Room *next = NULL;

	if (direction == NORTH && room->north)
	{
		printf("You go north, into:\n");
		next = room->north;
	}
	else if (direction == SOUTH && room->south)
	{
		printf("You go south, into:\n");
		next = room->south;
	}
	else if (direction == EAST && room->east)
	{
		printf("You go east, into:\n");
		next = room->east;
	}
	else if (direction == WEST && room->west)
	{
		printf("You go west, into:\n");
		next = room->west;
	}
	else
	{
		printf("You can't go that direction\n");
		next = NULL;
	}

	if (next)
		next->_(describe)(next);

	return (next);
}

/**
 * room_attack - attack in the room
 * @self: void pointer
 * @damage: damage amount
 *
 * Return: 1, 0
 */
int room_attack(void *self, int damage)
{
	Room *room = self;
	Monster *monster = room->bad_guy;

	if (monster)
	{
		monster->_(attack)(monster, damage);
		return (1);
	}
	else
	{
		printf("You frail in the air at nothing. Idiot.\n");
		return (0);
	}
}

/* Room prototype */
Object RoomProto = {
	.move = room_move,
	.attack = room_attack
};

/**
 * map_move - moving action in the room.
 * @self: void pointer
 * @direction: direction to move.
 *
 * Return: pointer to next location.
 */
void *map_move(void *self, Direction direction)
{
	Map *map = self;
	Room *location = map->location;
	Room *next = NULL;

	next = location->_(move)(location, direction);
	if (next)
		map->location = next;

	return (next);
}

/**
 * map_attack - attacking action in the room.
 * @self: void pointer
 * @damage: damage amount
 *
 * Return: recursive attacks.
 */
int map_attack(void *self, int damage)
{
	Map *map = self;
	Room *location = map->location;

	return (location->_(attack)(location, damage));
}

/**
 * map_init - initializes the game environment.
 * @self: void pointer
 *
 * Return: 1
 */
int map_init(void *self)
{
	Map *map = self;

	/* make some rooms for a small map */
	Room *hall = NEW(Room, "The great Hall");
	Room *throne = NEW(Room, "The throne room");
	Room *arena = NEW(Room, "The arena, with the minotaur");
	Room *kitchen = NEW(Room, "Kitchen, you have the knife now");

	/* put the bad guy in the arena */
	arena->bad_guy = NEW(Monster, "The evil minotaur");

	/* setup the map rooms */
	hall->north = throne;

	throne->west = arena;
	throne->east = kitchen;
	throne->south = hall;

	arena->east = throne;
	kitchen->west = throne;

	map->start = hall;
	map->location = hall;

	return (1);
}

/* Map prototype */
Object MapProto = {
	.init = map_init,
	.move = map_move,
	.attack = map_attack
};

/**
 * process_input - processes input from player.
 * @game: Map object pointer.
 */
int process_input(Map *game)
{
	printf("\n> ");

	char ch = getchar();
	getchar(); /* catch ENTER */

	int damage = rand() % 4;

	switch (ch)
	{
		case -1:
			puts("Giving up? You suck.");
			return (0);
			break;
		case 'n':
			game->_(move)(game, NORTH);
			break;
		case 's':
			game->_(move)(game, SOUTH);
			break;
		case 'e':
			game->_(move)(game, EAST);
			break;
		case 'w':
			game->_(move)(game, WEST);
			break;
		case 'a':
			game->_(attack)(game, damage);
			break;
		case 'l':
			puts("You can go: ");
			if (game->location->north)
				puts("NORTH");
			if (game->location->south)
				puts("SOUTH");
			if (game->location->east)
				puts("EAST");
			if (game->location->west)
				puts("WEST");
			break;
		default:
			printf("What?: %d\n", ch);
	}

	return (1);
}

int main(void)
{
	/* simple way to setup the randomness */
	srand(time(NULL));

	/* make our map to work with */
	Map *game = NEW(Map, "The Hall of the Minotaur.");

	printf("You enter the ");
	game->location->_(describe)(game->location);

	while (process_input(game))
	{
		/* something is happening in the process_input function */
	}

	return (0);
}
