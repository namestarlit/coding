#include <stdio.h>
#include <string.h>

/**
 * main - reading from file
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char c;
	FILE *file = fopen("mood.txt", "r");

	if (file == NULL)
	{
		perror("File does not exist");
		return (1);
	}

	/* read up to the end of file using a loop */
	while (!feof(file))
	{
		c = fgetc(file);
		printf("%c", c);
	}
	putchar('\n');
	fclose(file);

	return (0);
}
