#include "linked_stack.h"

/**
 * display - displays elements of a linked stack
 * @top: top node of the linked stack
 *
 * Return: top
 */
stack *display(stack *top)
{
	stack *ptr;

	ptr = top;

	/* check for empty linked stack */
	if (top == NULL)
	{
		printf("\nSTACK IS EMPTY");
	}
	else
	{
		while (ptr != NULL)
		{
			printf("\n%d ", ptr->data);
			ptr = ptr->next;
		}
	}
	return (top);
}
