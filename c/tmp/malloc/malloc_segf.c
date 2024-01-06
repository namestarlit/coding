#include <stdlib.h>
#include <limits.h>

/**
 * main - intro to malloc and free
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *s;

	while(1)
	{
		s = malloc(INT_MAX);
		s[0] = 'H';
	}

	return (0);
}
