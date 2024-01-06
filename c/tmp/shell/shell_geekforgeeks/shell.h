#ifndef __SHELL_H__
#define __SHELL_H__

/*** Standard Libraries ***/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

/*** constants ***/

#define SIZE 1024
/* Max number of letters to be supported */
#define MAXCOM 1000
/* Max number of commads to be supported */
#define MAXLIST 100

/* Clearing the shell using escape sequence */
#define clear() printf("\033[H\033[J")

/*** Function prototypes ***/

void init_shell(void);
int take_input(char *str);
void print_dir(void);
void exec_args(char **parsed);
void exec_args_piped(char **parsed, char **parsed_pipe);
void open_help(void);
int cmd_handler(char **parsed);
int parse_pipe(char *str, char **stripped);
void parse_space(char *str, char **parsed);
int process_string(char *str, char **parsed, char **parsed_pipe);


#endif /* __SHELL_H__ */
