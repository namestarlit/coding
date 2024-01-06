#include <stdio.h>

/**
 * main - storing address of variable into pointer
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);

	return (0);
}
