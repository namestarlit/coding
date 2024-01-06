#include <stdio.h>

/**
 * main - prints triangle
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 10;i++)
	{
		for (k = i; k >= 0; k--)
			printf("* ");
		putchar('\n');
	}

	return (0);
}
