#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

/**
 * main - pointer to structure
 *
 * Return: 0 (success)
 */
int main(void)
{
	struct User user;
	struct User *ptr;

	ptr = &user;

	/* Dereferencing the pointer before we access the data with '.' symbol */
	(*ptr).name = "Paul John";

	/*Using the '->' works same and is easy to use */
	ptr->email = "rainson.work@gmail.com";
	ptr->age = 22;

	printf("username: %s\n", ptr->name);
	printf("useremail: %s\n", ptr->email);
	printf("user age: %d\n", ptr->age);

	return (0);
}
