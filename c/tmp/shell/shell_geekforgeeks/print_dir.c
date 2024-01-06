#include "shell.h"

/**
 * print_dir - prints current directory
 */
void print_dir(void)
{
	char cwd[SIZE];

	getcwd(cwd, sizeof(cwd));
	printf("\nDir: %s", cwd);
}
