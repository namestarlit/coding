#include <stdio.h>

/**
 * main - nested loop
 *
 * Return: always 0 (seccess)
 */

int main(void)
{
	int i, j;

	while (i < 5)
	{
		j = 0;

		while (j < 6)
		{
			printf("Hello Holla ");
			j++;
		}

		printf("\nAdios Chao\n");
		i++;
	}

	return (0);
}
