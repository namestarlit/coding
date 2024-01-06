#include <stdio.h>
#include <string.h>

/**
 * main - reading a file, file I/O demo
 *
 * Return: 0 (success)
 */
int main(void)
{
	FILE *hello = fopen("hello.txt", "r");
	char text[20];

	printf("%s\n", fgets(text, 20, hello));

	fclose(hello);

	return (0);
}
