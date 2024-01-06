#include <stdio.h>
#include <stdlib.h>

/**
 * struct bio - bio info about user
 * @user: user name
 * @htown: user hometown
 * @prof: - user profession
 * @age: user's age
 *
 * Description: registers user's bio info
 */
typedef struct bio
{
	char *user;
	char *htown;
	char *prof;
	int age;
}bio;

/**
 * new_bio - function to register user bio
 * @user: user name
 * @htown: user hometown
 * @prof: user proffession
 * @age: user's age
 */
bio *new_bio(char *user, char *htown, char *prof, int age)
{
	bio *_bio;

	_bio = (bio *)malloc(sizeof(bio));
	if (_bio == NULL)
		return (NULL);

	_bio->user = user;
	_bio->htown = htown;
	_bio->prof = prof;
	_bio->age = age;

	return (_bio);
}

/**
 * main - structures
 *
 * Return: 0 (success)
 */
int main(void)
{
	bio *user;

	user = new_bio("Paul John", "Mwanza", "Software Engineer", 22);
	if (user == NULL)
		return (1);
	printf("user: %s\n", user->user);
	printf("hometown: %s\n", user->htown);
	printf("Proffession: %s\n", user->prof);
	printf("age: %d\n", user->age);

	return (0);
}
