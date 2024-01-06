#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

/**
 * main - string to bit
 * 
 * Return: 0 (success)
*/
int main(void)
{
	char name[MAX_SIZE];
	size_t i;

	fgets(name, MAX_SIZE, stdin);
	int size = strlen(name);

	for (i = 0; i < size; i++)
	{
		printf("%c->%b ", name[i], name[i]);
	}
	putchar('\n');
	return (0);
}