#include <stdio.h>

/**
 * main - nested loop
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i, j;

	while (i < 3)
	{
		j = 0;

		while (j < 10)
		{
			printf("I miss you | ");
			j++;
		}
		printf("\n------------------\n");
		i++;
	}

	return (0);
}
