#include "sort.h"
#include <stdio.h>
# define size 5

/**
 * main - implementantion of insertion sort algorithm
 *
 * Return: 0 (success)
 */
int main(void)
{
	int arr[size], i, n;

	/* Initialize the size of the array */
	printf("\nEnter the number of elements in the array: ");
	scanf("%d", &n);

	/* Enter the elements of the array */
	printf("\nEnter the elements of the array; ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	/* use insertion_sort function to sort the array */
	insertion_sort(arr, n);

	printf("\nThe sortd array is: \n");
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	putchar('\n');

	return (0);
}
