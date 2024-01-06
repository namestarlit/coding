#include <stdio.h>
#include "sort.h"

/**
 * main - demonstrates bubble sort algorithm
 *
 * Description: The complexity of bubble sort algorithm
 * is o(n²). Since all elements of the array have to be
 * compared to each irrespective element in the data array
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, n, arr[10];
	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &n); /* scan the size of the array/number of elements. */
	printf("\nEnter the elements: ");

	/* Adding elements to the arrray */
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	bubble_sort(arr, n);

	printf("\nThe array sorted in ascending order is: \n");
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	putchar('\n');

	return (0);
}
