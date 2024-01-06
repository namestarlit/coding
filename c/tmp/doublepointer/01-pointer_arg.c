#include <stdio.h>

/**
 * change_ptr - change value of pointer
 * @ptr: a pointer to be changed
 *
 * Description: takes a double pointer as an argument and
 * change the value of the original pointer 'ptr' to point
 * to a new integer 'y'
 */
void change_ptr(int **ptr)
{
	int y = 20;
	/* *ptr == &ptr, so it changes the address stored in ptr */
	*ptr = &y;
}

/**
 * main - illustrates passing pointers as argument to function
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x = 10;
	int *ptr = &x;

	printf("Value of x: %d\n", x);
	printf("Value of *ptr: %d\n", *ptr);
	
	/* @&ptr: address of pointer ptr */
	change_ptr(&ptr);

	printf("\nValue of x after function call: %d\n", x);
	printf("Value of *ptr after function call: %d\n", *ptr);

	return (0);
}
