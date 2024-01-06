#include <stdio.h>

/**
 * main - testing double pointers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a = 3;

	int *ptr, **pptr;

	ptr = &a;
	pptr = &ptr;

	printf("The value of a: %d\n ", a);
	printf("The value of ptr: %p\n", ptr);
	printf("The value of pptr: %p\n", pptr);
	printf("The value of *ptr: %d\n", *ptr);
	printf("The value of *pptr: %p\n", *pptr);
	printf("The value of **pptr: %d\n", **pptr);

	return (0);
}
