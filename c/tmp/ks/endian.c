#include <stdio.h>

/**
 * show_mem_rep - shows bytes representantion in memory
 * @start: Pointer to the first memory address
 * @n: size of the element in length
 */
void show_mem_rep(char *start, int n)
{
	int i;

	if (start[0] == 0x67)
	{
		printf("Little Endian Machine\n");
		printf("Last byte of binary representation of the multibyte "
				"data-type is stored first:\n");
	}
	else
	{
		printf("Big Endian Machine\n");
		printf("first byte of binary representation of the multibyte "
				"data-type is stored first:\n");
	}

	/* print the binary representantion */
	for (i = 0; i < n; i++)
		printf(" %.2x", start[i]);
	putchar('\n');
}

/**
 * main - prints the byte representation in memory
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0x01234567;

	printf("The hexadecimal number stored is %x\n", i);

	show_mem_rep((char *)&i, sizeof(i));

	return (0);
}
