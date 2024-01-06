#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int mai(void)
{
	foo();
	getchar();

	return (0);
}

void foo()
{
	printf("foo called");
}
