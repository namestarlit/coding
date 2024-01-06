#include "arithmetic.h"

/**
 * main - illustrates arithmetic operations
 * using functions
 *
 * Return: 0 (success)
 */
int main(void)
{
	int operation;
	double x, y;

	puts("This application performs arithmetic operations..");
	puts("Enter the number of operation to perform: ");
	puts("1. +\n2. -\n3. *\n4. /\n5. %\n6. x^y");
	scanf("%d", &operation);

	printf("Enter the two numbers respectively: ");

	/* if (operation == '5' || operation == '6')
		scanf("%d %d", &x, &y);
	else
		scanf("%lf %lf", &x, &y); */
	scanf("%lf %lf", &x, &y);

	switch (operation)
	{
		case 1:
			printf("%g\n", add(x, y));
			break;
		case 2:
			printf("%g\n", sub(x, y));
			break;
		case 3:
			printf("%g\n", mul(x, y));
			break;
		case 4:
			printf("%g\n", div(x, y));
			break;
		case 5:
			printf("%d\n", mod((int)x, (int)y));
			break;
		case 6:
			printf("%u\n", _pow((unsigned int)x, (unsigned int)y));
			break;
		default:
			puts("Invalid operation");
	}

	return (0);
}
