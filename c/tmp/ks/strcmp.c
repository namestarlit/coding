#include <stdio.h>
#include <string.h>

/**
 * main - demonstrates how `strcmp` function works.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	int result = strcmp(str1, str2);

	if (result == 0)
		printf("The strings are equal\n");
	else if (result < 0)
		printf("%s is less than %s\n", str1,str2);
	else
		printf("%s is greater than %s\n", str1, str2);

	/* Print return value of strcmp */
	printf("%d\n", result);

	return (0);
}
