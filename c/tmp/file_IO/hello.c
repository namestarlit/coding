#include <stdio.h>

/**
 * main - file I/O demo
 *
 * Return: 0 (success)
 */
int main(void)
{
	/**
	 * declare file pointer using FILE structure
	 * use fopen() function to open the file,
	 * pass in filename and mode
	 */
	FILE *hello = fopen("hello.txt", "w");

	/**
	 * this is file processing, printing to the file
	 * pass in the pointer to the file
	 */
	fprintf(hello, "%s", "Hello, World!");

	/* you must close your file after opening it, pass file pointer name */
	fclose(hello);

	return (0);

}
