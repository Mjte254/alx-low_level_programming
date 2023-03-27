#include "main.h"
<<<<<<< HEAD

/**
 * swap_int - swaps the values of integers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
=======
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
>>>>>>> 7567dea (1. Don't swap horses in crossing a stream)
}
