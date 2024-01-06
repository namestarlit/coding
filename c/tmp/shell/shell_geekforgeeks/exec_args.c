#include "shell.h"

/**
 * exec_args - executes system commands
 * @parsed: parsed command
 */
void exec_args(char **parsed)
{
	/* Forking a child */
	pid_t pid = fork();

	if (pid == -1)
	{
		printf("Failed forking child...\n");
		return;
	}
	else if (pid == 0)
	{
		if (execvp(parsed[0], parsed) < 0)
		{
			printf("Could not execute command...\n");
		}
		exit(0);
	}
	else
	{
		/* Waiting for child to terminate */
		wait(NULL);
		return;
	}
}
