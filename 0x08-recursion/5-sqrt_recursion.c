#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <stdio.h>

/**
* power_operation - returns the natural square root of a number.
* @n: input number.
* @c: iterator.
* Return: square root or -1.
*/

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

=======
>>>>>>> master

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
<<<<<<< HEAD
=======
>>>>>>> 071be02 (5. Your subconscious is looking for the dreamer)
>>>>>>> master
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
<<<<<<< HEAD
=======
<<<<<<< HEAD
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
=======
>>>>>>> master
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
<<<<<<< HEAD
=======
>>>>>>> 071be02 (5. Your subconscious is looking for the dreamer)
>>>>>>> master
}
