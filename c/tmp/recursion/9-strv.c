#include <stdio.h>

void strv(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		strv(s + 1);
		putchar(*s);
	}
}

int main(void)
{
	char *s = "hello";

	strv(s);
	putchar('\n');

	return (0);
}
