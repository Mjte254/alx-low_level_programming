<<<<<<< HEAD
=======
<<<<<<< HEAD
#include "main.c"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s:first occurrence in the string
 * @accept: matches one of the bytes, or @NULL if no such byte
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
=======
>>>>>>> master
#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
<<<<<<< HEAD
=======
>>>>>>> e5e5486 (4. strpbrk)
>>>>>>> master
}
