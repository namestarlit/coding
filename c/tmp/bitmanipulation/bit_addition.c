#include <stdio.h>

/**
 * binary_to_decimal - converts binary number to decimal
 * @binary: binary string
 *
 * Return: num
 */
unsigned int binary_to_decimal(const char *binary)
{
	unsigned int num = 0;
	size_t i;

	if (binary == NULL)
		return (0);

	for (i = 0; binary[i] != '\0'; i++)
	{
		if (binary[i] != '0' && binary[i] != '1')
			return (0);
		num <<= 1;

		if (binary[i] == '1')
			num++;
	}
	return (num);
}

/**
 * main - binary addition program
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* char *a, *b;*/
	unsigned int c, d;

	puts("This is a binary addition program");
	/* printf("Enter two binary numbers up to 8 bits: ");
	scanf("%s %s", a, b);*/

	c = binary_to_decimal("1010");
	d = binary_to_decimal("1010");

	printf("%u\n", (c + d));

	return (0);
}
