#include <stdio.h>

/**
 * max - find the maximum integer in an array
 * @num_array: an array of integers
 * @size: the size of the array
 *
 * Description: The time complexity of the this function is
 * liner time complexity, O(n) - depends on the size/length
 * of the array
 *
 * Return: max integer
 */
int max(int num_array[], size_t size)
{
	int n;
	int max_num = 0;

	/* check if array is NULL or size is negative integer or zero */
	if (num_array == NULL || size <= 0)
		return (-1);

	/* Iterate the array to find the max integer */
	for (n = 0; n < (int)size; n++)
	{
		if (num_array[n] > max_num)
		{
			max_num = num_array[n];
		}
	}

	return (max_num);
}


/**
 * main - entry function
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num[] = {2, 4, 8, 20, 45};
	size_t size = sizeof(num) / sizeof(int);
	int max_num = 0;

	max_num = max(num, size);
	printf("%d\n", max_num);

	return (0);
}
