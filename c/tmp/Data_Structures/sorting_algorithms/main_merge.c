#include "sort.h"
#include <stdio.h>
#define size 1000

/**
 * main - implementing merge sort sorting algorithm
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, n, arr[size];

	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &n);

	printf("\nEnter the elements of the array: ");
	for (i = n; i > 0; i--)
	{
		arr[i] = i;
	}

	/* sort the array using merge_sort function */
	merge_sort(arr, 0, n - 1);

	/* print elements of the sorted array */
	printf("\nThe sorted array is: \n");
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	putchar('\n');

	return (0);
}
