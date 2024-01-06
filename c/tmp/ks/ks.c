#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - ks
 *
 * Return: 0 (success)
 */

int main(void)
{
	char *name;
	char *food;

	name = (char *)malloc(sizeof(name));
	if (name == NULL)
		return (1);

	food = (char *)malloc(sizeof(food));
	if (food == NULL)
		return (1);

	printf("Hi, what's your name?:\n");
	scanf("%s", name);
	getchar();

	printf("Nice to meet you %s\n", name);

	printf("What's your favorite food: ");
	scanf("%s", food);

	printf("\n%s, that's amazing. I would love to try it too\n", food );

	free(name);
	free(food);

	return (0);
}
