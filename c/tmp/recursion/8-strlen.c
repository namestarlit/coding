#include <stdio.h>

/**
 * main - computes lenght of a string
 *
 * Return: 0 (success)
 */
int main(void)
{
	char str[] = "Hello, World!";
	int i, strl;

	strl = 0;

	for (i = 0; str[i] != '\0'; i++)
		++strl;

	printf("String length: %d\n", strl);

	return (0);
}
