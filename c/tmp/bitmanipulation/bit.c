#include <stdio.h>

/**
 * main - bit manipulation
 * Description: Manipulating integers at bit level
 * using bitwise operators (&, |, ^, ~, <<, >>)
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c;

	a = 25;
	b = 30;

	/**
	 * Bitwise AND operator returns 1 when both values
	 * are 1 and 0 otherwise
	 */
	c = a & b;
	printf("a & b is\t %d\n", c);

	/** 
	 * Bitwise OR operator returns 1 if either a or b contains
	 * 1, and 0 when both values are 0
	 */
	c = a | b;
	printf("a | b is\t %d\n", c);

	/**
	 * Bitwise NOT operator returns a negative value
	 * which is a 2's compliment of binary numbers
	 * i.e. ~a = -(a + 1) where a is the integer number
	 */
	c = ~a;
	printf("~a is\t\t %d\n", c);
	c = ~b;
	printf("~b is\t\t %d\n", c);

	/**
	 * Left shift operator, shifts the value
	 * nth steps given. i.e a << 3, shifts binary number
	 * equivalent to value of a three steps to left
	 */
	c = a << 3;
	printf("a << 3 is\t %d\n", c);

	/**
	 * Right shift operator works as the left shift
	 * operator shifting to the right side
	 */
	c = b >> 4;
	printf("b >> 4 is\t %d\n", c);

	return (0);
}

/**
 * Alternatively
 * a << n = a * 2 power n.
 * i.e. a << 2 = a * 2²
 *
 * a >> n = a / 2 power n.
 * i.e. a >> 2 = a / 2²
 */
