#include <stdio.h>

/**
 * factorial - computes factorial
 * @i: number to compute
 *
 * Return: factorial
 */
unsigned long long int factorial(unsigned int i)
{
	if (i <= 1)
		return (1);

	return (i * factorial(i -1));
}

/**
 * main - recursion
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned int i;
	printf("Enter a number to compute its factorial: ");
	scanf("%u", &i);

	printf("Factorial of %u is %llu\n", i, factorial(i));

	return (0);
}
