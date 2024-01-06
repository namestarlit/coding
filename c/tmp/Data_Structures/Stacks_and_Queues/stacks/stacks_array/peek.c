#include "stack.h"

/**
 * peek - returns the topmost element of the stack
 * @stack: stack array
 *
 * Return: top element of the stack
 */
int peek(int stack[])
{
	/* check if stack is empty */
	if (top == -1)
	{
		puts("STACK IS EMPTY");
		return (-1);
	}
	else
	{
		return (stack[top]);
	}
}
