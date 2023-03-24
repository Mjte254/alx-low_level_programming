#include "main.h"

/**
<<<<<<< HEAD
 * _isdigit - write a function that check for a digit (0 through 9).
 * @c: char to check
 * Return:  0 or 1
=======
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
>>>>>>> bb1bf86 (1. isdigit)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
