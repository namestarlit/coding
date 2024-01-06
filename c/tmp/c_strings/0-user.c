#include <stdio.h>

/**
 * main - user login
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int password; 

	if (argc != 2)
	{
		printf("USAGE: 0-user <your name>\n");
		return (-1);
	}
	else
	{

		printf("\nWelcome, %s\n", argv[1]);
		printf("Please enter your password to log in\n");

		do
		{
			scanf("%d", &password);
			getchar();
			if (password != 1234)
				printf ("Invalid Password, Try again\n");
		}while (password != 1234);

		if (password == 1234)
			printf("Log in successful \\o/\n");
	}
	getchar();

	return (0);
}
