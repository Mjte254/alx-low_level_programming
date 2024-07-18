#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
=======
>>>>>>> master
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
<<<<<<< HEAD
=======
>>>>>>> 71b6f50 (4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy)
>>>>>>> master
	}
}
