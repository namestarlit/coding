#include <stdio.h>

/**
 * main - prints size of pointer in byte
 *
 * Return: 0 (success)
 */
int main(void)
{
	int *p;

	printf("Size of pointer 'p': %lu byte(s)\n", sizeof(p));

	return (0);
}
