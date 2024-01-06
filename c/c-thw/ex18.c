#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
#include <string.h>

/**
 * die - a function to terminate a program on error
 * @message: error message
 */
void die(const char *message)
{
	if (errno)
		perror(message);
	else
		printf("ERROR: %s\n", message);
	exit(1);
}

/**
 * typedef compare_db - a function pointer type
 * @a: 1st parameter
 * @b: 2nd parameter
 */
typedef int (*compare_cb)(int a, int b);

/**
 * bubble_sort - a classic bubble sort function.
 * @numbers: a pointer to numbers
 * @count: total count of numbers
 * @cmp: comparison function
 *
 * Description: uses the compare function
 * to sort the numbers.
 *
 * Return: sorted numbers
 */
int *bubble_sort(int *numbers, int count, compare_cb cmp)
{
	int temp = 0;
	int i = 0;
	int j = 0;
	int *target = malloc(count * sizeof(int));

	if (!target)
		die("Memory error!");
	memcpy(target, numbers, count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		for (j = 0; j < count - 1; j++)
		{
			if (cmp(target[j], target[j + 1]) > 0)
			{
				temp = target[j + 1];
				target[j + 1] = target[j];
				target[j] = temp;
			}
		}
	}

	return (target);
}

/**
 * sorted_order - sorts numbers in ascending order
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: -ve int if a < b, else +ve int.
 */
int sorted_order(int a, int b)
{
	return (a - b);
}

/**
 * reverse_order - sorts numbers in descending order
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: -ve int if b < a, else +ve int.
 */
int reverse_order(int a, int b)
{
	return (b - a);
}

/**
 * strange_order - sorts numbers in a strange order
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: 0 (if a or b is equal to 0), else a remainder of (a / b).
 */
int strange_order(int a, int b)
{
	if (a == 0 || b == 0)
		return (0);
	else
		return (a % b);
}

/**
 * test_sorting - test sorting and printing numbers list.
 * @numbers: pointer to numbers
 * @count: the count of numbers
 * @cmp: comparison function
 */
void test_sorting(int *numbers, int count, compare_cb cmp)
{
	int i = 0;
	int *sorted = bubble_sort(numbers, count, cmp);

	if (!sorted)
		die("Failed to sort as required.");

	for (i = 0; i < count; i++)
		printf("%d ", sorted[i]);
	putchar('\n');

	/* Function pointer evil, type casting */
	unsigned char *data = (unsigned char *)cmp;
	for(i = 0; i < 25; i++)
		printf("%02x:", data[i]);
	printf("\n");

	free(sorted);
}

/**
 * main - bubble sort implementation
 * @argc: command-line arguments count
 * @argv: command-line arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
		die("Usage: ex18 num_1 num_2 num_3, ...");

	int count = argc - 1;
	int i = 0;
	char **inputs = argv + 1;

	int *numbers = malloc(count * sizeof(int));

	if (!numbers)
		die("Memory error!");

	for (i = 0; i < count; i++)
		numbers[i] = atoi(inputs[i]);

	test_sorting(numbers, count, sorted_order);
	test_sorting(numbers, count, reverse_order);
	test_sorting(numbers, count, strange_order);

	return (0);
}
