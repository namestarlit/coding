#include <stdio.h>

/**
 * main - pointers arithmetic
 *
 * Return: 0 (success)
 */
int main(void)
{
	int *p;
	int a[2];
	int n;

	p = &n;

	printf("p = &n;\np: %p\n", p);
	printf("p + 1: %p\n", (p + 1));
	printf("p + 2: %p\n", (p + 2));
	printf("p + 3: %p\n", (p + 3));

	/**
	 * possible since a is elevated as
	 * an int * in this context
	 */
	p = a;

	printf("p = a;\np: %p\np + 1: %p\n", p, (p + 1));

	return (0);
}
