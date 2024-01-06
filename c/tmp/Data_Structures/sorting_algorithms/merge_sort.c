#include "sort.h"
#define size 1000

/**
 * merge_sort - merge sort sorting algorithm
 * @arr: array of integers
 * @beg: start positon of the array
 * @end: end position of the array
 *
 * Description: Using the divide, conqure, and combine paradigm
 * merge sort algorithm, divides the array and sub-arrays into
 * consecutive two arrays, sorts them and combines them recursively.
 */
void merge_sort(int arr[], int beg, int end)
{
	int mid;

	if (beg < end)
	{
		mid = (beg + end) / 2;

		merge_sort(arr, beg, mid);
		merge_sort(arr, mid +1 , end);
		merge(arr, beg, mid, end);
	}
}

/**
 * merge - implements the merging functionality in the merge_sort algorithm
 * @arr: array of integers
 * @beg: start position of an array
 * @mid: middle position of an array
 * @end: end position of an array
 */
void merge(int arr[], int beg, int mid, int end)
{
	int i = beg, j = mid + 1, index = beg, tmp[size], k;

	while ((i <= mid) && (j <= end))
	{
		if (arr[i] < arr[j])
		{
			tmp[index] = arr[i];
			i++;
		}
		else
		{
			tmp[index] = arr[j];
			j++;
		}
		index++;
	}
	if (i > mid)
	{
		while (j <= end)
		{
			tmp[index] = arr[j];
			j++;
			index++;
		}
	}
	else
	{
		while (i <= mid)
		{
			tmp[index] = arr[i];
			i++;
			index++;
		}
	}
	for (k = beg; k < index; k++)
		arr[k] = tmp[k];
}
