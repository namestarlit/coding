#include <stdio.h>

/**
 * main - Fizz Buzz
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 20; i++)
	{
		if (i == 0)
			printf("%d ", i);
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	putchar ('\n');

	return (0);
}
