#include <stdio.h>

/**
 * main - password check
 *
 * Return: 0 (success)
 */

int main(void)
{
	int passwd;

	do {
		printf("Enter Password: ");
		scanf("%d", &passwd);

		if (passwd == 123)
			printf("\nWelcome to the loops\n");

	}while(passwd != 123);

	return (0);
}
