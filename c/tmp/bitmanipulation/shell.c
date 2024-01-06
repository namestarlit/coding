#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *command = NULL;
	size_t len = 0;


	while (1)
	{
		printf("$ ");
		getline(&command, &len, stdin);
		/* remove the trailing new line character */
		char *strk = strtok(command, "\n");
		char *argv[] = {strk, NULL};

		execve(argv[0], argv, NULL);
	}
	free(command);
	return (0);
}
