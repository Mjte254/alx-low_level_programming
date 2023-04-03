#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte,
 * @s: address to memory area.
 * @b: char to be used.
 * @dest: number of bytes to the memory block.
 * Return: the pointer to dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++;  n--)
	{
		s[i] = b;

	}

=======
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
>>>>>>> 6d3a8c2 (0. memset)
	return (s);
}
