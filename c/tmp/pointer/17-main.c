#include <stdio.h>

/**
 * main - pointer arithmetic
 *
 * Return: 0 (success)
 */
int main(void)
{

	int a[5];
	int *p;
	int *p2;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398;
	*(a + 4) = 498;

	p = a + 1;
	printf("p = a + 1;\np: %p\n", p);
	printf("p = a + 2;\np: %p\n", (a + 2));

	*p = 98;
	printf("Value of *p: %d\n", *p);

	p2 = a + 3;
	printf("p2 = a + 3;\np2: %p\n", p2);

	*p2 = *p + 1337;
	printf("Value of *p2: %d\n", *p2);

	printf("p + 1;\np: %p\n", (p + 1));

	return (0);
}
