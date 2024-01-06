#include "stack.h"

/**
 * push - adds an element at the top
 * of the stack
 * @stack: stack array
 * @val: value added
 */
void push(int stack[], int val)
{
	/* check if stack is full */
	if (top == MAXSIZE - 1)
	{
		puts("STACK OVERFLOW");
	}
	else
	{
		/* increment top element to the next element */
		top++;
		stack[top] = val;
	}
}
