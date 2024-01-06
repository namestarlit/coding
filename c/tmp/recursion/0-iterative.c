#include <stdio.h>

/**
 * factorial - calculates factorial of a number
 * @n: number to compute
 *
 * Return: res (factorial)
 */
int factorial(int n)
{
	int res;
	int i;

	res = 1;
	i = 1;

	while (i <= n)
	{
		res *= i;
		i++;
	}

	return (res);
}

/**
 * main - factorial of a number
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
