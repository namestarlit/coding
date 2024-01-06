#include <stdio.h>

/**
 * main - testing the size of an array and how it works.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char name[4] = "Paul";
	char *null = NULL;

	printf("%s\n", name);
	/* print the null terminator ('\0') at index 4 */
	printf("%c\n", name[4]);
	printf("%lu bytes\n", sizeof(name));

	/* printing NULL will return a segfault */
	printf("%s\n", null);

	return (0);
}
