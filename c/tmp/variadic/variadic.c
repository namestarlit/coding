#include <stdio.h>
#include <stdarg.h>

/**
 * sum - sums numbers times y
 * @x: number of arguments
 * @y: the number to multiply
 *
 * Return: (sum * y)
 */
int sum(int x, int y, ...)
{
	va_list numbers;

	va_start(numbers, y);

	int i, sum = 0;

	for (i = 0; i < x; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum * y);
}

/**
 * main - variadic functions
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("%d \n", sum(3, 4, 5, 6, 4));

	return (0);
}
