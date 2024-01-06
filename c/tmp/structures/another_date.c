#include <stdio.h>

/**
 * struct date - date structure
 * @day: today
 * @month: this month
 * @year: this year
 */
struct date
{
	int day;
	int month;
	int year;
};

/**
 * main - illustrates structures
 *
 * Return: 0 (success)
 */
int main(void)
{
	struct date today;

	today.day = 25;
	today.month = 9;
	today.year = 2004;

	printf("Today's date is %d/%d/%.2d.\n", today.day, today.month, today.year % 100);

	return (0);
}
