#include <stdio.h>

/**
 * main - more data types and some math.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int bugs = 100;
	double bug_rate = 1.2;
	long universe_of_defects;
	double expected_bugs;
	double part_of_universe;
	char null_byte = '\0';
	int care_percentage;

	printf("You have %d bugs at the imaginary rate of %f.\n",
			bugs, bug_rate);

	universe_of_defects = 1L * 1024L * 1024L * 1024L;
	printf("The entire universe has %ld bugs.", universe_of_defects);

	expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

	part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n",
			part_of_universe);

	/* This makes no sense just a demo of something weird */
	care_percentage = bugs * null_byte;
	printf("Which means you should care %d%%.\n", care_percentage);

	return (0);
}
