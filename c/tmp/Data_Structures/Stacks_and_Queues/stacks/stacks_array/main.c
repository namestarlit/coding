#include "stack.h"

/**
 * main - Stacks Operations Implementantion
 *
 * Return: 0 (success)
 */
int main(void)
{
	int val, option;

	do {
		puts("********** MAIN MENU **********");
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
					printf("\nThe Value stored at the top of the stack is: %d", val);
				break;
			case 4:
				display(stack);
				break;
		}

	} while (option != 5);

	return (0);
}
