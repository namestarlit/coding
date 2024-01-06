#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: prints numbers from 0 to 14
 * ten times
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				putchar((ch / 10) + 48);
			putchar((ch % 10) + 48);
		}
		putchar('\n');
	}

	return (0);
}
