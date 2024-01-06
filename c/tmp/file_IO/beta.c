#include <stdio.h>
#include <stdlib.h>

/**
 * main - writing to a file from stdin
 * Description: Dynamically allocating
 * memory for an input string from stdin
 * and writing it to a file until I hit EOF (CTRL-D)
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* pointer to input string */
	char *mood = NULL;
	/* initial size of input string */
	size_t input_size = 0;
	/* number of bytes read from input */
	ssize_t bytes_read;
	
	/* So I won't overwrite the file */
	FILE *file = fopen("beta.txt", "a+");
	if (file == NULL)
	{
		perror("Failed to open file");
		exit(EXIT_FAILURE);
	}


	/* loop the scaning and memory allocation */
	while ((bytes_read = getline(&mood, &input_size, stdin)) != EOF)
	{
		if (bytes_read == -1)
		{
			perror("Error reading input.");
			exit(EXIT_FAILURE);
		}

		fprintf(file, "%s", mood);

		mood = (char *)realloc(mood, input_size);
	}

	free(mood);
	fclose(file);

	return (0);

}
