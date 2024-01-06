#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

/**
 * main - structures
 *
 * Return: 0 (success)
 */
int main(void)
{
	struct User user;

	user.name = "Paul John";
	user.email = "rainson.work@gmail.com";
	user.age = 22;

	printf("username: %s\n", user.name);
	printf("useremail: %s\n", user.email);
	printf("user age: %d\n", user.age);

	return (0);
}
