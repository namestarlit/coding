#include <stdio.h>

/**
 * swap - swap values
 * @x: 1st argument
 * @y: 2nd argument
 *
 * Description: swaps values of formal parameters
 */

void swap(int x, int y);

/**
 * main - entry point
 *
 * Return: always 0 (seccess)
 */

int main(void)
{
	int a = 100;
	int b = 200;

	printf("Before swap, value of a : %d\n", a);
	printf("Before swap, value of b : %d\n", b);

	/* calling a function swap value */

	swap(a, b);

	printf("After swap, value of a: %d\n", a);
	printf("After swap, value of b: %d\n", b);

	return (0);
}

/**
 * swap - swap values
 * @x: 1st argument
 * @y: 2nd argument
 *
 * Description: swaps values of formal parameters
 */

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}
