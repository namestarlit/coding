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
		for (i = top; i >= 0; i--)
		{
			printf("%d", stack[i]);
			putchar('\n');
		}
	}
}

/**
 * main - Stacks Operations Implementantion
 *
 * Return: 0 (success)
 */
int main(void)
{
	int val, option;

	do {
		puts("\n********** MAIN MENU **********");
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
				printf("\n Enter the number to be pushed on stack: ");
				fscanf(stdin, "%d", &val);
				push(stack, val);
				break;
			case 2:
				val = pop(stack);
				if (val != -1)
					printf("\nThe value deleted from the stack is: %d", val);
				break;
			case 3:
				val = peek(stack);
				if (val != -1)
					printf("\nThe Value stored at the top of the stack is: %d\n", val);
				break;
			case 4:
				display(stack);
				break;
		}

	} while (option != 5);

	return (0);
}
