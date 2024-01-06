#include <stdio.h>

/**
 * main - pointer to a pointer (double pointer)
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x = 10;
	/* @ptr: a pointer to an integer (x) */
	int *ptr = &x;
	/* @ptr2: a pointer to a pointer to an integer (ptr) */
	int **ptr2 = &ptr;

	printf("Value of x: %d\n", x);
	printf("Value of *ptr: %d\n", *ptr);
	printf("Value of **ptr2: %d\n", **ptr2);

	printf("\nAddress of x: %p\n", &x);
	printf("Value of ptr: %p\n", ptr);
	printf("Value of *ptr2: %p\n", *ptr2);
	printf("Address of ptr: %p\n", &ptr);
	printf("Value of ptr2: %p\n", ptr2);
	printf("Address of ptr2: %p\n", &ptr2);

	return (0);
}
