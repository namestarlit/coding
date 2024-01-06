#include "stack.h"

/**
 * display - displays all elements of a stack
 * @stack: stack array
 */
void display(int stack[])
{
	int i;

	/* check if stack is empty */
	if (top == -1)
	{
		puts("STACK IS EMPTY");
	}
	else
	{
		/* Loop through all elements of a stack */
		for (i = top; i > 0; i--)
		{
			printf("%d", stack[i]);
			putchar('\n');
		}
	}
}
