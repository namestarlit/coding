#include <stdio.h>

/**
 * max - maximum value
 * @num1: first number
 * @num2: second number
 *
 * Return: return max (success)
 */

int max(int num1, int num2);

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 100;
	int b = 200;
	int ret;

	/* calling a function */

	ret = max(a, b);

	printf("Max value is : %d\n", ret);

	return (0);
}

/**
 * max - maximum number
 * @num1: first number
 * @num2: second number
 *
 * Description: Finds the max number between two numbers
 * Return: maximum number (success)
 */

int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return (result);
}
