#include "shell.h"

/**
 * take_input - takes input from user
 * @str: input
 *
 * Return: 0 (success), 1 (failure)
 */
int take_input(char *str)
{
	char *buf;

	buf = readline("\n$ ");
	if (strlen(buf) != 0)
	{
		add_history(buf);
		strcpy(str, buf);

		return (0);
	}
	else
	{
		return (1);
	}
}
