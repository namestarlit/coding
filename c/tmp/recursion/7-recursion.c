#include <stdio.h>

/**
 * print - prints something
 * @nb: input number
 *
 * Return: n
 */
int print(int n)
{
	if (n < 0)
		return (0);
	printf("%d", n + print(n -1));
	n--;

	return (n);
}

/**
 * main - some function
 *
 * Return: 0 (success)
 */
int main(void)
{
	print(4);
	putchar('\n');
	
	return (0);
}
