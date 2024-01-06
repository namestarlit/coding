#include <stdio.h>

#define MAXSIZE 10

/* a stack array */
int stack[MAXSIZE];
/* initialize empty stack at -1 */
int top = -1;

/**
 * push - adds an element at the top
 * of a stack
 * @value: int value added
 */
void push(int value)
{
	/* check if full */
	if (top >= MAXSIZE - 1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		/* increment top index */
		top++;
		/* add value at top stack index */
		stack[top] = value;
	}
}

/**
 * pop - removes an element from the top
 * of a stack
 *
 * Return: value (popped value)
 */
int pop(void)
{
	/* check if stack is empty */
	if (top <= -1)
	{
		printf("Stack Underflow\n");
		return (-1);
	}
	else
	{
		/* assign to value the top element in a stack */
		int value = stack[top];
		/* decrement the index */
		top--;
		return (value);
	}
}

/**
 * main - stacks implementantion
 * and operations
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* adding element at the top of the stack */
	push(10);
	push(20);
	push(30);

	/* removing elements from the top of the stack */
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	/* stack underflow */
	printf("%d\n", pop());

	push(40);
	push(50);
	push(60);
	push(70);

	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());

	return (0);
}
