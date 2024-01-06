#include "sort.h"

/**
 * insertion_sort - insertion sort algorithm.
 * @arr: array of data
 * @n: number of elements
 *
 * Description: The sorted array(list) is built one element
 * at a time by moving the current data element past the already
 * sorted values and repeatedly interchanging it with the preceeding
 * value until it is in its correct place.
 */
void insertion_sort(int arr[], int n)
{
	int i, j, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = arr[i];
		j = i - 1;

		while ((tmp < arr[j]) && (j >= 0))
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = tmp;
	}
}
