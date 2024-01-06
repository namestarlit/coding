#include <stdio.h>

/**
 * main - working with arrays of strings using while loop.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0; /* Initialize variable i to 0 */

	while (i < argc)
	{
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4;

	i = 0; /* initialize variable i to 0 */

	while (i < num_states)
	{
		printf("state %d: %s\n", i, states[i]);
		i++;
	}

	return (0);
}
