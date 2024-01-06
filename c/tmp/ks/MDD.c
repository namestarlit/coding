#include <stdio.h>

/**
 * main - me as a crazy programmer
 *
 * Return: 0 (success)
 */
int main(void)
{
	size_t a = -1;
	int b = ~0;

	if (a == b)
		printf("%lu\t%d\n", a, b);

	return (0);
}
