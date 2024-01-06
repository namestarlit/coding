#include <stdio.h>

/**
 * main - pointer to a pointer
 *
 * Return: 0 (success)
 */
int main(void)
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;
	ptr = &var;
	pptr = &ptr;

	printf("Value of var: %d\n", var);
	printf("Value of *ptr: %d\n", *ptr);
	printf("Value of **pptr: %d\n", **pptr);
	printf("Value of *pptr & address of ptr: %p\n", *pptr);

	return (0);
}
