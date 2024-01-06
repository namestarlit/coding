#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary number
 *
 * Return: converted value, 0 (success)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	/* iterate through the characters of string b */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* check if current char in 'b' is a valid binary number */
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/* left shift val by 1 bit */
		val <<= 1;

		/* check if char is string b is 1, and add 1 to val */
		if (b[i] == '1')
			val++;
	}
	return (val);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    printf("%u\n", binary_to_uint("1011"));
    printf("%u\n", (n + binary_to_uint("1011")));

    return (0);
}
