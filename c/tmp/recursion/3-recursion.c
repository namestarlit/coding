#include <unistd.h>

/**
 * print_char - prints character
 * @c: character to print
 */
void print_char(char c)
{
	write(1, &c, 1);
}

/**
 * print_letters_from - prints all letters from a specific letter
 * @c: initial letter
 */
void print_letters_from(char c)
{
	if (c > 'z')
		return;

	print_char(c);
	print_letters_from(c + 1);
}

/**
 * print_alphabet - prints alphabets
 */
void print_alphabet(void)
{
	print_letters_from('a');
}

/**
 * main - prints alphabets using recursion
 *
 * Return: 0 (success)
 */
int main(void)
{
	print_alphabet();
	print_char('\n');
}
