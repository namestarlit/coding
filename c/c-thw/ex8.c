#include <stdio.h>

/**
 * main - sizes and arrays
 *
 * Return: 0 (success)
 */
int main(void)
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Paul";
	char full_name[] = {
		'P', 'a', 'u', 'l',
		' ', 'J', '.', ' ',
		'J', 'o', 'h', 'n', '\0'
	};

	printf("The size of an int: %lu bytes\n", sizeof(int));
	printf("The size of areas (int[]): %lu bytes\n", sizeof(areas));
	printf("The number of ints in areas: %lu\n",
			sizeof(areas) / sizeof(int));
	printf("The first area is %d, the 2nd is %d\n", areas[0], areas[1]);
	printf("The size of a char: %lu byte\n", sizeof(char));
	printf("The size of name (char[]): %lu bytes\n", sizeof(name));
	printf("The number of chars: %lu\n", sizeof(name) / sizeof(char));
	printf("The size of full name (char[]): %lu bytes\n",
			sizeof(full_name));
	printf("The number of chars in full name: %lu\n",
			sizeof(full_name) / sizeof(char));
	printf("name: \"%s\" and full name: \"%s\"\n", name, full_name);

	return (0);
}
