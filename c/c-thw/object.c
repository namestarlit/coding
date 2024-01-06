#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "object.h"

/**
 * object_destroy - deletes (frees) an object.
 * @self: void pointer
 */
void object_destroy(void *self)
{
	assert(self != NULL);
	Object *obj = self;

	if (obj)
	{
		if (obj->description)
			free(obj->description);
		free(obj);
	}
}

/**
 * object_describe - describes an object.
 * @self: void pointer
 */
void object_describe(void *self)
{
	assert(self != NULL);
	Object *obj = self;

	printf("%s.\n", obj->description);
}

/**
 * object_init - initializes an object
 * @self: void pointer.
 *
 * Return: 1
 */
int object_init(void *self)
{
	/* Do nothing really */
	assert(self != NULL);
	return (1);
}

/**
 * object_move - moves an object.
 * @self: void pointer.
 * @direction: direction to move
 *
 * Return: NULL
 */
void *object_move(void *self, Direction __attribute__((unused)) direction)
{
	assert(self != NULL);
	printf("You can't go that direction.\n");
	return (NULL);
}

/**
 * object_attack - function to attack an object.
 * @self: void pointer
 * @damage: damage amount caused by an attack.
 *
 * Return: 0
 */
int object_attack(void *self, int __attribute__((unused)) damage)
{
	assert(self != NULL);
	printf("You can't attack that.\n");
	return (0);
}

/**
 * object_new - creates a new object.
 * @size: size of an object.
 * @proto: object prototype.
 * @description: pointer description.
 *
 * Return: new obj (success), NULL (failure)
 */
void *object_new(size_t size, Object proto, char *description)
{
	/* setup default functions if they are not set */
	if (!proto.init)
		proto.init = object_init;
	if (!proto.describe)
		proto.describe = object_describe;
	if (!proto.destroy)
		proto.destroy = object_destroy;
	if (!proto.attack)
		proto.attack = object_attack;
	if (!proto.move)
		proto.move = object_move;

	/* make struct of one size, then "cast" it to another pointer */
	Object *el = calloc(1, size);
	assert (el != NULL);

	*el = proto;

	/* copy the description over */
	assert (description != NULL);
	el->description = strdup(description);

	/* initialize it with init given */
	if (!el->init(el))
	{
		/* Failed to initialize */
		el->destroy(el);
		return (NULL);
	}
	else
	{
		return (el);
	}
}
