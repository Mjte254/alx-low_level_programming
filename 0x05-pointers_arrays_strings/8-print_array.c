#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <stdio.h>

/**
 * print_array - prints n element of an array of integers
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
=======
>>>>>>> master

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
<<<<<<< HEAD
=======
>>>>>>> 2c603ce (8. Arrays are not pointers)
>>>>>>> master
}
