#include "main.h"
<<<<<<< HEAD

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: Length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
=======
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
>>>>>>> 43a4091 (2. This report, by its very length, defends itself against the risk of being read)
}
