#ifndef __OBJECT_H__
#define __OBJECT_H__

/**
 * enum Direction - typedef for direction data type
 * @NORTH: North direction
 * @SOUTH: South direction
 * @EAST: East direction
 * @WEST: West direction
 */
typedef enum Direction
{
	NORTH, SOUTH, EAST, WEST
} Direction;

/**
 * struct Object - Object prototype
 * @description: object description
 * @init: pointer to init function.
 * @describe: pointer to describe function.
 * @destroy: pointer to destroy function.
 * @move: pointer to move function.
 * @attack: pointer to attack function.
 */
typedef struct Object
{
	char *description;
	int (*init)(void *self);
	void (*describe)(void *self);
	void (*destroy)(void *self);
	void *(*move)(void *self, Direction direction);
	int (*attack)(void *self, int damage);
} Object;

int object_init(void *self);
void object_describe(void *self);
void object_destroy(void *self);
void *object_move(void *self, Direction direction);
int object_attack(void *self, int damage);
void *object_new(size_t size, Object proto, char *description);

#define NEW(T, N) object_new(sizeof(T), T##Proto, N)
#define _(N) proto.N

#endif /* __OBJECT_H__ */
