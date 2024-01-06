#include "arithmetic.h"

/**
 * _pow - computes product of a number x
 * raised by power y
 * @x: base number
 * @y: exponent
 *
 * Return: result
 */
unsigned int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (-1);
	else
		return (x * _pow(x, y - 1));
}
