#include "function_pointers.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

=======
>>>>>>> master
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
<<<<<<< HEAD
=======
>>>>>>> 2bd3e70 (2. To hell with circumstances; I create opportunities)
>>>>>>> master
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

<<<<<<< HEAD
=======
<<<<<<< HEAD
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

=======
>>>>>>> master
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
<<<<<<< HEAD
=======
>>>>>>> 2bd3e70 (2. To hell with circumstances; I create opportunities)
>>>>>>> master
	return (-1);
}
