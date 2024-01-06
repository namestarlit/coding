#include <stdio.h>

/**
 * main - testing joe's code
 *
 * Return: 0 (success)
 */
int main(void)
{
	int cstm_choice;

	puts("Welcome!\nPlease choose from the menu below");
	puts("1. chicken pepper soup\n2. Egg toast\n3. Fruit salads");
	puts("4. Cassava ewagarri\n");

	/* scan a customer's choice */
	puts("Enter from 1 - 4 in respect to your menu choice");
	scanf("%d", &cstm_choice);

	if (cstm_choice == 1)
		puts("You selected Chicken pepper soup");
	else if (cstm_choice == 2)
		puts("You selected Egg toast");
	else if (cstm_choice == 3)
		puts("You selected Fruit salads");
	else if (cstm_choice == 4)
		puts("You are a comrade");
	else
		puts("Invalid input!");

	return (0);
}
