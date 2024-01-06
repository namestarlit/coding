#include <stdio.h>

/**
 * main - says hello to C
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: __attribute__((unused)) is for suppressing the
 * error: unused varibles when warnings are treated as errors.
 *
 * Return: 0 (success)
 */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
	puts("Hello, C!");
	printf("C is fun!\n");

	return (0);
}
