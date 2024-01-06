#include <stdio.h>
#include <stdlib.h>

/**
 * main - intro to malloc and free
 *
 * Return: 0 (success)
 */
int main(void)
{
	while(1)
	{
		(char *)malloc(sizeof(char) * 1024);
		/* I dare you to remove the break statement */
		break;
	}

	return (0);
}
