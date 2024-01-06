#include <stdio.h>

/**
 * main - Formatted printing
 *
 * Description: Broken program to test valgrind.
 * compile the program using command, 'cc ex4.c -o ex4' then.
 * Execute, 'valgrind ./ex4'
 *
 * Return: 0 (success)
 */
int main(void)
{
	int age = 10;
	/* uninitialized variable */
	int height;

	/* break the program on purpose to test valgrind */
	printf("I am %d years old.\n");
	printf("I am %d inches tall.\n", height);

	return (0);
}
