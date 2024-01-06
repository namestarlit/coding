#include "hashtables.h"

/**
 * h_division - hash function using division.
 * @k: key parameter
 *
 * Description: hash function implementantion using
 * division method where an integer is divided by
 * a number to get the remainder as an index.
 *
 * Return: index (int)
 */
int h_division(int k)
{
	/* constant prime number */
	int const M = 97;

	return (k % M);
}
