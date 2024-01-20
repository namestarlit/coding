#include <stdio.h>
#include <stdbool.h>

/**
 * contains_duplicates - checks for duplicate values in an array
 * @array: an array of integers
 * @len: the length of the array
 *
 * Description: The time complexity of this algorithm is O(n^2)
 * i.e. it increases at the square of the lenght of an input (n)
 *
 * Return: 1 (True), 0 (False)
 */
bool contains_duplicates(const int *array, size_t len)
{
	size_t i = 0, j = 0;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (i != j && array[i] == array[j])
			{
				return (1);
			}
		}
	}

	return (0);
}

/**
 * faster_contains_duplicates - finds duplicated integers in an array
 * @array: an array of integers
 * @len: length of the array
 *
 * Description: An optimized version of an algorithm to find duplicates
 * in an array of integers. It runs fewer operations by cutting down the
 * comparisons. The time complexity is still in the class of O(n^2)
 *
 * Return: 1 (True), 0 (False)
 */
bool faster_contains_duplicates(const int *array, size_t len)
{
	size_t i = 0, j = 0;

	for (i = 0; i < len - 1; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (array[i] == array[j])
			{
				return (1);
			}
		}
	}

	return (0);
}

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int array[] = {20, 67, 20, 34, 5};
	int array_2[] = {1, 2, 3, 4, 5};

	size_t len = sizeof(array) / sizeof(int);

	printf("%d\n", contains_duplicates(array, len));
	printf("%d\n", contains_duplicates(array_2, len));

	printf("%d\n", faster_contains_duplicates(array, len));

	return (0);
}
