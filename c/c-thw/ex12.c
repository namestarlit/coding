#include <stdio.h>

/**
 * main - working with conditional statements.
 * @argc: command-line arguments count
 * @argv: command-line arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
	{
		puts("You only have one argument!. You suck.");
	}
	else if (argc > 1 && argc < 4)
	{
		puts("Here is your arguments:");

		for (i = 0; i < argc; i++)
			printf("- %s\n", argv[i]);
		putchar('\n');
	}
	else
	{
		puts("You have too many arguments. You suck");
	}

	return (0);
}
