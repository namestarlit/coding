#include <stdio.h>

/**
 * main - creates and prints an array of chars
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a[6];

	*a = 'S';
	*(a + 1) = 'c';
	*(a + 2) = 'h';
	*(a + 3) = 'o';
	*(a + 4) = 'o';
	a[5] = 'l';

	printf("%c%c%c%c%c%c\n", a[0], a[1], a[2], a[3], a[4], a[5]);

	return (0);
}
