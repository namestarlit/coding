#include <stdio.h>
#include <stdarg.h>

/**
 * average - a variadic function to calculate average of numbers.
 * @count: total count of arguments.
 *
 * Return: average (double)
 */
double average(int count, ...)
{
	va_list numbers;	/* variable arguments list variable */
	int i;
	double sum = 0;

	/* variable arguments start, takes va_list and the last named param */
	va_start(numbers, count);
	for (i = 0; i < count; i++)
		/**
		 * va_arg used to access all the variadic parameters
		 * one at a time
		 */
		sum += va_arg(numbers, int);
	/* cleans up va_list and all the resources used */
	va_end(numbers);

	return (sum / count);
}

/**
 * main - using variadic function average.
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("%f\n", average(3, 4, 8, 10));

	return (0);
}
