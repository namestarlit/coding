#include <stdio.h>

/**
 * main - pointers and double pointers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
		"Alan", "Frank",
		"Mary", "John", "Lisa"
	};
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	for (i = 0; i < count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	puts("---");

	/* set pointers to start of arrays */
	int *cur_age = ages;
	char **cur_names = names;

	for (i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n",
				*(cur_names + i), *(cur_age + i));
	}
	puts("---");

	/* using pointers in a crazy complex way */
	for (cur_names = names, cur_age = ages;
			(cur_age - ages) < count;
			cur_names++, cur_age++)
	{
		printf("%s lived %d years so far.\n",
				*cur_names, *cur_age);
	}

	return (0);
}
