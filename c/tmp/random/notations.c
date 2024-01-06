#include <stdio.h>

/**
 * main - notations
 *
 * Return: 0 (success)
 */

int main(void)
{
	double dogs = 2.5e6; /* hardcoding : ( */

	printf("How many dogs do you have?:");
	scanf("%lf", &dogs);

	/**
	 * Format Identifiers/ notations
	 *
	 * %f - decimal notation
	 * %e - scientific notation
	 * %g - computer decides
	 */

	printf("%f\n%e\n%g\n", dogs, dogs, dogs);

	return (0);
}
