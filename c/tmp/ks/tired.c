#include <stdio.h>
#include <stdbool.h>

/**
 * main - expressing my feeling right now
 *
 * Return: 0 (success)
 */
int main(void)
{
	bool is_tired;
	int input;

	puts(" Enter 1 for true, 0 for false ");
	printf("Are you tired? ");
	scanf("%d", &input);

	is_tired = input;

	if (is_tired == true)
	{
		puts("Do the extra and rest : )");
		puts("Remember the little 'Extra', is the 'Extra' in the 'Extraordinary'");
	}
	else
	{
		puts("If you have energy to spare, keep going");
	}
	return (0);
}
