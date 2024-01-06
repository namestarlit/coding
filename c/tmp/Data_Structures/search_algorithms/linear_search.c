#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches an array linearly
 * @arr: an array to search.
 * @N: size of the array
 * @x: an element to search for.
 *
 * Return: index_of_x, -1 (if value does not exists)
 */
int linear_search(int arr[], int N, int x)
{
	int i = 0;

	for (i = 0; i < N; i++)
	{
		if (arr[i] == x)
			return (i);
	}

	return (-1);
}

/**
 * main - implementantion of linear search algorithm
 * @argc: command-line arguments count
 * @argv: command-line arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int arr[] = {2, 3, 4, 20, 40};
	int result = -1;
	int x = 0;
	int N = sizeof(arr) / sizeof(arr[0]);

	if (argc != 2)
	{
		printf("Usage: ./%s <number_to_search>\n", __FILE__);
		return (1);
	}

	x = atoi(argv[1]);
	result = linear_search(arr, N, x);
	(result == -1)
		? printf("Element is not present in array.\n")
		: printf("Element is present at index %d\n", result);

	return (0);
}
