#include <stdio.h>

/**
 * main - prints value of a string
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a[7] = "School";

	printf("%s\n", a);
	printf("Value of the last char of a: %d\n", a[7]);
	printf("Value of a: %p\n", a);
	printf("Value of \"School\": %p\n", "School");

	return (0);
}
