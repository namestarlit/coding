#include <stdio.h>
#include "dbg.h"
#include "ex22.h"


int THE_SIZE = 1000;
static int THE_AGE = 37;

/**
 * get_age - gets the age.
 *
 * Return: age
 */
int get_age()
{
	return (THE_AGE);
}

/**
 * set_age - sets the age
 * @age: age value.
 */
void set_age(int age)
{
	THE_AGE = age;
}

/**
 * update_ratio - updates ratio.
 * @new_ratio - new ratio value
 *
 * Return: old_ratio
 */
double update_ratio(double new_ratio)
{
	static double ratio = 1.0;
	double old_ratio = ratio;
	ratio = new_ratio;

	return (old_ratio);
}

/**
 * print_size - prints the size.
 */
void print_size()
{
	log_info("I think size is: %d", THE_SIZE);
}
