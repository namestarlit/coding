#include <stdio.h>
#include <string.h>

/**
 * main - file I/O program
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	FILE *file = fopen("mood.txt", "a+");

	if (file == NULL)
	{
		perror("Failed to open file");
		return (1);
	}

	if (argc < 2)
	{
		printf("usage: %s <start writing>\n", argv[0]);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		fprintf(file, "%s ", argv[i]);
	}
	return (0);
}
