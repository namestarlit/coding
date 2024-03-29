#include <stdio.h>

/**
 * main - printing different variable types.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int distance = 100;
	float power = 2.245f;
	double super_power = 56789.4532;
	char initial = 'J';
	char first_name[] = "Paul";
	char last_name[] = "John";

	printf("You are %d miles away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("I have an initial %c.\n", initial);
	printf("I have a first name %s.\n", first_name);
	printf("I have a last name %s.\n", last_name);
	printf("My whole name is %s %c. %s.\n",
			first_name, initial, last_name);

	return (0);
}
