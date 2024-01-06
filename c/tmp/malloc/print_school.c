#include <stdio.h>

/**
 * print_school - prints "Holbertoon"
 */
void print_school(void)
{
	char str[] = "Holbertoon";

	str[0] = 'S';

	printf("%s\n", str);
}

/**
 * main - concept introduction
 *
 * Return: 0 (success)
 */
int main(void)
{
	print_school();

	return (0);
}
