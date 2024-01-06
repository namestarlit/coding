#include "shell.h"

/**
 * exec_args_piped - executes pipped system commands
 * @parsed: parsed command
 * @parsed_pipe: parsed pipe command
 */
void exec_args_piped(char **parsed, char **parsed_pipe)
{
	/* 0 is read end,1 is write end */
	int pipe_fd[2];
	pid_t p1, p2;

	if (pipe(pipe_fd) < 0)
	{
		puts("Pipe could not be initialized");
		return;
	}

	p1 = fork();

	if (p1 < 0)
	{
		puts("Could not fork");
		return;
	}

	if (p1 == 0)
	{
		/**
		 * child 1 executing...
		 * It only needs to write at the write end
		 */
		close(pipe_fd[0]);
		dup2(pipe_fd[1], STDOUT_FILENO);
		close(pipe_fd[1]);

		if (execvp(parsed[0], parsed) < 0)
		{
			puts("Coudl not execute command 1...");
			exit(0);
		}
		else
		{
			/* parent executing */
			p2 = fork();

			if (p2 < 0)
			{
				puts("Could not fork");
				return;
			}

			/**
			 * child 2 exectuting ...
			 * it only needs to read at the read end
			 */
			if (p2 == 0)
			{
				close(pipe_fd[0]);
				dup2(pipe_fd[0], STDIN_FILENO);
				close(pipe_fd[0]);

				if (execvp(parsed_pipe[0], parsed_pipe) < 0)
				{
					puts("Could not execute command 2...");
					exit(0);
				}
				else
				{
					/**
					 * parent executing...
					 * waiting for the children
					 */
					wait(NULL);
					wait(NULL);
				}
			}
		}
	}
}
