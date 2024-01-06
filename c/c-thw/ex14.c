#include <stdio.h>
#include <ctype.h>

/* Function Prototypes */
int can_print_it(char ch);
void print_letters(char arg[]);

/**
 * print_arguments - prints command-line arguments.
 * @argc: command-line arguments count
 * @argv: command-line arguments vector
 */
void print_arguments(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		print_letters(argv[i]);
}

/**
 * print_letters - prints alphabets or blank
 * @arg: array of characters
 */
void print_letters(char arg[])
{
	int i = 0;

	for (i = 0; arg[i] != '\0'; i++)
	{
		char ch = arg[i];

		if (can_print_it(ch))
			printf("'%c' == %d ", ch, ch);
	}
	putchar('\n');
}

/**
 * can_print_it - checks if a character is an alphabet or blank
 * @ch: character to test
 *
 * Return: 1 (true), 0 (false)
 */
int can_print_it(char ch)
{
	return (isalpha(ch) || isblank(ch));
}

/**
 * main - prints command-line arguments
 * @argc: command-line arguments count
 * @argv: command-line arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	print_arguments(argc, argv);

	return (0);
}
