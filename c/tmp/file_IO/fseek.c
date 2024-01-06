#include <stdio.h>
#include <string.h>

/**
 * main - fseek() function
 *
 * Return: 0 (success)
 */
int main(void)
{
	char word;
	char text[200];
	int i;

	FILE *file = fopen("mood.txt", "r");
	if (file == NULL)
	{
		perror("File doesn't exist");
		return (1);
	}

	fseek(file, 8, SEEK_SET);
	word = fgetc(file);
	printf("%c\n", word);

	fseek(file, 19, SEEK_CUR);
	word = fgetc(file);
	printf("%c\n", word);

	fseek(file, -8, SEEK_END);

	while (!feof(file))
	{
		word = fgetc(file);
		printf("%c", word);
	}
	putchar('\n');

	i = ftell(file);
	printf("%d\n", i);
	
	fseek(file, 0, SEEK_SET);

	while (!feof(file))
	{
		fscanf(file, "%s", text);
		printf("%s ", text);
	}
	putchar('\n');
	printf("%ld\n", ftell(file));
	
	fseek(file, 0, SEEK_END);
	printf("%ld\n", ftell(file));

	rewind(file);
	printf("%ld\n", ftell(file));

	fclose(file);

	return (0);
}
