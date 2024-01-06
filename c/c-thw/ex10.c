#include <stdio.h>

/**
 * main - array of strings
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Description: To run this program pass arguments to it.
 * i.e. './ex10 argument "another one" 4'
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	/* Go through each string in argv */
	for (i = 0; i < argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);
	}

	/* make an array of strings */
	/* Warning: ISO C90 forbids mixed declarations and code */
	char *cities[] = {
		"Mwanza", "Arusha",
		"Dar es Salaam", "Mbeya"
	};

	int num_cities = 4;

	for (i = 0; i < num_cities; i++)
		printf("city %d: %s\n", i, cities[i]);

	return (0);
}
