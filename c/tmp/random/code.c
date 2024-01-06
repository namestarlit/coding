#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: prints numbers from 0 to 14
 * ten times
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i, j;

	/**
	 * This is the numbers of times to print the numbers
	 * which makes it the numbers of times to repeat the
	 * inside loop
	 */

	for (i = 0; i < 10; i++)
	{
		/**
		 * This is the numbers to be printed
		 * from 0 to 14
		 */

		for (j = 0; j < 15; j++)
		{
			/**
			 * if j is greater than 9
			 * meaning from 10 to 14
			 * prints only the first digit
			 */

			if (j >= 10)
			{
				/**
				 * j divide by 10 gives the 
				 * first digit
				 * adding 48 makes it 
				 * ascii value
				 *
				 * i.e 10 / 10 = 1
				 * 1 + 48 = 49 = 1 ascii value
				 * inserting 1 in putchar() won't print 1
				 * it has to be ascii value 49
				 */

				putchar((j / 10) + 48);
			}

			/**
			 * j modulo 10 gives the
			 * last digit.
			 * adding 48 makes it
			 * ascii value
			 *
			 * i.e 10 % 10 remains 0
			 * 0 + 48 = 48 = 0 ascii value
			 * now putchar will print 0
			 *
			 * remember first in the previous loop
			 * it printed 1, now 0 is printed
			 * that makes it 10
			 */

			putchar((j % 10) + 48);
		}
		/*Inserts a new line
		 * after all the inside loops
		 * are done, and repeats 
		 * 10 times
		 */

		putchar('\n');
	}

	return (0);
}
