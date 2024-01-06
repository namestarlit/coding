#include <unistd.h>

/**
 * print_char - prints a character
 * @c: character to print
 */
void print_char(char c)
{
	write(1, &c, 1);
}

/**
 * print_alphabet - prints alphabets
 */
void print_alphabet(void)
{
	char c;
	c = 'a';

	while (c <= 'z')
	{
		print_char(c);
		c++;
	}
}

/**
 * main - prints alphabets
 *
 * Return: 0 (success)
 */
int main(void)
{
	print_alphabet();
	print_char('\n');

	return (0);
}
