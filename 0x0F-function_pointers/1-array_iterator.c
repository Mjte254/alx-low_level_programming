<<<<<<< HEAD
=======
<<<<<<< HEAD
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */

=======
>>>>>>> master
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
<<<<<<< HEAD
=======
>>>>>>> afa67ca (1. If you spend too much time thinking about a thing, you'll never get it done)
>>>>>>> master
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

<<<<<<< HEAD
=======
<<<<<<< HEAD
	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
=======
>>>>>>> master
	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
<<<<<<< HEAD
=======
>>>>>>> afa67ca (1. If you spend too much time thinking about a thing, you'll never get it done)
>>>>>>> master
}
