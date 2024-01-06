#include <stdio.h>
#include <stdlib.h>

/**
 * main - intro to malloc and free
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 3);
	str[0] = 'O';
	str[1] = 'k';
	str[2] = '\0';

	printf("%s\n", str);

	free(str);

	return (0);
}
