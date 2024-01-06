#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 * isPrime - checks a prime number
 * @n: number to check
 *
 * Return: true (prime), false (not prime)
 */

bool isPrime(int n)
{
	for (int i = sqrt(n); i > 1; i--)
	{
		if ( n % i == 0)
			return false;

		return true;
	}
}

int main(void)
{

	int nu;
	int i;

	scanf("%d", &nu);

	for (i = nu; i > 1; i--)
	{
		bool prime = isPrime(i);
	
		if (prime)
			printf("%d is prime\n", i);
	}

	return (0);
}
