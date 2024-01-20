#include <stdio.h>
#include <limits.h>

/**
 * find_max - finds the maximum interger in an array
 * @array: an array of integers
 * @len: the length of the array
 *
 * Description: The time complexity of this algorithm is O(n).
 * i.e. it grows with the increasing size of the input (length of the array)
 *
 * Return: max int
 */
int find_max(int *array, size_t len)
{
	int max = INT_MIN;
	size_t i = 0;

	for (i = 0; i < len; i++)
	{
		/* compare the integers */
		if (max < array[i])
		{
			max = array[i];
		}
	}

	return (max);
}

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int array[] = {23, 45, 13, 25, 2, 80};
	size_t len = sizeof(array) / sizeof(int);
	int max = INT_MIN;

	max = find_max(array, len);
	printf("Max Integer: %d\n", max);

	return (0);
}
