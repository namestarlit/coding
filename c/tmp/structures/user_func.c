#include <stdio.h>
#include <stdlib.h>

/**
 * struct User - user information
 * @name: username
 * @email: useremail
 * @age: user age
 *
 * Description: Takes information of a user
 */
struct User
{
	char *name;
	char *email;
	int age;
};

/**
 * new_user - registers new user
 * @name: user name
 * @email: user email
 * @age: user's age
 *
 * Return: user
 */
struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = (struct User *)malloc(sizeof(struct User));
	if (user == NULL)
		return (NULL);

	user->name = name;
	user->email = email;
	user->age = age;

	return (user);
}

/**
 * main - structure function
 *
 * Return: 0 (success)
 */
int main(void)
{
	struct User *user;

	user = new_user("Paul John", "rainson.work@gmail.com", 22);
	if (user == NULL)
		return (1);

	printf("user %s created!\n", user->name);
	printf("user email is : %s\n", user->email);
	printf("user age: %d\n", user->age);

	return (0);
}
