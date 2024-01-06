#include <stdio.h>

/**
 * sum - sums two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: sum
 */
int sum(int a, int b)
{
	int sum = a + b;
	return (sum);
}

/**
 * main - illustrates function pointers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int s;

	/* pointer to a function declaration and initialization */
	int (*ptr)(int a, int b) = &sum;

	s = (*ptr)(2, 3);
	printf("sum = %d\n", s);

	/* this too works fine */
	/*int (*ptr)(int a, int b) = sum;

	s = ptr(2, 3);
	printf("sum = %d\n", s);*/

	return (0);
}
