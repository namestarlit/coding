#include <stdio.h>
#include <stdlib.h>

/**
 * main - file operations
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *mood = NULL;
	size_t len = 0;

	FILE *file = fopen("open.txt", "w");
	if (file == NULL)
	{
		perror("Failed to open file");
		return (-1);
	}

	if (getline(&mood, &len, stdin) == -1)
	{
		perror("Error reading input.\n");
		exit(EXIT_FAILURE);
	}

	fprintf(file, "%s", mood);

	fclose(file);
	free(mood);

	return (0);
}
