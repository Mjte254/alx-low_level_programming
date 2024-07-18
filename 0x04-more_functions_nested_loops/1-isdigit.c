#include "main.h"

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * _isdigit - write a function that check for a digit (0 through 9).
 * @c: char to check
 * Return:  0 or 1
=======
>>>>>>> master
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
<<<<<<< HEAD
=======
>>>>>>> bb1bf86 (1. isdigit)
>>>>>>> master
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
