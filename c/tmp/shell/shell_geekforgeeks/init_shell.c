#include "shell.h"

/**
 * init_shell - Greeting message of the shell
 */
void init_shell(void)
{
	puts("\n\n**********************************************");
	puts("\n\n\t***** MY SHELL *****");
	puts("\n\n\t-USE AT YOUR OWN RISK-");
	puts("\n\n**********************************************");

	char *username = getenv("USER");

	printf("\n\n\nUSER is: @%s", username);
	putchar('\n');

	sleep(1);
	clear();
}
