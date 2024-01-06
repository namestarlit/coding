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

/**
 * main - linked stack implementantion
 *
 * Return: 0 (success)
 */
int main(void)
{
	int val, option;

	do {
		puts("\n\n********** MAIN MENU **********");
		puts("1. PUSH");
		puts("2. POP");
		puts("3. PEEK");
		puts("4. DISPLAY");
		puts("5. EXIT");

		printf("Enter your option: ");
		fscanf(stdin, "%d", &option);

		switch (option)
		{
			case 1:
				printf("\nEnter the number to be pushed on stack: ");
				fscanf(stdin, "%d", &val);
				top = push(top, val);
				break;
			case 2:
				top = pop(top);
				break;
			case 3:
				val = peek(top);
				if (val != -1)
					printf("\nThe value at the top of the stack is: %d", val);
				else
					printf("\nSTACK IS EMPTY");
				break;
			case 4:
				top = display(top);
				break;
		}

	} while (option != 5);

	return (0);
}
