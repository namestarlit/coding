#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct Person - structure of Person's data
 * @name: Person's name
 * @age: Person's age
 * @height: Person's height
 * @weight: Person's weight
 */
struct Person
{
	char *name;
	int age;
	int height;
	int weight;
};

/**
 * person_create - creates a person data schema
 * @name: person's name
 * @age: person's age
 * @height: person's height
 * @weight: perosn's weight
 *
 * Return: who (pointer to struct Person named who)
 */
struct Person *person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));

	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return (who);
}

/**
 * person_destroy - deletes person's data structure
 * @who: pointer to person's data structure
 */
void person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

/**
 * person_print - prints person's data
 * @who: pointer to person's data struct
 */
void person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
	putchar('\n');
}

/**
 * main - working with structs and pointer to them.
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* make two people structures */
	struct Person *joe = person_create("Joe Alex", 32, 64, 140);
	struct Person *frank = person_create("Frank Blank", 20, 72, 180);

	/* print them out and where they live in memory */
	printf("%s is at memory location: %p\n", joe->name, (void *)joe);
	person_print(joe);

	printf("%s is at memory location: %p\n", frank->name, (void *)frank);
	person_print(frank);

	/* make everyone age 20 years and print them again */
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	person_print(joe);

	frank->age += 20;
	frank->weight += 20;
	person_print(frank);

	/* destroy them both so we clean up */
	person_destroy(joe);
	person_destroy(frank);

	return (0);
}
