#include <stdio.h>

/**
 * main - increment and decrement operators
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 1;

	/* increments i, then prints it */
	printf("Pre-Increment: %d\n", ++i);
	/* prints i, then increments it */
	printf("Post-Increment %d\n", i++);
	printf("i = %d\n", i);

	/*Decrements i, then prints it */
	printf("Pre-Decrement: %d\n", --i);
	/* Prints i, then Decrements it */
	printf("Post-Decrement: %d\n", i--);
	printf("i = %d\n", i);

	return (0);
}
