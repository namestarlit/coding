#include <stdio.h>

/**
 * b_search - binary search algorithm
 * @array: a sorted array of integers
 * @size: size of the array
 * @item: the value to search for
 *
 * Description: the time complexity of this algorithm is O(log n)
 * i.e. the problem is cut into half of the previos steps, n/2k
 *
 * Return: -1 (Item doesn't exist), index of item
 */
int b_search(int *array, int size, int item)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while (low <= high)
	{
		/* compute the middle index */
		mid = low + (high - low) / 2;

		if (array[mid] == item)
		{
			return (mid);
		}
		else if (array[mid] < item)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}

/**
 * main - an entry point
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	int numbers[] = {3, 6, 8, 12, 21, 36};
	int size = sizeof(numbers) / sizeof(int);
	int item_index;

	item_index = b_search(numbers, size, 21);
	if (item_index > 0)
		printf("index %d -> %d\n", item_index, numbers[item_index]);
	else
		printf("%d\n", item_index);

	return (0);
}
