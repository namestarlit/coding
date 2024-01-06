#include <stdio.h>

/**
 * main - prints the address of an array
 *
 * Return: 0 (success)
 */
int main(void)
{
	char b[98];

	printf("b: %p\n", b);
	printf("&b: %p\n", &b);

	return (0);
}
