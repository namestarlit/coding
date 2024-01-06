#include <stdio.h>

/**
 * bubble_sort - optimized bubble_sort algorithm
 * @arr: array of integers
 * @n: number of elements of an array
 *
 * Description: defines flag which is set to false (0)
 * and set to true (1) if the array is sorted to skip the 
 * redultant comparisons.
 */
void bubble_sort(int *arr, int n)
{
	int i, j, tmp, flag = 0;
	
	/* iterate through the arrray */
	for (i = 0; i < (n - 1); i++)
	{
		/* Iterate through the elements n - i */
		for (j = 0; j < (n - 1) - i; j++)
		{
			/* Compare the values for swaping */
			if (arr[j] > arr[j + 1])
			{
				flag = 1;
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
		if (flag == 0) /* array is sorted */
			return;
	}
}
