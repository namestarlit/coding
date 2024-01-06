#include "hashtables.h"

/**
 * h_multiplication - hash function using multiplication
 * @k: key parameter
 *
 * Description: hash function implementantion using
 * multiplication method where h(x) = m (kA % 1).
 * where m is number of indeces of a hash table.
 * k is the key, and A is any number such that 0 < A < 1.
 *
 * Return: index (int)
 */
int h_multiplication(int k)
{
	int const m = 1000;
	float const A = 0.618033;

	return (int)(m * (k * A - (int)(k * A)));
}
