#include <stdio.h>
#include <stdlib.h>

/**
 * main - illustration of malloc()
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n, i, *ptr;

	printf("Enter total number of values: ");
	scanf("%d", &n);

	/**
	 * Use malloc() to dynamically allocate memory
	 * to store integers. malloc() return void*
	 * so, cast it to return pointer to an int
	 * i.e. (int *)malloc()
	 */
	ptr = (int *)malloc(n * sizeof(int));

	puts("Enter the values:");

	for (i = 0; i < n; i++)
	{
		/**
		 * We do not use address-of operator (&), on pointers
		 * because they store addresses of memory location
		 * in memory block
		 * (ptr + i) is pointer arithmetic
		 */
		scanf("%d", (ptr + i));
	}
	puts("\nThe Entered values are: ");

	for (i = 0; i < n; i++)
	{
		/**
		 * We use dereference operator (*)
		 * to print the value the values stored
		 * in the addresses stored in pointer (ptr + i)
		 */
		printf("%d ", *(ptr + i));
	}
	/* Free memory allocated in heap after use */
	free(ptr);

	putchar('\n');
	getchar();

	return (0);
}
