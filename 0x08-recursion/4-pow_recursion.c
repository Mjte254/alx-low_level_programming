#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base.
 * @y: exponent..
 * Return: value of the exponential.
 */

=======

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
>>>>>>> d87f876 (4. Once an idea has taken hold of the brain it's almost impossible to eradicate)
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
<<<<<<< HEAD
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
=======
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
>>>>>>> d87f876 (4. Once an idea has taken hold of the brain it's almost impossible to eradicate)
}
