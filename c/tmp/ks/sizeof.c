#include <stdio.h>

/**
 * main - sizeof() and data types
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'p';
	int i = 40;
	float f = 40.5f;
	long double d = (63750.52 * 32);

	/**
	 * the size of a data type is the same in respect
	 * to a machine it's on (32-bit or 64-bit machine
	 * but the value doesn't matter only the limit of bits
	 * does.
	 */
	printf("This prints the size of data types:\n");
	printf("size of character %d: %lu byte(s)\n", c, sizeof(c));
	printf("size of an integer %i : %lu byte(s)\n", i,  sizeof(i));
	printf("size of a float %.2f: %lu byte(s)\n", f, sizeof(f));
	printf("size of a double %Lf: %lu byte(s)\n", d,  sizeof(d));

	return (0);
}

