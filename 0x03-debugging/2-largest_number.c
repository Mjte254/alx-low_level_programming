#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 56be395 (2. 0 > 972?)
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
=======
	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
<<<<<<< HEAD
	largest = c;
>>>>>>> 015d292 (2. 0 > 972?)
=======
		largest = c;
>>>>>>> f665927 (2. 0 > 972?)
	}

	return (largest);
}
