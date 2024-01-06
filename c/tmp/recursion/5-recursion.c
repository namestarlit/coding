#include <stdio.h>

/**
 * fibonacci - prints fibonacci series
 * @n: initial number
 *
 * Description: Fibonacci series is a sequence of numbers
 * in which each number is the sum of the previous two numbers
 *
 * Return: fibonacci series
 */
unsigned long long int fibonacci(unsigned long int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (fibonacci(n-1) + fibonacci(n-2));
}

/**
 * main - recursion in action
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int i, n;

	printf("Enter the last nth element of the fibonacci series between 0 - 40: ");
	scanf("%lu", &n);

	for (i = 0; i < n; i++)
	{
		printf("%llu ", fibonacci(i));
	}
	putchar('\n');

	return (0);
}
