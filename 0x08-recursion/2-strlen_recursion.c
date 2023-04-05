#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
=======
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
>>>>>>> d975c47 (2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange)
}
