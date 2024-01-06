#include <stdio.h>

/**
 * factorial - computes factorial using recursion
 * @n: number to compute
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

/**
 * main - recursion method factorial
 *
 * Return: 0 (success)
 */
int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);

	return (0);
}
