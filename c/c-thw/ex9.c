#include <stdio.h>

/**
 * main - Arrays and strings.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	/* print them out raw */
	printf("numbers: %d, %d, %d, %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);

	/* setup numbers */
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	/* setup name */
	name[0] = 'P';
	name[1] = 'a';
	name[2] = 'u';
	name[3] = 'l';
	name[4] = '\0';

	printf("numbers: %d, %d, %d, %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n",
			name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);

	/* another way to use name */
	/* Warning: ISO C90 forbids mixed declarations and code */
	char *another = "Paul";

	printf("another: %s\n", another);
	printf("another each: %c %c %c %c\n",
			another[0], another[1],
			another[2], another[3]);

	return (0);
}
