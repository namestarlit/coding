#include <stdio.h>

/**
 * main - arguments in main()
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 4)
	{
		printf("Nerd! Too much arguments I can't take it\n");
		return (1);
	}
	
	if (argc < 2)
	{
		printf("usage: %s <arguments>\n", argv[0]);
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	putchar('\n');

	return (0);
}
