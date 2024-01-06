#include "functions.h"
#include <stdio.h>

/**
 * sum - adds two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: sum
 */
int sum(int a, int b)
{
	return (a + b);
}

/**
 * main - adding two numbers using a function
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x;

	x = sum(2, 4);

	printf("%d \n", x);

	return (0);
}
