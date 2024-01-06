#include <stdio.h>

/**
 * main - switch statements.
 * @argc: command-line argument count
 * @argv: command-line argument vector
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 2)
	{
		printf("ERROR: You need one argument.\n");
		return (1);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		char letter = argv[1][i];

		switch (letter)
		{
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				break;
			case 'e':
			case 'E':
				printf("%d: 'E'\n", i);
				break;
			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				break;
			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				break;
			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				break;
			case 'y':
			case 'Y':
				/* It's only sometimes 'Y' */
				if (i > 2)
					printf("%d: 'Y'\n", i);
				break;
			default:
				printf("%d: %c is not a vowel\n", i, letter);
		}
	}

	return (0);
}
