#include <stdio.h>

/**
 * main - prints ASCII value of a character
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	printf("ASCII value of %c = %d\n", c, c);

	return (0);
}
