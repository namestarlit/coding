#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *mood = NULL;
	size_t len = 0;

	puts("Enter your mood: ");
	if (getline(&mood, &len, stdin) == -1)
	{
		perror("Error reading input.\n");
		exit(EXIT_FAILURE);
	}

	printf("Your mood is: %s\n", mood);

	free(mood);

	return (0);
}
