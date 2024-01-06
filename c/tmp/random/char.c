#include <stdio.h>

/**
 * main - ASCII values
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ASCII, math;
	int x;

	printf("Enter a character: ");
	scanf("%c", &ASCII);
	printf("Character %c ASCII value: %d\n", ASCII, ASCII);

	printf("Enter an integer between 0 - 127: ");
	scanf("%d", &x);
	printf("Integer %d ASCII value: %c\n", x, x);

	/* maths with ASCII */
	math = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", math, math);

	return (0);
}
