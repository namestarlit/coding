#include "sort.h"

/**
 * selection_sort - selection sort sorting algorithm
 * @arr: array of data
 * @n: number of elements in an array
 *
 * Description: Finds the smallest element in an array
 * and place it in the first position of the array. Then
 * finds the second smallest value and place it in the second
 * position, and repeat the procedure until the entire array
 * is sorted.
 */
void selection_sort(int arr[], int n)
{
	int k, pos, tmp;
	
	for (k = 0; k < n; k++)
	{
		/* Get the smallest value in the array. */
		pos = smallest(arr, k, n);

		/* Swap the value with the position arr[k] */
		tmp = arr[k];
		arr[k] = arr[pos];
		arr[pos] = tmp;
	}
}

/**
 * smallest - Finds the smallest element in the array
 * @arr: array of elements
 * @k: index of the smallest element
 * @n: number of elements in an array
 *
 * Return: pos (position of the smallest element)
 */
int smallest(int arr[], int k, int n)
{
	int pos = k, small = arr[k], i;

	for (i = k + 1; i < n; i++)
	{
		if (arr[i] < small)
		{
			small = arr[i];
			pos = i;
		}
	}
	return (pos);
}
