#include <stdio.h>

/**
 * main - demonstrates a dict implementantion in c
 *
 * Return: 0 (success)
 */
int main(void)
{
	Dict *title;
	const char *user;

	title = dictCreate();
	dictSet(title, "Barack", "President");
	user = "Barack";

	printf("Welcome %s %s\n", dictGet(title, user), user);

	return (0);
}
