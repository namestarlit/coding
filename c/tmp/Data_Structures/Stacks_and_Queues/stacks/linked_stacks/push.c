#include "linked_stack.h"

/**
 * push - adds an element at the top of the linked stack
 * @top: topmost node
 * @val: value in the node
 *
 * Return: top
 */
stack *push(stack *top, int val)
{
	stack *ptr;

	ptr = (stack *)malloc(sizeof(stack));
	if (ptr == NULL)
	{
		perror("Failed to allocate memory");
		exit(EXIT_FAILURE);
	}

	/* assign value to .data */
	ptr->data = val;

	/* linked stack is empty */
	if (top == NULL)
	{
		ptr->next = NULL;
		top = ptr;
	}
	/* linked stack is not empty */
	else
	{
		ptr->next = top;
		top = ptr;
	}
	return (top);
}
