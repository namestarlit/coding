#include <stdio.h>
#include <stdlib.h>

/**
 * main - intro to malloc and free
 *
 * Return: 0 (success)
 */
int main(void)
{
	int *tab;

	tab = (int *)malloc(sizeof(int) * 3);
	tab[0] = 98;
	tab[1] = -102;
	tab[2] = 402;

	printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);

	free(tab);

	return (0);
}
