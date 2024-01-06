#include <stdio.h>

/**
 * f - prints value of a pointer of type int
 * @a: address of an integer to print
 */
void f(int *a)
{
	printf("a: %p\n", a);
}

/**
 * main - Illustrating the array type decay
 *
 * Return: 0 (success)
 */
int main(void)
{
	int *p;
	int t[10];

	/* This works because of the auto implicit convertion to (int *) */
	p = t;

	printf("t: %p\n", t);
	printf("&t[0]: %p\n", &t[0]);
	printf("p: %p\n", p);

	f(t);

	return (0);
}
