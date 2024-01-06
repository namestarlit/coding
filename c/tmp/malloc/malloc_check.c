#include <stdio.h>
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
	int i;

	while(1)
	{
		s = (char *)malloc(INT_MAX);

		if (s == NULL)
		{
			printf("Can't allocate %d bytes after %d calls\n", INT_MAX, i);

			return (1);
		}
		s[0] = 'H';
		i++;
	}

	return (0);
}
