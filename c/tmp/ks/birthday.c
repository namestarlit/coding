#include <stdio.h>
#include "birthday.h"

/**
 * main - her birthday
 *
 * Return: 0 (success)
 */
int main(void)
{
	birthday naomi;
	naomi.day = 25;
	naomi.month = 1;
	naomi.year = 2023;

	int i;

	if (naomi.day == 25 && naomi.month == 1)
	{
		for (i = 0; i < 10; i++)
		{
			printf("----------------\n");
			printf("Happy Birthday!\n");
			printf("________________\n");
		}
		putchar('\n');
	}

	return (0);
}
