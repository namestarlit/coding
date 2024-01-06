#include <stdio.h>
//#include <conio.h>

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
	int i, n, tmp, j, arr[1000];

	size = sizeof(arr[1000] / sizeof(int));

	/* Adding elements to the arrray */
	for (i = 0; i < size - 1; i++)
	{
		
	}

	/* bubble sort algorithm iteretation n. */
	for (i = 0; i < size - 1; i++)
	{
		/* bubble sort algorithm iteration n - 1 */
		for (j = 0; j < (size - 1) - i; j++)
		{
			/* Swaping elements */
			if(arr[j] > arr[j + 1])
			{
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	printf("\nThe array sorted in ascending order is: \n");
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
	putchar('\n');

	//getch();
	return (0);
}
