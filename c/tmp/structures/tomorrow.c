#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * typedef struct date - date structure
 * @day: current date
 * @month: current month
 * @year: current year
 */
typedef struct date 
{
	int day;
	int month;
	int year;
}date;

/**
 * main - prints tomorrow's date
 *
 * Return: 0 (success)
 */
int main(void)
{
	date today, tomorrow;
	date *t;

	t = (date *)malloc(sizeof(date));
	if (t == NULL)
	{
		puts ("ERROR! Memory Allocation Failed");
		return (1);
	}

	puts ("This program prints tomorrow's date");
	printf("Enter today's date (dd mm yyyy): ");
	scanf("%d %d %d", &today.day, &today.month, &today.year);

	if ( today.day > 31)
	{
		puts("Find your own universe. You suck");
		return (0);
	}

	/* at any day within a month*/
	if (today.day != no_of_days(today))
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if (today.month == 12) /* end of year */
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else /* end of the month */
	{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}

	printf("Tomorrow's date is %d/%d/%d.\n", tomorrow.day, tomorrow.month, tomorrow.year);

	free(t);

	return (0);
}

/**
 * no_of_days - function to find number of days
 * @d: today struct
 *
 * Return: days
 */
int no_of_days(date d)
{
	int days;

	bool isleapyear (date d)
	
	const int month_days[12] = {
		31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31
	};

	if (isleapyear (d) == true && d.month == 2)
		days = 29;
	else
		days = month_days[d.month - 1];

	return (days);
}

/**
 * isleapyear - function to determine if it's leap year
 * @d: today structure
 *
 * Return: 1 (true), otherwise false
 */
bool isleapyear(date d)
{
	bool leapyear;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))
		leapyear = true;
	else
		leapyear = false;

	return (leapyear);
}
