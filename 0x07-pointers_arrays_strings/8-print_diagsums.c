<<<<<<< HEAD
#include "main.c"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

			for (i = 0; i < size; i++)
			{
				p = (i * size) + i;
				l += *(a + p);
			}
			for (j = 0; j < size; j++)
			{
				p = (j * size) + (size - 1 - j);
				r += *(a + p);
			}
			printf("%i, %i\n", l, r);
=======
#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
>>>>>>> 7e9f0fc (7. The line of life is a ragged diagonal between duty and desire)
}
