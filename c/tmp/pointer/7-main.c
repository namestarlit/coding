#include <stdio.h>

/**
 * modif_my_param - set the int to 402
 * @m: a pointer, the integer int, to set to 402
 */
void modif_my_param(int *m)
{
	printf("Value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);

	*m = 402;
}

/**
 * main - change value of variable from outside the function
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 98;

	printf("Value of 'n' before the call: %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);

	modif_my_param(p);

	printf("Value of 'n' after the call: %d\n", n);

	return (0);
}
