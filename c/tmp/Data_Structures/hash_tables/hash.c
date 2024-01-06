#include "hashtables.h"
#include <stdio.h>

/**
 * main - implementantion of hash functions
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* hash by divison method */
	printf("%d\n", h_division(1234));
	printf("%d\n", h_division(5462));

	/* hash by multiplication method */
	printf("%d\n", h_multiplication(1234));
	printf("%d\n", h_multiplication(5462));

	return (0);
}
