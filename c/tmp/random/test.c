#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

void print_numbers(void)
{
	int numbers[8] = {0,1,3,5,6,7,8,9};
	int i;

	for (i = 0; i < 9; i++)
		putchar(numbers[i]);
	putchar('\n');
}

int main(void)
{
	print_numbers();
}

