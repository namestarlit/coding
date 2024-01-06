#include <stdio.h>

/**
 * some_digit - prints some number
 * @n: input number
 *
 * Return: some digit
 */
unsigned int some_digit(unsigned int n)
{
	/* base case to exit recursion */
	if (n == 0)
		return (0);
	else
		return (n % 10 + some_digit(n / 10));
}

/**
 * main - some digit function
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("some number: %d\n", some_digit(n));

	return (0);
}
