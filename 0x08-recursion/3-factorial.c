#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */

=======
>>>>>>> master

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
<<<<<<< HEAD
=======
>>>>>>> fe41f89 (3. You mustn't be afraid to dream a little bigger, darling)
>>>>>>> master
int factorial(int n)
{
	if (n < 0)
		return (-1);
<<<<<<< HEAD
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
=======
<<<<<<< HEAD
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
=======
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
>>>>>>> fe41f89 (3. You mustn't be afraid to dream a little bigger, darling)
>>>>>>> master
}
