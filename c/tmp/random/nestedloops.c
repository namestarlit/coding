#include <stdio.h>

/**
 * main - nested loops
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i, j;

	while (i < 5)
	{
		j = 0;

		while (j < 3)
		{
			printf("2  ");
			j++;
		}
		printf("\n");
		i++;
	}

	return (0);
}
