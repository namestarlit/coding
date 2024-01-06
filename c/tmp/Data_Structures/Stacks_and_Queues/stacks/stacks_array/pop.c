#include "stack.h"

/**
 * pop - removes an element from the top
 * of the stack
 * @stack: stack array
 *
 * Return: val (removed value), -1 (underflow)
 */
int pop(int stack[])
{
	int val;

	/* check if stack is empty */
	if (top == -1)
	{
		puts("STACK UNDERFLOW");
		return (-1);
	}
	else
	{
		val = stack[top];
		/* decrement top value to the next value */
		top--;
		return (val);
	}
}
