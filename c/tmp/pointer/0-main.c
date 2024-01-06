#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the
 * size of char, int, and float
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	printf("Size of 'char': %lu byte(s)\n", sizeof(char));
	printf("Size of 'int': %lu byte(s)\n", sizeof(int));
	printf("Size of 'float': %lu byte(s)\n", sizeof(float));
	printf("Size of variable n: %lu byte(s)\n", sizeof(n));

	return (0);
}
