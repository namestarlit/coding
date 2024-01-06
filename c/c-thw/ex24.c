#include <stdio.h>
#include "dbg.h"

#define MAX_DATA 100

/**
 * enum EyeColor - enumerates eyes colors
 * @BLUE_EYES - Blue eyes color
 * @GREEN_EYES - Green color eyes
 * @BROWN_EYES - Brown color eyes
 * @BLACK_EYES - Black color eyes
 * @OTHER_EYES - Other color eyes
 */
typedef enum EyesColor
{
	BLUE_EYES, GREEN_EYES, BROWN_EYES,
	BLACK_EYES, OTHER_EYES
} EyeColor;

const char *EYES_COLOR_NAMES[] = {
	"Blue", "Green", "Brown", "Black", "Other"
};

/**
 * struct Person - Person info data structure
 * @age: person's age
 * @first_name: person's first name
 * @last_name: person's last name
 * @eyes: person's eyes
 * @income: person's income
 */
typedef struct Person
{
	int age;
	char first_name[MAX_DATA];
	char last_name[MAX_DATA];
	EyeColor eyes;
	float income;
} Person;

/**
 * main - demonstration of input and output functions.
 *
 * Return: 0 (success), -1 (failure)
 */
int main(void)
{
	Person you = {.age = 0};
	int i = 0;
	char *in = NULL;

	printf("What's is your First Name? ");
	in = fgets(you.first_name, MAX_DATA - 1, stdin);
	check(in != NULL, "Failed to read first name.");

	printf("What's your Last Name? ");
	in = fgets(you.last_name, MAX_DATA - 1, stdin);
	check(in != NULL, "Failed to read last name");

	printf("How old are you? ");
	int rc = fscanf(stdin, "%d", &you.age);
	check(rc > 0, "YOu have to enter a number.");

	printf("What color are your eyes:\n");
	for (i = 0; i <= OTHER_EYES; i++)
		printf("%d) %s\n", i + 1, EYES_COLOR_NAMES[i]);
	printf("> ");

	int eyes = -1;
	rc = fscanf(stdin, "%d", &eyes);
	check(rc > 0, "You have to enter a number.");

	you.eyes = eyes - 1;
	check(you.eyes <= OTHER_EYES && you.eyes >= 0,
			"Do it right, that's not an option.");

	printf("How much do you make an hour? ");
	rc = fscanf(stdin, "%f", &you.income);
	check(rc > 0, "Enter a floating point number,");

	printf("----------RESULTS----------\n");

	printf("First Name: %s", you.first_name);
	printf("Last Name: %s", you.last_name);
	printf("Age: %d\n", you.age);
	printf("Eyes: %s\n", EYES_COLOR_NAMES[you.eyes]);
	printf("Income: %f\n", you.income);

	return (0);

error:
	return (-1);
}
