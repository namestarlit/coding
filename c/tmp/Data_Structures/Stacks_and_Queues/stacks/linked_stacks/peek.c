#include "linked_stack.h"

/**
 * peek - returns the topmost element of the linked stack
 * @top: topmost node of the linked stack
 *
 * Return: top element
 */
int peek(stack *top)
{
	/* check empty stack */
	if (top == NULL)
	{
		return (-1);
	}
	else
	{
		return (top->data);
	}
}
