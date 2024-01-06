#include <stdio.h>

/**
 * sum - adds two numbers
 * @a: 1st number
 * @b: 2nd number
 */
void sum(int a, int b)
{
	printf("Sum = %d\n", (a + b));
}

/**
 * sub - subtracts two numbers
 * @a: 1st number
 * @b: 2nd number
 */
void sub(int a, int b)
{
	printf("result = %d\n", (a - b));
}

/**
 * display - callback function 
 * @ptr: function pointer
 * @a: 1st number
 * @b: 2nd number
 */
void display(void (*ptr)(int a, int b))
{
	(*ptr)(5, 1);
}

/**
 * main - illustrates callback function
 *
 * Return: 0 (success)
 */
int main(void)
{
	display(&sum);
	display(&sub);

	return (0);
}
