#include <stdio.h>

/**
 * modif_my_char_var - modifies char type variables
 * @cc: pointer type char
 * @ccc: variable type char
 */
void modif_my_char_var(char *cc, char ccc)
{
	printf("\nValue of cc: %p\n", cc);
	printf("Value of cc before modification: %c\n", *cc);
	printf("Value of ccc before modification: %c\n", ccc);

	*cc = 'o';
	ccc = 'l';


	printf("\nValue of cc after modification: %c\n", *cc);
	printf("Value of ccc after modification: %c\n", ccc);
}

/**
 * main - pointers in functions, value type and reference type assignment
 * to parameters
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Value of c before fuction call: %c\n", c);
	printf("value of p: %p\n", p);

	modif_my_char_var(p, c);

	printf("Value of c after fuction call: %c\n", c);

	return (0);
}
