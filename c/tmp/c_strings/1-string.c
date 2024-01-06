#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - storing strings
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *name;
	int size;

	printf("How many characters will be your name?:");
	scanf("%d", &size);
	getchar();

	name = (char *)malloc(sizeof(char) * size);
	if (name == NULL)
		return (-1);

	fgets(name, size + 1, stdin);

	printf("\nYour name is: %s\n, name");

	free(name);

	return (0);
}
