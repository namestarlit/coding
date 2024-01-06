#include "sort.h"
#include <stdio.h>

/**
 * main - implementantion of selection sort sorting algorithm
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, n, arr[10];

	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &n);

	printf("\nEnter the elements of the array: ");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	/* Sort elements using selection_sort function */
	selection_sort(arr, n);

	/* Print the sorted array */
	printf("\nThe sorted array is: \n");
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	putchar('\n');

	return (0);
}
