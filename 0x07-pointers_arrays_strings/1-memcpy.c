<<<<<<< HEAD
#include "main.c"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

=======
#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
>>>>>>> 468acb4 (1. memcpy)
	return (dest);
}
