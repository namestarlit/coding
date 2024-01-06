#include <stdio.h>

/**
 * main - making my life harder this weekend
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	size_t i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	putchar('\n');

	return (0);
}
