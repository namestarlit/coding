#include <stdio.h>
#include <stdlib.h>

/**
 * typedef struct date - date structure
 * @day: day of the year
 * @month: month of the year
 * @year: year
 */
typedef struct date
{
	int day;
	int month;
	int year;
}date;

/**
 * main - illustrates structures
 *
 * Return: 0 (success)
 */
int main(void)
{
	date today;
	date *t;

	t = (date *)malloc(sizeof(date));
	if (t == NULL)
	{
		puts("Error! Memory allocation failed!!");
		return (1);
	}

	t->day = 17;
	t->month = 1;
	t->year = 2023;

	printf("Today's date is %d-%d-%d.\n", t->year, t->month, t->day);

	if (t->month == 1 && t->day == 17)
		puts("Happy Birthday Evana \\o/");

	free(t);

	return (0);
}
