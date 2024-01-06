#include "linked_stack.h"

/**
 * main - linked stack implementantion
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
