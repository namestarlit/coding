#include "linked_stack.h"

/**
 * pop - removes the topmost element of the linked stack
 * @top: linked stack
 *
 * Return: top node
 */
stack *pop(stack *top)
{
	stack *ptr;

	ptr = top;

	/* linked stack empty */
	if (top == NULL)
	{
		perror("STACK UNDERFLOW");
	}
	/* delete the topmost node */
	else
	{
		top = top->next;
		printf("The value being deleted is: %d", ptr->data);
		free(ptr);
	}
	return (top);
}
