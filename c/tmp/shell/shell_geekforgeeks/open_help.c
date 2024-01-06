#include "shell.h"

/**
 * open_help - help command built-in
 */
void open_help(void)
{
	puts(
		"\n**WELCOME TO MY SHELL HELP**"
		"\nCopyright @Whatever Dev"
		"\n-Use the shell at your own risk..."
		"\nList of Commands Supported:"
		"\n>cd"
		"\n>ls"
		"\n>exit"
		"\n>all other general commands available in UNIX Shell"
		"\n>pipe handling"
		"\n>improper space handling"
	    );
}
