#include <stdio.h>
#include <stdlib.h>

/**
 * m - stores 3 intss in a new allocated space
 * @n0: 1st number to store and print
 * @n1: 2st number to store and print
 * @n2: 3st number to store and print
 */
void m(int n0, int n1, int n2)
{
	int *t;
	int sum;

	t = (int *)malloc(sizeof(*t) * 3);
	t[0] = n0;
	t[1] = n1;
	t[2] = n2;

	sum = t[0] + t[1] + t[2];

	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);

	free(t);
}

/**
 * main - intro to malloc and free
 *
 * Return: 0 (success)
 */
int main(void)
{
	m(98, 402, -1024);

	return (0);
}
