#include <stdio.h>

/**
 * main - Illustrating double pointer
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n = 123;
	int *ptr = &n;
	int **pptr = &ptr;

	/* Possible ways to access value of variable n */
	printf("\nValue of n: %d\n", n);
	printf("Value of n using *ptr: %d\n", *ptr);
	printf("Value of n using **pptr: %d\n", **pptr);

	/* Possible ways to access address of n */
	printf("\nAddress of n: %p\n", &n);
	printf("Address of n using ptr: %p\n", ptr);
	printf("Addresss of n using *pptr: %p\n", *pptr);

	/* Accessing value of pointer ptr */
	printf("\nValue of ptr: %p\n", ptr);
	printf("Value of ptr using *pptr: %p\n", *pptr);

	/* Ways to access address of pointer ptr */
	printf("\nAddrress of ptr: %p\n", &ptr);
	printf("Address of ptr using pptr: %p\n", pptr);

	/*Double pointer (pptr) value and address */
	printf("\nValue of pptr: %p\n", pptr);
	printf("Address of pptr: %p\n", &pptr);

	return (0);
}
